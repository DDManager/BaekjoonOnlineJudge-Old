/**
 *  BOJ 4101번 C언어 소스 코드
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
	int a,b;
	while(1){
		scanf("%d %d",&a,&b);
		if(a==0&&b==0) break;
		if(a>b) puts("Yes");
		else puts("No");
	}
	return 0;
}