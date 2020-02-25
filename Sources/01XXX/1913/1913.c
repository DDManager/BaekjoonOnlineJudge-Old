/**
 *  BOJ 1913번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 4,944 KB / 131,072 KB
 *  소요 시간 : 144 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

void set(int**,int,int,int);

int n;
int find,ans_i=0,ans_j=0;

int main(void){
	int i,j,dir=0,c=1,cnt=0;
	int loop,loop2;
	int **data;
	scanf("%d",&n);
	scanf("%d",&find);
	data=(int**)calloc(n,sizeof(int*));
	for(loop=0;loop<n;loop++){
		data[loop]=(int*)calloc(n,sizeof(int));
	}
	i=n/2;
	j=n/2;
	while(1){
		for(loop=0;loop<2;loop++){
			for(loop2=0;loop2<c;loop2++){
				switch(dir%4){
					case 0:
						set(data,i--,j,++cnt);
						break;
					case 1:
						set(data,i,j++,++cnt);
						break;
					case 2:
						set(data,i++,j,++cnt);
						break;
					case 3:
						set(data,i,j--,++cnt);
						break;
				}
			}
			dir++;
		}
		c++;
		if(cnt>n*n) break;
	}
	for(loop=0;loop<n;loop++){
		for(loop2=0;loop2<n;loop2++){
			if(loop2>0) printf(" %d",data[loop][loop2]);
			else printf("%d",data[loop][loop2]);
		}
		printf("\n");
		free(data[loop]);
	}
	free(data);
	printf("%d %d\n",ans_i,ans_j);
	return 0;
}

void set(int **data,int i,int j,int cnt){
	if(cnt<=n*n){
		data[i][j]=cnt;
		if(cnt==find){
			ans_i=i+1;
			ans_j=j+1;
		}
	}
}