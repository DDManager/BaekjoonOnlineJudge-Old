/**
 *  BOJ 3036번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int GCD(int a,int b){return b?GCD(b,a%b):a;}
int main(void){
	int n;
	int first,k;
	int i;
	scanf("%d",&n);
	scanf("%d",&first);
	for(i=1;i<n;i++){
		scanf("%d",&k);
		printf("%d/%d\n",first/GCD(first,k),k/GCD(first,k));
	}
	return 0;
}