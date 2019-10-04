/**
 *  BOJ 15353번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,992 KB / 262,144 KB
 *  소요 시간 : 12 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <iostream>
#include <string>
using namespace std;

int main(void){
	string A,B,R;
	char a;
	cin>>A>>B;
	R=A[A.size()-1]-'0'+B[B.size()-1]-'0';
	A=A.substr(0,A.size()-1);
	B=B.substr(0,B.size()-1);
	a=R[0]/10;
	R[0]=(R[0]%10)+'0';
	while(A.size()>0||B.size()>0){
		char b=0;
		if(A.size()){
			b=A[A.size()-1]-'0';
			A=A.substr(0,A.size()-1);
		}
		if(B.size()){
			b+=B[B.size()-1]-'0';
			B=B.substr(0,B.size()-1);
		}
		b+=a;
		a=b/10;
		b=(b%10)+'0';
		R=b+R;
	}
	if(a>0){
		a+='0';
		R=a+R;
	}
	cout<<R;
	return 0;
}