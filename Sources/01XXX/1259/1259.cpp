/**
 *  BOJ 1259번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,224 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int main(void){
	while(true){
		char ca[8];
		scanf("%s",ca);
		string str1(ca);
		string str2=str1;
		if(str1=="0") break;
		reverse(str1.begin(),str1.end());
		puts((str1==str2)?"yes":"no");
	}
	return 0;
}