/**
 *  BOJ 1966번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,224 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <queue>
using namespace std;

typedef struct Doc{
	int idx,pri;
}Doc;

int main(void){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,M;
		int answer=0;
		queue<Doc> q;
		priority_queue<int> pq;
		int i;
		scanf("%d %d",&N,&M);
		for(i=0;i<N;i++){
			Doc d;
			d.idx=i;
			scanf("%d",&d.pri);
			q.push(d);
			pq.push(d.pri);
		}
		while(true){
			if(q.front().pri==pq.top()){
				answer++;
				if(q.front().idx==M) break;
				q.pop();
				pq.pop();
			}else{
				q.push(q.front());
				q.pop();
			}
		}
		printf("%d\n",answer);
	}
	return 0;
}