/**
 *  BOJ 2751번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,020 KB / 262,144 KB
 *  소요 시간 : 392 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main(void){
	int N;
	int *A;
	int i;
	scanf("%d",&N);
	A=(int*)calloc(N,sizeof(int));
	for(i=0;i<N;i++) scanf("%d",&A[i]);
	sort(A,A+N);
	for(i=0;i<N;i++) printf("%d\n",A[i]);
	return 0;
}