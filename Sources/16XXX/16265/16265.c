/**
 *  BOJ 16265번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int t,k,i,j,c,md;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		char tmp[8],ans[8]={0};
		scanf("%d",&k);
		c=0;
		while (k>0){
			md=(k-1)%26;
			tmp[c]='A'+md;
			k=(k-md)/26;
			c++;
		}
		for(j=0;j<c;j++) ans[j]=tmp[c-j-1];
		puts(ans);
	}
	return 0;
}