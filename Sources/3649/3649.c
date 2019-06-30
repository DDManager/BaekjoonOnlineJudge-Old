/**
 *  BOJ 3649번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 8,932 KB / 262,144 KB
 *  소요 시간 : 1,824 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int search(int,int);
int comp(const void *a,const void *b){return *(int*)a-*(int*)b;}
int *L;

int main(void) {
	int x;
	while(scanf("%d",&x)!=EOF){
		int n,c=0,i;
		scanf("%d",&n);
		L=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++){
			int r;
			scanf("%d",&r);
			if(r<x*10000000) L[c++]=r;
		}
		qsort(L,c,sizeof(int),comp);
		if(search(x*10000000,c)) puts("danger");
		free(L);
	}
	return 0;
}

int search(int x,int n) {
	int l=0,h=n-1,s;
	while(l<h){
		s=L[l]+L[h];
		if(s==x){
			printf("yes %d %d\n",L[l],L[h]);
			return 0;
		}
		if(s<x) l++;
		else h--;
	}
	return 1;
}