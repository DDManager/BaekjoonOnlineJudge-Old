/**
 *  BOJ 11650번 C++ 소스 코드
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

typedef struct Point{int x,y;}Point;
bool compare(const Point a,const Point b){
	if(a.x!=b.x) return a.x<b.x;
	return a.y<b.y;
}

int main(void){
	int N;
	Point *A;
	int i;
	scanf("%d",&N);
	A=(Point*)calloc(N,sizeof(Point));
	for(i=0;i<N;i++) scanf("%d %d",&A[i].x,&A[i].y);
	sort(A,A+N,compare);
	for(i=0;i<N;i++) printf("%d %d\n",A[i].x,A[i].y);
	return 0;
}