/**
 *  BOJ 15353번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>

int main(void){
	int n1,n2;
	int idx=0,p=0;
	int s1,s2;
	int ans[10001];
	char A[10001],B[10001];
	int i;
	scanf("%s %s",A,B);
	s1=strlen(A);
	s2=strlen(B);
	while(s1||s2||p){
		if(s1) n1=A[(s1--)-1]-'0';
		if(s2) n2=B[(s2--)-1]-'0';
		ans[idx++]=(n1+n2+p)%10;
		p=(n1+n2+p)>9;
		n1=n2=0;
	}
	for(i=idx-1;i>=0;i--) putchar(ans[i]+'0');
	return 0;
}