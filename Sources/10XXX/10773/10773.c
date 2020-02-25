/**
 *  BOJ 10773번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 4,148 KB / 262,144 KB
 *  소요 시간 : 12 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct SN{
	int item;
	struct SN *link;
}SN;

void push_stk(SN **s,int item){
	SN *tmp=(SN*)malloc(sizeof(SN));
	tmp->item=item;
	tmp->link=*s;
	*s=tmp;
}

int pop_stk(SN **s){
	SN *tmp=*s;
	char r=tmp->item;
	*s=tmp->link;
	free(tmp);
	return r;
}

int main(void){
	int K;
	SN *s=NULL;
	int answer=0;
	scanf("%d",&K);
	while(K--){
		int N;
		scanf("%d",&N);
		if(N) push_stk(&s,N);
		else pop_stk(&s);
	}
	while(s){
		answer+=s->item;
		s=s->link;
	}
	printf("%d\n",answer);
	return 0;
}