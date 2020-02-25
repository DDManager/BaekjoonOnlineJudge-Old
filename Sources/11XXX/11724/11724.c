/**
 *  BOJ 11724번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,036 KB / 262,144 KB
 *  소요 시간 : 116 ms / 3,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct GraphType{
	int n;
	char **adj_mat;
	char *visited;
}GraphType;

void init_graph(GraphType *g,int n){
	int i;
	g->n=n;
	g->adj_mat=(char**)calloc(n+1,sizeof(char*));
	for(i=0;i<=n;i++) g->adj_mat[i]=(char*)calloc(n+1,sizeof(char));
	g->visited=(char*)calloc(n+1,sizeof(char));
	for(i=0;i<=n;i++) g->visited[i]=-1;
}

void insert_edge(GraphType *g,int start,int end){
	g->adj_mat[start][end]=g->adj_mat[end][start]=1;
	g->visited[start]=g->visited[end]=0;
}

void DFS(GraphType *g,int v){
	int w;
	g->visited[v]=1;
	for(w=1;w<=g->n;w++) if(g->adj_mat[v][w]&&!g->visited[w]) DFS(g,w);
}

int main(void){
	int N,M;
	GraphType g;
	int answer=0;
	int i;
	scanf("%d %d",&N,&M);
	init_graph(&g,N);
	for(i=0;i<M;i++){
		int s,e;
		scanf("%d %d",&s,&e);
		insert_edge(&g,s,e);
	}
	for(i=1;i<=N;i++){
		if(g.visited[i]<=0) answer++;
		if(!g.visited[i]) DFS(&g,i);
	}
	printf("%d\n",answer);
	return 0;
}