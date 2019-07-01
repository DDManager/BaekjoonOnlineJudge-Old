/**
 *  BOJ 10039번 C언어 소스 코드
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
	int sum=0,data;
	int loop;
	for (loop=0;loop<5;loop++){
		scanf("%d",&data);
		if(data<40) data=40;
		sum+=data;
	}
	printf("%d\n",sum/5);
	return 0;
}