/**
 *  BOJ 7568번 C언어 소스 코드
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

typedef struct Peo{int x,y;}Peo;
int main(void){
	int N;
	int i;
	Peo *p;
	scanf("%d",&N);
	p=(Peo*)calloc(N,sizeof(Peo));
	for(i=0;i<N;i++) scanf("%d %d",&p[i].x,&p[i].y);
	for(i=0;i<N;i++){
		int rnk=1;
		int j;
		for(j=0;j<N;j++) if(p[j].x>p[i].x&&p[j].y>p[i].y) rnk++;
		printf(i?" %d":"%d",rnk);
	}
	return 0;
}