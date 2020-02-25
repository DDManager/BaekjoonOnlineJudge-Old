/**
 *  BOJ 7469번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,952 KB / 262,144 KB
 *  소요 시간 : 324 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <algorithm>

#define BS 51200

using namespace std;

typedef struct data{
	int n,p;
}data;

bool comp(data a,data b){return a.n<b.n;}
int Q(int,int,int);

int n;
data *d;
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
	int m,l,i,j,k,t,a,b;
	n=readInt();
	m=readInt();
	d=(data*)calloc(n,sizeof(data));
	for(l=0;l<n;l++) d[l].n=readInt(),d[l].p=l+1;
	sort(d,d+n,comp);
	for(l=0;l<m;l++){
		i=readInt();
		j=readInt();
		k=readInt();
		a=Q(i,j,k);
		b=a<0?-a:a;
		char buf[12]={0};
		char tmp[12]={0};
		int cc=0;
		for(t=1;t<=b;t*=10) tmp[cc++]=(b/t)%10+'0';
		if(a<0) tmp[cc++]='-';
		if(l>0) tmp[cc++]='\n';
		for(t=0;t<cc;t++) buf[t]=tmp[cc-t-1];
		fwrite(buf,cc,1,stdout);
	}
	free(d);
	return 0;
}

int Q(int i,int j,int k){
	int ret=0,l,cnt;
	if((j-i)/2<k){
		cnt=j-i+2;
		for(l=n-1;l>=0;l--) {
			if(i<=d[l].p&&d[l].p<=j) cnt--;
			if(cnt==k){
				ret=d[l].n;
				break;
			}
		}
	}else{
		cnt=0;
		for(l=0;l<n;l++){
			if(i<=d[l].p&&d[l].p<=j) cnt++;
			if(cnt==k){
				ret=d[l].n;
				break;
			}
		}
	}
	return ret;
}