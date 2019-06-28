/**
 *  BOJ 1453번 C언어 소스 코드
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
	int n,seat[101]={0},l,d,ans=0;
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%d",&d);
		if (seat[d]) ans++;
		seat[d]++;
	}
	printf("%d\n",ans);
	return 0;
}