/**
 *  BOJ 1925번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,128 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <math.h>

#define ROWS 3
#define COLS 2
#define EPS 0.000001

int float_compare(double,double);

int main(void){
	int data[ROWS][COLS]={{0},{0},{0}};
	int i,j;
	int ax,bx,cx;
	int ay,by,cy;
	int ad,bd,cd;
	int max=0,s;
	double dmax=0.0,ds;
	for(i=0;i<ROWS;i++){
		for(j=0;j<COLS;j++){
			scanf("%d",&data[i][j]);
		}
	}
	ax=abs(data[0][0]-data[1][0]);
	ay=abs(data[0][1]-data[1][1]);
	bx=abs(data[1][0]-data[2][0]);
	by=abs(data[1][1]-data[2][1]);
	cx=abs(data[2][0]-data[0][0]);
	cy=abs(data[2][1]-data[0][1]);
	ad=ax*ax+ay*ay;
	bd=bx*bx+by*by;
	cd=cx*cx+cy*cy;
	s=ad+bd+cd;
	ds=sqrt(ad)+sqrt(bd)+sqrt(cd);
	if(max<ad) max=ad;
	if(max<bd) max=bd;
	if(max<cd) max=cd;
	dmax=sqrt(max);
	if(float_compare(dmax,ds-dmax)){
		puts("X");
	}else if(ad==bd&&bd==cd){
		puts("JungTriangle");
	}else if(ad==bd||bd==cd||ad==cd){
		if(max>s-max){
			puts("Dunkak2Triangle");
		}else if(max<s-max){
			puts("Yeahkak2Triangle");
		}else {
			puts("Jikkak2Triangle");
		}
	}else{
		if(max>s-max){
			puts("DunkakTriangle");
		}else if(max<s-max){
			puts("YeahkakTriangle");
		}else{
			puts("JikkakTriangle");
		}
	}
	return 0;
}

int float_compare(double a,double b){
	return fabs(a-b)<EPS;
}