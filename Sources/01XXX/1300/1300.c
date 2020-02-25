/**
 *  BOJ 1300번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 8 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int n,k;

int bs(int left,int right){
	int mid=(left+right)/2,cnt=0,i;
	if(left>right) return left;
	for(i=1;i<=n;i++) cnt+=n>mid/i?mid/i:n;
	if(cnt<k) return bs(mid+1,right);
	else return bs(left,mid-1);
}

int main(void){
	scanf("%d %d",&n,&k);
	printf("%d\n",bs(1,k));
	return 0;
}