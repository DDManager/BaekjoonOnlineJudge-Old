/**
 *  BOJ 10816번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 24,380 KB / 262,144 KB
 *  소요 시간 : 868 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <map>

#define BS 102400

using namespace std;

char inb[BS];
int cnt,rc;

char gchar(void){
	if(cnt%BS==0){
		cnt=0;
		rc=fread(inb,1,BS,stdin);
	}
	return cnt<rc?inb[cnt++]:0;
}

int _readInt(int *ptr){
	int n=0,flag=0;
	*ptr=-2147483648;
	int c=0;
	while(1){
		char read=gchar();
		if(read=='-') flag=1;
		else if(read>='0'&&read<='9'){
			read-='0';
			n*=10;
			n+=read;
		}else{
			*ptr=flag?-n:n;
			return !c;
		}
		c++;
	}
	*ptr=flag?-n:n;
	return 0;
}

int readInt(void){
	int ptr;
	while(_readInt(&ptr));
	return ptr;
}

int main(void){
	int n,m,l,num;
	map<int,int> c;
	n=readInt();
	for(l=0;l<n;l++) c[readInt()]++;
	m=readInt();
	for(l=0;l<m;l++) num=readInt(),printf(l>0?" %d":"%d",c.find(num)==c.end()?0:c[num]);
	return 0;
}