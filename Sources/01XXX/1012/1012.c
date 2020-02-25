/**
 *  BOJ 1012번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,224 KB / 524,288 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

char **data;
int M,N;

void spread(int x,int y){
	data[x][y]=2;
	if(x>0&&data[x-1][y]==1) spread(x-1,y);
	if(x<M-1&&data[x+1][y]==1) spread(x+1,y);
	if(y>0&&data[x][y-1]==1) spread(x,y-1);
	if(y<N-1&&data[x][y+1]==1) spread(x,y+1);
}

int main(void){
	int T,K,X,Y,i,j,p,ans;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		ans=0;
		scanf("%d %d %d",&M,&N,&K);
		data=(char**)calloc(M,sizeof(char*));
		for(j=0;j<M;j++){
			data[j]=(char*)calloc(N,sizeof(char));
		}
		for(j=0;j<K;j++){
			scanf("%d %d",&X,&Y);
			data[X][Y]=1;
		}
		for(j=0;j<M;j++){
			for(p=0;p<N;p++){
				if(data[j][p]==1){
					spread(j,p);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
		for(j=0;j<M;j++){
			free(data[j]);
		}
		free(data);
	}
	return 0;
}