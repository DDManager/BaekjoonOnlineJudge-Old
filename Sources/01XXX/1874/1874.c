/**
 *  BOJ 1874번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,428 KB / 131,072 KB
 *  소요 시간 : 20 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct SN{
	int item;
	struct SN *link;
}SN;

int isEmpty(SN *s){
	return s==NULL;
}

void push(SN **s,int item){
	SN *tmp=(SN*)malloc(sizeof(SN));
	tmp->item=item;
	tmp->link=*s;
	*s=tmp;
}

void pop(SN **s){
	SN *tmp=*s;
	*s=tmp->link;
	free(tmp);
}

int main(void){
	SN *s=NULL;
	int N,i,p=0,id=0,*d;
	char *c;
	scanf("%d",&N);
	d=(int*)malloc(N*sizeof(int));
	c=(char*)calloc(N*4+1,sizeof(char));
	for(i=0;i<N;i++) scanf("%d",&d[i]);
	for(i=1;i<=N;i++){
		push(&s,i);
		c[p++]='+';
		c[p++]='\n';
		while(!isEmpty(s)&&s->item==d[id]){
			pop(&s);
			id++;
			c[p++]='-';
			c[p++]='\n';
		}
	}
	puts(isEmpty(s)?c:"NO");
	return 0;
}