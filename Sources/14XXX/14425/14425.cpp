/**
 *  BOJ 14425번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 8,884 KB / 1,572,864 KB
 *  소요 시간 : 140 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <string>
#include <map>
using namespace std;

int main(void){
	map<string,int> m;
	int N,M;
	char cs[501];
	int answer=0;
	int i;
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%s",cs);
		m[string(cs)]=1;
	}
	for(i=0;i<M;i++){
		scanf("%s",cs);
		answer+=m[string(cs)];
	}
	printf("%d\n",answer);
	return 0;
}