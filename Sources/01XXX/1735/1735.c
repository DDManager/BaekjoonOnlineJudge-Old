/**
 *  BOJ 1735번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int gcd(int,int);

int main(void){
	int a1,b1,a2,b2,ar,br,g;
	scanf("%d %d",&a1,&b1);
	scanf("%d %d",&a2,&b2);
	br=b1*b2;
	ar=a1*b2+a2*b1;
	g=gcd(ar,br);
	printf("%d %d\n",ar/g,br/g);
	return 0;
}

int gcd(int a,int b){
	int c,max,min;
	max=a>b?a:b;
	min=a>b?b:a;
	while(min){
		c=max%min;
		max=min;
		min=c;
	}
	return max;
}