/**
 *  BOJ 7469번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,684 KB / 262,144 KB
 *  소요 시간 : 360 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int num,index;
}ArrData;

int comp(const void *a,const void *b){
	return ((ArrData*)a)->num-((ArrData*)b)->num;
}

void Q(int,int,int,int);

ArrData *data;

int main(void){
	int n,m,i,j,k,l;
	scanf("%d %d",&n,&m);
	data=(ArrData*)calloc(n,sizeof(ArrData));
	for(l=0;l<n;l++){
		scanf("%d",&data[l].num);
		data[l].index=l+1;
	}
	qsort(data,n,sizeof(ArrData),comp);
	for(l=0;l<m;l++){
		scanf("%d %d %d",&i,&j,&k);
		Q(i,j,k,n);
	}
	free(data);
	return 0;
}

void Q(int i,int j,int k,int n){
	int l,cnt;
	if((j-i)/2<k){
		cnt=j-i+2;
		for(l=n-1;l>=0;l--){
			if(i<=data[l].index&&data[l].index<=j) cnt--;
			if(cnt==k){
				printf("%d\n",data[l].num);
				break;
			}
		}
	}else{
		cnt=0;
		for(l=0;l<n;l++){
			if(i<=data[l].index&&data[l].index<=j) cnt++;
			if(cnt==k){
				printf("%d\n",data[l].num);
				break;
			}
		}
	}
}