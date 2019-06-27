/**
 *  BOJ 1065번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N,a,b,c,i,cnt=99;
	scanf("%d",&N);
	if(N<100) printf("%d\n",N);
	else{
		for(i=100;i<=N;i++){
			a=i/100;b=(i/10)%10;c=i%10;
			if(a-b==b-c) cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}