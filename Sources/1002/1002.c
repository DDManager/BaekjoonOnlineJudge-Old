/**
 *  BOJ 1002번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int calc(int,int,int,int,int,int);

int main(void) {
	int T,x1,y1,r1,x2,y2,r2,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		printf("%d\n",calc(x1,y1,r1,x2,y2,r2));
	}
	return 0;
}

int calc(int x1,int y1,int r1,int x2,int y2,int r2) {
	int xx,yy,rr,dist;
	xx=x2-x1;
	yy=y2-y1;
	rr=(r1+r2)*(r1+r2);
	dist=xx*xx+yy*yy;
	if(dist==0){
		if(r1==r2) return -1;
	}else{
		if((dist<rr)&&(dist>(r2-r1)*(r2-r1))) return 2;
		if((dist==rr)||(dist==(r2-r1)*(r2-r1))) return 1;
	}
	return 0;
}