/**
 *  BOJ 15552번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 352 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int T,a,b;
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}