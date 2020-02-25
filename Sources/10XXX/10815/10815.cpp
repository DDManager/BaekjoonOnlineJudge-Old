/**
 *  BOJ 10815번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 20,648 KB / 262,144 KB
 *  소요 시간 : 316 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

bool data[20000001];

int main(void){
	int n,m,l,x;
	scanf("%d",&n);
	for(l=0;l<n;l++){
		scanf("%d",&x);
		data[x+10000000]=1;
	}
	scanf("%d",&m);
	for(l=0;l<m;l++){
		scanf("%d",&x);
		if (l>0) printf(" ");
		printf("%d",data[x+10000000]);
	}
	printf("\n");
	return 0;
}