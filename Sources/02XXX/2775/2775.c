/**
 *  BOJ 2775번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int T;
	int kn[15][15]={0};
	int i;
	scanf("%d",&T);
	for(i=1;i<15;i++){
		kn[0][i]=i;
		kn[i][1]=1;
	}
	for(i=0;i<T;i++){
		int k,n;
		int flor,room;
		scanf("%d %d",&k,&n);
		if(!kn[k][n]){
			for(flor=1;flor<=k;flor++){
				for(room=1;room<=n;room++){
					if(kn[flor][room]) continue;
					kn[flor][room]=kn[flor][room-1]+kn[flor-1][room];
				}
			}
		}
		printf("%d\n",kn[k][n]);
	}
	return 0;
}