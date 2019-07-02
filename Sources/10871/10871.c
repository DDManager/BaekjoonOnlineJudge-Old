/**
 *  BOJ 10871번 C언어 소스 코드
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
	int n,x,l,a,c=0;
	scanf("%d %d",&n,&x);
	for(l=0;l<n;l++){
		scanf("%d",&a);
		if(a<x) printf(c++?" %d":"%d",a);
	}
	return 0;
}