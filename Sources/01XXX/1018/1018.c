/**
 *  BOJ 1018번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define MMIN(x,y) ((x)<(y)?(x):(y))

int main(void){
	int N,M;
	char **read;
	int answer=64;
	int i,j,r,c;
	scanf("%d %d",&N,&M);
	read=(char**)calloc(N,sizeof(char*));
	for(i=0;i<N;i++){
		read[i]=(char*)calloc(M,sizeof(char));
		scanf("%s",read[i]);
	}
	for(i=0;i<=N-8;i++){
		for(j=0;j<=M-8;j++){
			int cnt=0;
			for(r=0;r<8;r++)
				for(c=0;c<8;c++)
					cnt+=read[i+r][j+c]==(r%2==c%2?'W':'B');
			answer=MMIN(MMIN(answer,cnt),64-cnt);
		}
	}
	printf("%d\n",answer);
	return 0;
}