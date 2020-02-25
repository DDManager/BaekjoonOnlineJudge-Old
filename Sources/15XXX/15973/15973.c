/**
 *  BOJ 15973번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
typedef struct{int x,y;}Point;
typedef struct{Point p1,p2,p3,p4;}Box;
void init(Box *b){
	b->p2.x=b->p1.x;
	b->p2.y=b->p3.y;
	b->p4.x=b->p3.x;
	b->p4.y=b->p1.y;
}
int isEqual(Point p1,Point p2){return p1.x==p2.x&&p1.y==p2.y;}
int isPoint(Box b1,Box b2){
	if(isEqual(b1.p1,b2.p3)) return 1;
	if(isEqual(b1.p2,b2.p4)) return 1;
	if(isEqual(b1.p3,b2.p1)) return 1;
	if(isEqual(b1.p4,b2.p2)) return 1;
	return 0;
}
int isNull(Box b1,Box b2){
	int x=(b1.p3.x<b2.p1.x)||(b2.p3.x<b1.p1.x);
	int y=(b1.p3.y<b2.p1.y)||(b2.p3.y<b1.p1.y);
	return x||y;
}
int isLine(Box b1,Box b2){
	if(b1.p1.x==b2.p3.x) return 1;
	if(b1.p2.y==b2.p4.y) return 1;
	if(b1.p3.x==b2.p1.x) return 1;
	if(b1.p4.y==b2.p2.y) return 1;
	return 0;
}
int main(void){
	Box b1,b2;
	scanf("%d %d %d %d",&b1.p1.x,&b1.p1.y,&b1.p3.x,&b1.p3.y);
	scanf("%d %d %d %d",&b2.p1.x,&b2.p1.y,&b2.p3.x,&b2.p3.y);
	init(&b1);
	init(&b2);
	if(isPoint(b1,b2)) puts("POINT");
	else if(isNull(b1,b2)) puts("NULL");
	else if(isLine(b1,b2)) puts("LINE");
	else puts("FACE");
	return 0;
}