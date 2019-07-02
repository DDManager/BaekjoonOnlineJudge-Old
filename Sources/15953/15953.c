/**
 *  BOJ 15953번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int pa(int);
int pb(int);

int main(void){
	int t,a,b,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",(pa(a)+pb(b))*10000);
	}
	return 0;
}

int pa(int a){
	if(a==0) return 0;
	if(a==1) return 500;
	if(a<=3) return 300;
	if(a<=6) return 200;
	if(a<=10) return 50;
	if(a<=15) return 30;
	if(a<=21) return 10;
	return 0;
}

int pb(int b){
	if(b==0) return 0;
	if(b==1) return 512;
	if(b<=3) return 256;
	if(b<=7) return 128;
	if(b<=15) return 64;
	if(b<=31) return 32;
	return 0;
}