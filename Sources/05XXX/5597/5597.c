/**
 *  BOJ 5597번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int l,n,d[30]={0};
	for(l=0;l<28;l++){
		scanf("%d",&n);
		d[n-1]++;
	}
	for(l=0;l<30;l++){
		if(!d[l]) printf("%d\n",l+1);
	}
	return 0;
}