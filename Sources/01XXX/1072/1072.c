/**
 *  BOJ 1072번 C언어 소스 코드
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
	long long x,y,i;
	int z,k;
	while(scanf("%lld %lld",&x,&y)!=EOF) {
		z=(int)(y*100/x);
		if(z>=99) {
			puts("-1");
			continue;
		}
		k=z+1;
		i=(x*k-100*y-1)/(100-k)+1;
		printf("%d\n",i);
	}
	return 0;
}