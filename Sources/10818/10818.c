/**
 *  BOJ 10818번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 180 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int n,i,x,m=1000000,M=-1000000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		if(x<m) m=x;
		if(x>M) M=x;
	}
	printf("%d %d\n",m,M);
	return 0;
}