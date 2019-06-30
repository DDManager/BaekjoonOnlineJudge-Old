/**
 *  BOJ 5585번 C언어 소스 코드
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
	int coin[6]={500,100,50,10,5,1},cash,cnt=0,t,i;
	scanf("%d",&cash);
	cash=1000-cash;
	for(i=0;i<6;i++){
		t=cash/coin[i];
		cnt+=t;
		cash-=t*coin[i];
	}
	printf("%d\n",cnt);
	return 0;
}