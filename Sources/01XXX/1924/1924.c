/**
 *  BOJ 1924번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int days[11]={31,28,31,30,31,30,31,31,30,31,30};
	int m,d,i,s=0;
	char week[7][4]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	scanf("%d %d",&m,&d);
	for(i=0;i<m-1;i++) s+=days[i];
	s+=d;
	puts(week[s%7]);
	return 0;
}