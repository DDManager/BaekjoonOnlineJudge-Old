/**
 *  BOJ 1753번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 8,228 KB / 131,072 KB
 *  소요 시간 : 160 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <queue>
#include <vector>
#define INF 20184011
using namespace std;

struct edge{
	int idx,dist;
	edge(void){}
	edge(int idx,int dist){this->idx=idx;this->dist=dist;}
	bool operator<(edge A)const{return dist>A.dist;}
};

int V,E,S,*dist;
vector<edge> *graph;

void dijkstra(void){
	priority_queue<edge> pq;
	int i;
	for(i=0;i<V;i++) dist[i]=INF;
	dist[S]=0;
	for(i=0;i<V;i++) pq.push(edge(i,dist[i]));
	while(!pq.empty()){
		edge now=pq.top();
		int i;
		pq.pop();
		if(now.dist!=dist[now.idx]) continue;
		for(i=0;i<(int)graph[now.idx].size();i++){
			edge next=graph[now.idx][i];
			if(dist[next.idx]>now.dist+next.dist){
				dist[next.idx]=now.dist+next.dist;
				pq.push(edge(next.idx,dist[next.idx]));
			}
		}
	}
}

int main(void){
	int i;
	scanf("%d %d",&V,&E);
	scanf("%d",&S); S--;
	dist=(int*)calloc(V+1,sizeof(int));
	graph=(vector<edge>*)calloc(V+1,sizeof(vector<edge>));
	for(i=0;i<E;i++){
		int u,v,w;
		scanf("%d %d %d",&u,&v,&w);
		u--,v--;
		graph[u].push_back(edge(v,w));
	}
	dijkstra();
	for(i=0;i<V;i++){
		if(dist[i]==INF) puts("INF");
		else printf("%d\n",dist[i]);
	}
	return 0;
}