/**
 *  BOJ 3425번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,564 KB / 131,072 KB
 *  소요 시간 : 252 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

#define MAX_CMDS_COUNT 100000
#define MAX_NUM_STACK_SIZE 1000

typedef struct{
	char cmd[4];
	int X;
}Command;

typedef struct{
	Command list[MAX_CMDS_COUNT];
	int cnt;
}CmdList;

typedef struct{
	int stack[MAX_NUM_STACK_SIZE];
	int top;
}NumStack;
int isStackEmpty(NumStack *s){
	return s->top==-1;
}
void pushStack(NumStack *s,int data){
	s->stack[++(s->top)]=data;
}
int popStack(NumStack *s,int *n){
	if(isStackEmpty(s)) return 1;
	else *n=s->stack[(s->top)--];
	return 0;
}

int calc(CmdList cmds,int v,int *ans){
	NumStack stk;
	int N,i;
	stk.top=-1;
	N=cmds.cnt;
	pushStack(&stk,v);
	for(i=0;i<N;i++){
		Command cmd=cmds.list[i];
		if(strcmp(cmd.cmd,"NUM")==0) pushStack(&stk,cmd.X);
		else if(strcmp(cmd.cmd,"POP")==0){
			int p;
			if(popStack(&stk,&p)) return 1;
		}else if(strcmp(cmd.cmd,"INV")==0){
			if(isStackEmpty(&stk)) return 1;
			else stk.stack[stk.top]*=-1;
		}else if(strcmp(cmd.cmd,"DUP")==0){
			if(isStackEmpty(&stk)) return 1;
			else pushStack(&stk,stk.stack[stk.top]);
		}else if(strcmp(cmd.cmd,"SWP")==0){
			int X,Y;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			pushStack(&stk,X);
			pushStack(&stk,Y);
		}else if(strcmp(cmd.cmd,"ADD")==0){
			int X,Y;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			if(X+Y>1000000000||X+Y<-1000000000) return 1;
			pushStack(&stk,X+Y);
		}else if(strcmp(cmd.cmd,"SUB")==0){
			int X,Y;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			if(Y-X>1000000000||Y-X<-1000000000) return 1;
			pushStack(&stk,Y-X);
		}else if(strcmp(cmd.cmd,"MUL")==0){
			int X,Y;
			long long M;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			M=(long long)X*Y;
			if(M>1000000000||M<-1000000000) return 1;
			pushStack(&stk,X*Y);
		}else if(strcmp(cmd.cmd,"DIV")==0){
			int X,Y;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			if(X==0) return 1;
			pushStack(&stk,Y/X);
		}else if(strcmp(cmd.cmd,"MOD")==0){
			int X,Y;
			if(popStack(&stk,&X)) return 1;
			if(popStack(&stk,&Y)) return 1;
			if(X==0) return 1;
			pushStack(&stk,Y%X);
		}
	}
	if(isStackEmpty(&stk)) return 1;
	*ans=stk.stack[0];
	return stk.top!=0;
}

int main(void){
	while(1){
		CmdList cmds;
		cmds.cnt=0;
		int N;
		while(1){
			char cmd[5]={0};
			scanf("%s",cmd);
			if(strcmp(cmd,"QUIT")==0) return 0;
			else if(strcmp(cmd,"END")==0) break;
			else{
				strcpy(cmds.list[cmds.cnt].cmd,cmd);
				if(strcmp(cmd,"NUM")==0){
					int X;
					scanf("%d",&X);
					cmds.list[cmds.cnt].X=X;
				}
				cmds.cnt++;
			}
		}
		scanf("%d",&N);
		while(N--){
			int V,answer;
			scanf("%d",&V);
			if(calc(cmds,V,&answer)) puts("ERROR");
			else printf("%d\n",answer);
		}
		puts("");
	}
	return 0;
}