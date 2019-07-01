/**
 *  BOJ 10828번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int cnt=0,t,i,read,*stack;
	char cmd[6]={0};
	scanf("%d",&t);
	stack=(int*)calloc(t,sizeof(int));
	for(i=0;i<t;i++){
		scanf("%s",cmd);
		if(strcmp(cmd,"push")==0){
			scanf("%d",&read);
			stack[cnt++]=read;
		}else if(strcmp(cmd,"pop")==0){
			if(cnt){
				printf("%d\n",stack[cnt-1]);
				stack[--cnt]=0;
			}else puts("-1");
		}else if(strcmp(cmd,"size")==0) printf("%d\n",cnt);
		else if(strcmp(cmd,"empty")==0) printf("%d\n",cnt==0);
		else if(strcmp(cmd,"top")==0){
			if(cnt) printf("%d\n",stack[cnt-1]);
			else puts("-1");
		}
	}
	free(stack);
	return 0;
}