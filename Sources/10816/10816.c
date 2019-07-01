/**
 *  BOJ 10816번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 79,240 KB / 262,144 KB
 *  소요 시간 : 412 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int data[20000001];

int readInt(void){
	int i;
	scanf("%d",&i);
	return i;
}

int main(void){
	int n,m,i;
	n=readInt();
	for(i=0;i<n;i++) data[readInt()+10000000]++;
	m=readInt();
	for(i=0;i<m;i++) printf(i?" %d":"%d",data[readInt()+10000000]);
	return 0;
}