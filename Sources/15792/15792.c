/**
 *  BOJ 15792번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 500 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int A,B;
	int pc=0;
	int i;
	scanf("%d %d",&A,&B);
	for(i=0;i<=1000;i++){
		int mok=A/B;
		A-=mok*B;
		if(mok>=10) printf("%d",mok);
		else putchar(mok+'0');
		if(A==0) break;
		if(A<B){
			if(!pc++) putchar('.');
			A*=10;
		}
	}
	return 0;
}