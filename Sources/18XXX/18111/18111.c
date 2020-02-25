/**
 *  BOJ 18111번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,092 KB / 1,048,576 KB
 *  소요 시간 : 148 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))

int main(void){
	int N,M,B;
	int *block;
	int i,j;
	int low=999,high=-1;
	scanf("%d %d %d",&N,&M,&B);
	if(!N||!M){
		puts("0 0");
		return 0;
	}
	block=(int*)calloc(N*M,sizeof(int));
	for(i=0;i<N*M;i++){
		scanf("%d",&block[i]);
		low=MIN(low,block[i]);
		high=MAX(high,block[i]);
	}
	if(low==high) printf("0 %d\n",high);
	else{
		int up,down,h_res=low,t_res=201840110;
		for(i=low;i<=high;i++){
			up=down=0;
			for(j=0;j<N*M;j++){
				if(block[j]>i) up+=block[j]-i;
				else if(block[j]<i) down+=i-block[j];
			}
			if(B+up>=down){
				if(t_res>up*2+down){
					t_res=up*2+down;
					h_res=i;
				}else if(t_res==up*2+down) h_res=i;
			}
		}
		printf("%d %d\n",t_res,h_res);
	}
	return 0;
}