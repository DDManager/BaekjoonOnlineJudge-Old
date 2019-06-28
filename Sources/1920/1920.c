/**
 *  BOJ 1920번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,900 KB / 131,072 KB
 *  소요 시간 : 80 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int search(int);
int compare(const void *a,const void *b){
	typedef const int *ci;
	ci ap=(ci)a,bp=(ci)b;
	if(*ap>*bp) return 1;
	else if(*ap<*bp) return -1;
	return 0;
}

int n,*adata;

int main(void){
	int m,l,x;
	scanf("%d",&n);
	adata=(int*)calloc(n,sizeof(int));
	for(l=0;l<n;l++){
		scanf("%d",&adata[l]);
	}
	qsort(adata,n,sizeof(int),compare);
	scanf("%d",&m);
	for(l=0;l<m;l++){
		scanf("%d",&x);
		printf("%d\n",search(x));
	}
	free(adata);
	return 0;
}

int search(int x){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(adata[mid]==x) return 1;
		else if(adata[mid]<x) low=mid+1;
		else high=mid-1;
	}
	return 0;
}