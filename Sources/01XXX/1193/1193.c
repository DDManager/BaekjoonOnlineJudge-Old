/**
 *  BOJ 1193번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 8 ms / 500 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int x,a=1,b=1,f=0,i;
	scanf("%d",&x);
	for(i=1;i<x;i++){
		if(f%4==0){
			b++;f++;
		}else if(f%4==1){
			a++;
			if(--b<=1) f++;
		}else if(f%4==2){
			a++;f++;
		}else if(f%4==3){
			b++;
			if(--a<=1) f++;
		}
	}
	printf("%d/%d\n",a,b);
	return 0;
}