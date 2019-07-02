/**
 *  BOJ 11004번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 20,648 KB / 524,288 KB
 *  소요 시간 : 1,528 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(void){
	int N,K,i;
	int *A;
	scanf("%d %d",&N,&K);
	A=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	sort(A,A+N);
	printf("%d\n",A[K-1]);
	free(A);
	return 0;
}