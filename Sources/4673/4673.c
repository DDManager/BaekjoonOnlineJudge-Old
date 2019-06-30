/**
 *  BOJ 4673번 C언어 소스 코드
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
	int n=7,c=0,i;
	puts("1\n3\n5");
	for(;n<=10000;n+=i,c++){
		if(n%1001==5)i=15,c=1;
		else if(c%10==0)i=2;
		else i=11;
		printf("%d\n",n);
	}
}