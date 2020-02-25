/**
 *  BOJ 2630번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int white,blue;
char **matrix;

void solve(int hs,int he,int ws,int we){
	int cnt=0;
	int i,j;
	for(i=hs;i<he;i++) for(j=ws;j<we;j++) cnt+=matrix[i][j];
	if(cnt==(he-hs)*(we-ws)) blue++;
	else if(cnt==0) white++;
	else{
		int h2=(hs+he)/2,w2=(ws+we)/2;
		solve(hs,h2,ws,w2);
		solve(hs,h2,w2,we);
		solve(h2,he,ws,w2);
		solve(h2,he,w2,we);
	}
}

int main(void){
	int N;
	int i,j;
	scanf("%d",&N);
	matrix=(char**)calloc(N,sizeof(char*));
	for(i=0;i<N;i++){
		matrix[i]=(char*)calloc(N,sizeof(char));
		for(j=0;j<N;j++) scanf("%hhd",&matrix[i][j]);
	}
	solve(0,N,0,N);
	printf("%d\n%d\n",white,blue);
	return 0;
}