/**
 *  BOJ 1463번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,092 KB / 131,072 KB
 *  소요 시간 : 4 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

char dp[1000001];
int min(int a,int b){return a<b?a:b;}
int main(void){
	int N,i;
	scanf("%d",&N);
	dp[1]=0;
	for(i=2;i<=N;i++){
		dp[i]=dp[i-1]+1;
		if(i%2==0) dp[i]=min(dp[i],dp[i/2]+1);
		if(i%3==0) dp[i]=min(dp[i],dp[i/3]+1);
	}
	printf("%d\n",dp[N]);
	return 0;
}