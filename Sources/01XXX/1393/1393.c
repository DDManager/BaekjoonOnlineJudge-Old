/**
 *  BOJ 1393번 C언어 소스 코드
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
	int x,y,cx,cy,mx,my,g,pd,nd,rx,ry;
	scanf("%d %d",&x,&y);
	scanf("%d %d %d %d",&cx,&cy,&mx,&my);
	g=gcd(mx,my);
	g=g<=0?1:g;
	mx/=g;my/=g;
	rx=cx;ry=cy;
	pd=(x-cx)*(x-cx)+(y-cy)*(y-cy);
	while(1){
		cx+=mx;cy+=my;
		nd=(x-cx)*(x-cx)+(y-cy)*(y-cy);
		if(nd>pd) break;
		pd=nd;
		rx=cx;ry=cy;
	}
	printf("%d %d\n",rx,ry);
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