/**
 *  BOJ 4153번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(!a&&!b&&!c) break;
		puts((a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)?"right":"wrong");
	}
	return 0;
}