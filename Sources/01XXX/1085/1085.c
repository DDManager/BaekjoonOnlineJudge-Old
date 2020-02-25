/**
 *  BOJ 1085번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#define MIN(x,y) ((x)<(y))?(x):(y)
int main(void){
	int x,y,w,h;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	printf("%d\n",MIN(MIN(x,w-x),MIN(y,h-y)));
	return 0;
}