/**
 *  BOJ 1100번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

#define LEN 8

int main(void){
	int i,j,cnt=0;
	char data[LEN+1];
	for(i=0;i<LEN;i++){
		scanf("%s",data);
		for(j=0;j<LEN;j++) if(data[j]=='F'&&(i+j)%2==0) cnt++;
	}
	printf("%d\n",cnt);
	return 0;
}