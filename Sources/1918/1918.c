/**
 *  BOJ 1918번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SN{
	char item;
	struct SN *link;
}SN;

int isEmpty(SN *s){
	return s==NULL;
}

void push(SN **s,char item){
	SN *tmp=(SN*)malloc(sizeof(SN));
	tmp->item=item;
	tmp->link=*s;
	*s=tmp;
}

char pop(SN **s){
	SN *tmp=*s;
	char r=tmp->item;
	*s=tmp->link;
	free(tmp);
	return r;
}

char peek(SN *s){
	return s->item;
}

int prec(char c){
	switch(c){
	case '(': case ')': return 0;
	case '+': case '-': return 1;
	case '*': case '/': return 2;
	}
	return -1;
}

void conv(char *str){
	int i,len=strlen(str);
	char ch,top;
	SN *s=NULL;
	for(i=0;i<len;i++){
		ch=str[i];
		switch(ch){
		case '+': case '-': case '*': case '/':
			while(!isEmpty(s)&&prec(ch)<=prec(peek(s))) putchar(pop(&s));
			push(&s,ch);
			break;
		case '(': push(&s,ch); break;
		case ')':
			top=pop(&s);
			while(top!='('){
				putchar(top);
				top=pop(&s);
			}
			break;
		default: putchar(ch); break;
		}
	}
	while(!isEmpty(s)) putchar(pop(&s));
}
int main(void){
	char str[101];
	scanf("%s",str);
	conv(str);
	return 0;
}