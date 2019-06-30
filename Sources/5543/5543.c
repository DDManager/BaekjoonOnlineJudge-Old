/**
 *  BOJ 5543번 C언어 소스 코드
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
	int b=2000,d=2000,i,t;
	for(i=0;i<5;i++){
		scanf("%d",&t);
		if(i<3&&t<b) b=t;
		else if(t<d) d=t;
	}
	printf("%d\n",b+d-50);
	return 0;
}