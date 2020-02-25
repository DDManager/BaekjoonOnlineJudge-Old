/**
 *  BOJ 6376번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void) {
	int f=1,i;
	double e=1;
	puts("n e");
	puts("- -----------");
	puts("0 1");
	for(i=1;i<=9;i++){
		f*=i;
		e+=1.0/f;
		printf((i<3)?"%d %.2g\n":"%d %.9f\n",i,e);
	}
	return 0;
}