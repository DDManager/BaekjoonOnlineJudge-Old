/**
 *  BOJ 1476번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 4,096 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int E,S,M,e=0,s=0,m=0,i;
	scanf("%d %d %d",&E,&S,&M);
	for(i=1;;i++){
		e=(e+1)%15;
		s=(s+1)%28;
		m=(m+1)%19;
		if(e==E%15&&s==S%28&&m==M%19) break;
	}
	printf("%d\n",i);
	return 0;
}