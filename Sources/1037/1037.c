/**
 *  BOJ 1037번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int c,d,min=1000000,max=0,i;
	scanf("%d",&c);
	for (i=0;i<c;i++) {
		scanf("%d",&d);
		if(d<min) min=d;
		if(d>max) max=d;
	}
	printf("%d\n",min*max);
	return 0;
}