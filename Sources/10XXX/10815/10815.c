/**
 *  BOJ 10815번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 4,980 KB / 262,144 KB
 *  소요 시간 : 340 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int search(int,int);
int comp(const void *a,const void *b){
	return *(int*)a-*(int*)b;
}
int *data;

int main(void){
	int n,m,l,x;
	scanf("%d",&n);
	data=(int*)calloc(n,sizeof(int));
	for(l=0;l<n;l++) scanf("%d",&data[l]);
	qsort(data,n,sizeof(int),comp);
	scanf("%d",&m);
	for(l=0;l<m;l++){
		scanf("%d",&x);
		printf(l?" %d":"%d",search(x,n));
	}
	free(data);
	return 0;
}

int search(int x,int n){
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(data[mid]==x) return 1;
		else if(data[mid]<x) low=mid+1;
		else high=mid-1;
	}
	return 0;
}