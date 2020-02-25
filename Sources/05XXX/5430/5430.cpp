/**
 *  BOJ 5430번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 3,328 KB / 262,144 KB
 *  소요 시간 : 128 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <iostream>
#include <sstream>
#include <cctype>
#include <deque>
#include <algorithm>
using namespace std;

int main(void){
	int T;
	cin>>T;
	while(T--){
		string p,s;
		int n;
		int dir=0;
		int i;
		cin>>p>>n>>s;
		for(i=0;i<(int)s.size();i++) if(!isdigit(s[i])) s[i]=' ';
		istringstream ss(s);
		deque<int> x=deque<int>(n);
		for(i=0;i<n;i++) ss>>x[i];
		for(i=0;i<(int)p.size();i++){
			if(p[i]=='R') dir=1-dir;
			else if(p[i]=='D'){
				if(x.size()==0){
					dir=-1;
					break;
				}
				if(dir==0) x.pop_front();
				else x.pop_back();
			}
		}
		if(dir<0){
			puts("error");
			continue;
		}
		if(dir==1) reverse(x.begin(),x.end());
		putchar('[');
		for(i=0;i<(int)x.size();i++){
			if(i) putchar(',');
			cout<<x[i];
		}
		puts("]");
	}
	return 0;
}