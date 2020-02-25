/**
 *  BOJ 1620번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 16,008 KB / 262,144 KB
 *  소요 시간 : 180 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>

using namespace std;

int main(void){
	map<string,int> m;
	char **d;
	int N,M;
	char input[21]={0};
	scanf("%d %d",&N,&M);
	d=(char**)calloc(N,sizeof(char*));
	for(int i=0;i<N;i++){
		scanf("%s",input);
		d[i]=(char*)calloc(strlen(input)+1,sizeof(char));
		strcpy(d[i],input);
		m.insert(make_pair(d[i],i+1));
	}
	for(int i=0;i<M;i++){
		scanf("%s",input);
		if('0'<=input[0]&&input[0]<='9') puts(d[atoi(input)-1]);
		else printf("%d\n",m[input]);
	}
	for(int i=0;i<N;i++){
		free(d[i]);
	}
	free(d);
	return 0;
}