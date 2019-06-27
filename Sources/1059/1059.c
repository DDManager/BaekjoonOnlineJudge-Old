/**
 *  BOJ 1059번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
	typedef const int *ci;
	ci ap=(ci)a,bp=(ci)b;
	return *ap-*bp;
}

int main(void){
	int l,*d,n,i,pre,now,ans=0;
	scanf("%d",&l);
	d=(int*)calloc(l+1,sizeof(int));
	for(i=0;i<l;i++) scanf("%d",&d[i]);
	scanf("%d",&n);
	qsort(d,l+1,sizeof(int),compare);
	for(i=1;i<=l;i++){
		pre=d[i-1];
		now=d[i];
		if(n>pre&&n<now){
			ans=(n-pre)*(now-n)-1;
			break;
		}
	}
	printf("%d\n",ans);
	return 0;
}