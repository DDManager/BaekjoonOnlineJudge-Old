/**
 *  BOJ 11651번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,900 KB / 262,144 KB
 *  소요 시간 : 60 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

typedef struct{
	int x,y;
}Point;

bool comp(const Point a,const Point b){
	if(a.y==b.y) return a.x<b.x;
	return a.y<b.y;
}

int main(void){
	int N;
	Point *PA;
	int i;
	scanf("%d",&N);
	PA=(Point*)calloc(N,sizeof(Point));
	for(i=0;i<N;i++) scanf("%d %d",&PA[i].x,&PA[i].y);
	sort(PA,PA+N,comp);
	for(i=0;i<N;i++) printf("%d %d\n",PA[i].x,PA[i].y);
	return 0;
}