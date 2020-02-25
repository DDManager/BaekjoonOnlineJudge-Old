/**
 *  BOJ 1075번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N,F;
	int div,i;
	scanf("%d",&N);
	scanf("%d",&F);
	div=N/100*100;
	for(i=0;i<100;i++){
		if((div+i)%F==0){
			printf("%02d\n",i);
			break;
		}
	}
	return 0;
}