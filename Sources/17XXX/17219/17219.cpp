/**
 *  BOJ 17219번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 15,748 KB / 262,144 KB
 *  소요 시간 : 316 ms / 5,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <string>
#include <map>
#define MAX_STR_LEN 32
using namespace std;

int main(void){
	int N,M;
	map<string,string> D;
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++){
		char site[MAX_STR_LEN],pass[MAX_STR_LEN];
		scanf("%s %s",site,pass);
		D[site]=pass;
	}
	for(int i=0;i<M;i++){
		char site[MAX_STR_LEN];
		scanf("%s",site);
		puts(D[site].c_str());
	}
	return 0;
}