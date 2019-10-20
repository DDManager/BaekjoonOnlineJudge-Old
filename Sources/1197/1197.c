/**
 *  BOJ 1197번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 3,460 KB / 131,072 KB
 *  소요 시간 : 312 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define INF 20184011

int *parent;

void set_init(int n){
	int i;
	parent=(int*)calloc(n+1,sizeof(int));
	for(i=0;i<=n;i++) parent[i]=-1;
}

int set_find(int curr){
	if(parent[curr]==-1) return curr;
	while(parent[curr]!=-1) curr=parent[curr];
	return curr;
}

void set_union(int a,int b){
	int root1=set_find(a);
	int root2=set_find(b);
	if(root1!=root2) parent[root1]=root2;
}

typedef struct Edge{
	int start,end,weight;
}Edge;

typedef struct GraphType{
	int e;
	Edge *edges;
}GraphType;

void init_graph(GraphType *g,int E){
	int i;
	g->e=0;
	g->edges=(Edge*)calloc(E,sizeof(Edge));
	for(i=0;i<E;i++){
		g->edges[i].start=0;
		g->edges[i].end=0;
		g->edges[i].weight=INF;
	}
}

void insert_graph_edge(GraphType *g,int start,int end,int w){
	g->edges[g->e].start=start;
	g->edges[g->e].end=end;
	g->edges[g->e].weight=w;
	g->e++;
}

int comp(const void *a,const void *b){
	return ((Edge*)a)->weight-((Edge*)b)->weight;
}

long long kruskal(GraphType g,int V){
	int edge_accepted=0;
	int uset,vset;
	Edge e;
	long long sum=0;
	int i=0;
	set_init(V);
	qsort(g.edges,g.e,sizeof(Edge),comp);
	while(edge_accepted<V-1){
		e=g.edges[i];
		uset=set_find(e.start);
		vset=set_find(e.end);
		if(uset!=vset){
			edge_accepted++;
			set_union(uset,vset);
			sum+=e.weight;
		}
		i++;
	}
	return sum;
}

int main(void){
	int V,E;
	int i;
	GraphType g;
	scanf("%d %d",&V,&E);
	init_graph(&g,E);
	for(i=0;i<E;i++){
		int s,e,w;
		scanf("%d %d %d",&s,&e,&w);
		insert_graph_edge(&g,s,e,w);
	}
	printf("%lld\n",kruskal(g,V));
	return 0;
}