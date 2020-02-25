/**
 *  BOJ 1764번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,944 KB / 262,144 KB
 *  소요 시간 : 96 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(void){
	int N,M;
	vector<string> v,v_r;
	int i;
	scanf("%d %d",&N,&M);
	v.resize(N);
	for(i=0;i<N;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(i=0;i<M;i++){
		string str;
		cin>>str;
		if(binary_search(v.begin(),v.end(),str)){
			v_r.push_back(str);
		}
	}
	sort(v_r.begin(),v_r.end());
	printf("%d\n",v_r.size());
	for(i=0;i<v_r.size();i++) puts(v_r[i].c_str());
	return 0;
}