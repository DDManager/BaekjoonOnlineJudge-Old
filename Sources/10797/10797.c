/**
 *  BOJ 10797번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int n,d,l,c=0;
	scanf("%d",&n);
	for(l=0;l<5;l++){
		scanf("%d",&d);
		if(n==d) c++;
	}
	printf("%d\n",c);
	return 0;
}