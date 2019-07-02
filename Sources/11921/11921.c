/**
 *  BOJ 11921번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,244 KB / 524,288 KB
 *  소요 시간 : 76 ms / 100 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

#define BS 131072

int cnt,rc;
char inb[BS];

inline char gchar(void){
	if(cnt%BS==0){
		cnt=0;
		rc=fread(inb,1,BS,stdin);
	}
	return cnt<rc?inb[cnt++]:0;
}
inline int _readInt(int *ptr){
	int n=0,c=0;
	*ptr=0;
	while(1){
		char read=gchar();
		if(read>='0'&&read<='9') n=n*10+read-'0';
		else{
			*ptr=n;
			return n!=0?0:!c;
		}
		c++;
	}
	*ptr=n;
	return 0;
}
inline int readInt(void){
	int ptr;
	while(_readInt(&ptr));
	return ptr;
}

int main(void){
	int N,T;
	long long sum=0;
	T=readInt();
	N=T;
	while(T--) sum+=readInt();
	printf("%d\n%lld\n",N,sum);
	return 0;
}