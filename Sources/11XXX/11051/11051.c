/**
 *  BOJ 11051번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

#define MODS 10007

int nCrModpLucas(int,int);
int nCrModpDP(int,int);

int main(void){
	int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",nCrModpLucas(n,k));
	return 0;
}

int nCrModpLucas(int n,int r){
	int ni,ri;
	if(r==0) return 1;
	ni=n%MODS,ri=r%MODS;
	return (nCrModpLucas(n/MODS,r/MODS)*nCrModpDP(ni,ri))%MODS;
}

int nCrModpDP(int n,int r){
	int *C=calloc(r+1,sizeof(int));
	C[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=i<r?i:r;j>0;j--) C[j]=(C[j]+C[j-1])%MODS;
	}
	return C[r];
}