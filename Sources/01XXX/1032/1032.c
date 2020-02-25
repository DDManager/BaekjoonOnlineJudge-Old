/**
 *  BOJ 1032번 C언어 소스 코드
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

int main(void){
	int N,l,i;
	char **input,ans[51]={0};
	scanf("%d",&N);
	input=(char**)calloc(N,sizeof(char*));
	for(l=0;l<N;l++){
		input[l]=(char*)calloc(51,sizeof(char));
		scanf("%s",input[l]);
	}
	for(i=0;i<50;i++){
		int flag=0;
		for(l=1;l<N;l++){
			if(input[l-1][i]!=input[l][i]){
				flag=1;
				break;
			}
		}
		if(flag) ans[i]='?';
		else ans[i]=input[0][i];
	}
	puts(ans);
	for(l=0;l<N;l++){
		free(input[l]);
	}
	free(input);
	return 0;
}