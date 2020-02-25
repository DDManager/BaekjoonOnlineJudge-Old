/**
 *  BOJ 1005번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,892 KB / 524,288 KB
 *  소요 시간 : 224 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int run_test(void){
	int N,K;
	vector<int> D;
	int W;
	vector<int> times,in_degree;
	vector<vector<int> > g;
	queue<int> q;
	int i;
	scanf("%d %d",&N,&K);
	D.resize(N+1);
	times.resize(N+1);
	in_degree.resize(N+1);
	g.resize(N+1);
	for(i=1;i<=N;i++) scanf("%d",&D[i]);
	for(i=0;i<K;i++){
		int X,Y;
		scanf("%d %d",&X,&Y);
		g[X].push_back(Y);
		in_degree[Y]++;
	}
	scanf("%d",&W);
	for(i=1;i<=N;i++){
		if(in_degree[i]==0){
			q.push(i);
			times[i]=D[i];
		}
	}
	while(!q.empty()){
		int now;
		int s;
		int i;
		now=q.front();
		q.pop();
		if(now==W) break;
		s=g[now].size();
		for(i=0;i<s;i++){
			int next=g[now][i];
			if(--in_degree[next]==0) q.push(next);
			if(times[next]<times[now]+D[next]){
				times[next]=times[now]+D[next];
			}
		}
	}
	return times[W];
}

int main(void){
	int T;
	int i;
	scanf("%d",&T);
	for(i=0;i<T;i++) printf("%d\n",run_test());
	return 0;
}