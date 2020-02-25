/**
 *  BOJ 2920번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int a[8],c=0,m=1,n=8,i;
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
		if(a[i]==m) c++;
		else if(a[i]==n) c--;
		m++;n--;
	}
	if(c==8) puts("ascending");
	else if(c==-8) puts("descending");
	else puts("mixed");
	return 0;
}