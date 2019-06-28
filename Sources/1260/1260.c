/**
 *  BOJ 1260번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,032 KB / 131,072 KB
 *  소요 시간 : 4 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

#define MAX_QSIZE 10001

int edge[1001][1001];
int vis[1001];
int u,v,N,M,cnt;

typedef struct{
	int queue[MAX_QSIZE];
	int front,rear;
}QueueType;

void init(QueueType* q){
	q->front=q->rear=0;
}

void enqueue(QueueType* q,int item){
	q->front=(q->front+1)%MAX_QSIZE;
	q->queue[q->front]=item;
}

int dequeue(QueueType* q){
	q->rear=(q->rear+1)%MAX_QSIZE;
	return q->queue[q->rear];
}

void bfs(int c){
	QueueType q;
	init(&q);
	vis[c]=1;
	enqueue(&q,c);
	while(q.front!=q.rear){
		int h=q.queue[(q.rear+1)%MAX_QSIZE],th;
		dequeue(&q);
		printf(cnt++?" %d":"%d",h);
		for(th=1;th<=N;th++){
			if(vis[th]||(edge[h][th]==0)) continue;
			vis[th]=1;
			enqueue(&q,th);
		}
	}
}

void dfs(int c){
	int i;
	vis[c]=1;
	printf(cnt++?" %d":"%d",c);
	for(i=1;i<=N;i++){
		if(vis[i]!=0||edge[c][i]==0) continue;
		dfs(i);
	}
}

int main(void){
	int V,i;
	scanf("%d %d %d",&N,&M,&V);
	for(i=0;i<M;i++){
		scanf("%d %d",&u,&v);
		edge[u][v]=edge[v][u]=1;
	}
	dfs(V);
	for(i=0;i<=N;i++) vis[i]=0;
	cnt=0;
	puts("");
	bfs(V);
	return 0;
}