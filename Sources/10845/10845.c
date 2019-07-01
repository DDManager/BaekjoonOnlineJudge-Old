/**
 *  BOJ 10845번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAX_N;
typedef struct{
	int *queue,front,rear;
}QueueType;

void init(QueueType *q,int N){
	q->front=0;q->rear=0;MAX_N=N+1;
	q->queue=(int*)calloc(MAX_N,sizeof(int));
}

int empty(QueueType *q){
	return q->front==q->rear;
}

void push(QueueType *q,int item){
	q->rear=(q->rear+1)%MAX_N;
	q->queue[q->rear]=item;
}

int pop(QueueType *q){
	if(empty(q)) return -1;
	q->front=(q->front+1)%MAX_N;
	return q->queue[q->front];
}

int front(QueueType *q){
	if(empty(q)) return -1;
	return q->queue[(q->front+1)%MAX_N];
}

int back(QueueType *q){
	if(empty(q)) return -1;
	return q->queue[q->rear%MAX_N];
}

int size(QueueType *q){
	int cnt=q->rear-q->front;
	if(cnt<0) cnt+=MAX_N;
	return cnt;
}

int main(void){
	int N,X;
	char cmd[6];
	QueueType q;
	scanf("%d",&N);
	init(&q,N);
	while(N--){
		scanf("%s",cmd);
		if(strcmp(cmd,"push")==0){
			scanf("%d",&X);
			push(&q,X);
		}else if(strcmp(cmd,"pop")==0) printf("%d\n",pop(&q));
		else if(strcmp(cmd,"size")==0) printf("%d\n",size(&q));
		else if(strcmp(cmd,"empty")==0) printf("%d\n",empty(&q));
		else if(strcmp(cmd,"front")==0) printf("%d\n",front(&q));
		else if(strcmp(cmd,"back")==0) printf("%d\n",back(&q));
	}
	free(q.queue);
	return 0;
}