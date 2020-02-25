/**
 *  BOJ 11729번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 144 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

void hanoi(int n,int from,int tmp,int to){
	if(n==1) printf("%d %d\n",from,to);
	else{
		hanoi(n-1,from,to,tmp);
		printf("%d %d\n",from,to);
		hanoi(n-1,tmp,from,to);
	}
}

int main(void){
	int N;
	scanf("%d",&N);
	printf("%d\n",(1<<N)-1);
	hanoi(N,1,2,3);
	return 0;
}