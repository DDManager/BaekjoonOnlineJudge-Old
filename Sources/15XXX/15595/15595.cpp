/**
 *  BOJ 15595번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 4,136 KB / 524,288 KB
 *  소요 시간 : 160 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstring>
#include <string>
#include <map>
using namespace std;

typedef struct{
	int wac:31;
	int solved:1;
}SubData;

int readInt(void){
	int read;
	scanf("%d",&read);
	return read;
}

int main(void){
	map<string,SubData> m;
	int N,i,sc=0,sub=0;
	N=readInt();
	for(i=0;i<N;i++){
		int result;
		char usrid[21]={0};
		readInt();
		scanf("%s",usrid);
		result=readInt();
		readInt();
		readInt();
		readInt();
		readInt();
		if(strcmp(usrid,"megalusion")==0) continue;
		if(m[usrid].solved) continue;
		int c=++m[usrid].wac;
		if(result==4){
			m[usrid].solved=1;
			sc++;
			sub+=c;
		}
	}
	if(sub==0) sub++;
	printf("%.12g\n",(double)sc/(double)sub*100.0);
	return 0;
}