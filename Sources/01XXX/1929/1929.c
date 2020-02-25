/**
 *  BOJ 1929번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,072 KB / 262,144 KB
 *  소요 시간 : 16 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int M,N;
	char *E;
	int i,j;
	scanf("%d %d",&M,&N);
	E=(char*)calloc(N+1,sizeof(char));
	for(E[1]=1,i=2;i<=N;i++){
		if(E[i]) continue;
		j=i;
		while(j+i<=N){
			j+=i;
			if(!E[j]) E[j]=1;
		}
	}
	for(i=M;i<=N;i++) if(!E[i]) printf("%d\n",i);
	return 0;
}