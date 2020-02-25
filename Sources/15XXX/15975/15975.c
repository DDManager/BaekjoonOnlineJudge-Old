/**
 *  BOJ 15975번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,660 KB / 262,144 KB
 *  소요 시간 : 48 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct point{
	int pos,color;
}point;

int comp(const void *a,const void *b){
	int r;
	typedef point *pp;
	pp ap=(pp)a,bp=(pp)b;
	r=ap->color-bp->color;
	if(r!=0) return r;
	return ap->pos-bp->pos;
}

int main(void){
	int N,x,y,i;
	long long sum=0;
	point *d;
	scanf("%d",&N);
	d=(point*)calloc(N,sizeof(point));
	for(i=0;i<N;i++){
		scanf("%d %d",&x,&y);
		d[i].pos=x;
		d[i].color=y;
	}
	qsort(d,N,sizeof(point),comp);
	for(i=0;i<N;i++){
		int p=d[i].pos,ds=0,diff1=0,diff2=0;
		if(i>0&&d[i-1].color==d[i].color){
			diff1=p-d[i-1].pos;
			if(diff1<0) diff1*=-1;
		}
		if(i<N-1&&d[i+1].color==d[i].color){
			diff2=p-d[i+1].pos;
			if(diff2<0) diff2*=-1;
		}
		if(diff1==0) ds=diff2;
		else if(diff2==0) ds=diff1;
		else ds=diff1<diff2?diff1:diff2;
		sum+=ds;
	}
	printf("%lld\n",sum);
	return 0;
}