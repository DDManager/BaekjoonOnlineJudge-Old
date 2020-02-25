/**
 *  BOJ 17828번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,996 KB / 262,144 KB
 *  소요 시간 : 8 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N,X;
	char *str;
	int pos,value,i;
	scanf("%d %d",&N,&X);
	str=(char*)calloc(N+1,sizeof(char));
	if(X<N||X>N*26){
		puts("!");
		return 0;
	}
	for(i=0;i<N;i++) str[i]='A';
	for(pos=N-1,value=N;pos>=0&&value<X;pos--,value+=25) str[pos]='Z';
	for(i=value;i>X;i--) str[pos+1]--;
	puts(str);
	return 0;
}