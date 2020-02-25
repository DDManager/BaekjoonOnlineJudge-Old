/**
 *  BOJ 1436번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 20 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N;
	int i;
	scanf("%d",&N);
	for(i=666;;i++){
		int flag=0;
		int j=i;
		do{
			if(j%1000==666){
				flag=1;
				break;
			}
			j/=10;
		}while(j>=666);
		if(flag&&--N==0){
			printf("%d\n",i);
			return 0;
		}
	}
	return 0;
}