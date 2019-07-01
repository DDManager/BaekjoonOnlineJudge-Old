/**
 *  BOJ 10817번 C언어 소스 코드
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
	int d,m=100,M=0,s=0,i;
	for(i=0;i<3;i++){
		scanf("%d",&d);
		s+=d;
		if(d<m) m=d;
		if(d>M) M=d;
	}
	printf("%d\n",s-m-M);
	return 0;
}