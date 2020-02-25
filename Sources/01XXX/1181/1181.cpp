/**
 *  BOJ 1181번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 3,044 KB / 262,144 KB
 *  소요 시간 : 64 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string str1,const string str2){
	if(str1.length()!=str2.length()) return str1.length()<str2.length();
	return str1<str2;
}

int main(void){
	int N;
	vector<string> v;
	int i;
	scanf("%d",&N);
	v.resize(N);
	for(i=0;i<N;i++){
		char s[51];
		scanf("%s",s);
		v[i]=s;
	}
	sort(v.begin(),v.end(),compare);
	for(i=0;i<N;i++) if(!i||v[i]!=v[i-1]) puts(v[i].c_str());
	return 0;
}