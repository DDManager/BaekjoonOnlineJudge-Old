/**
 *  BOJ 17626번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,752 KB / 524,288 KB
 *  소요 시간 : 24 ms / 500 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int *DP;
int solve(int N){
	int &result=DP[N];
	if(result!=-1) return result;
	if(N<=1) return result=N;
	result=N;
	for(int i=0;i*i<=N;i++) result=min(solve(N-i*i),result);
	return ++result;
}

int main(void){
	int N;
	scanf("%d",&N);
	DP=new int[N+1];
	fill(DP,DP+N+1,-1);
	printf("%d\n",solve(N));
	return 0;
}