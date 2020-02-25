/**
 *  BOJ 1036번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_SIZE 64
#define RADIX 36

typedef struct SType{
	char str[MAX_STR_SIZE];
}SType;

typedef struct VType{
	char c;
	int data[MAX_STR_SIZE];
}VType;

int comp_s(const void *a,const void *b){
	char *str_a=((SType*)a)->str;
	char *str_b=((SType*)b)->str;
	int len_a=strlen(str_a);
	int len_b=strlen(str_b);
	if(len_a!=len_b) return len_b-len_a;
	return strcmp(str_a,str_b);
}

int comp_v(const void *a,const void *b){
	VType va=(*(VType*)a);
	VType vb=(*(VType*)b);
	int i;
	for(i=MAX_STR_SIZE-1;i>=0;i--) if(va.data[i]!=vb.data[i]) return vb.data[i]-va.data[i];
	return 0;
}

void replace_to_z(SType *s,char c){
	int len=strlen(s->str),i;
	for(i=0;i<len;i++) if(s->str[i]==c) s->str[i]='Z';
}

void car(VType *v){
	int carry=0,i;
	for(i=0;i<MAX_STR_SIZE;i++){
		v->data[i]+=carry;
		carry=v->data[i]/RADIX;
		v->data[i]%=RADIX;
	}
}

int main(void){
	int N,K;
	SType *strs;
	VType val[RADIX];
	int answer[MAX_STR_SIZE]={0};
	int carry=0,iz=1;
	int i,j;
	scanf("%d",&N);
	strs=(SType*)calloc(N,sizeof(SType));
	for(i=0;i<N;i++) scanf("%s",strs[i].str);
	scanf("%d",&K);
	qsort(strs,N,sizeof(SType),comp_s);
	for(i=0;i<=9;i++) val[i].c='0'+i;
	for(i=0;i<26;i++) val[i+10].c='A'+i;
	for(i=0;i<RADIX;i++) for(j=0;j<MAX_STR_SIZE;j++) val[i].data[j]=0;
	for(i=0;i<N;i++){
		int len=strlen(strs[i].str),l;
		for(j=0,l=len-1;j<len;j++,l--){
			char c=strs[i].str[l];
			if(isdigit(c)) val[c-'0'].data[j]+=RADIX-(c-'0')-1;
			else if(isupper(c)) val[c-'A'+10].data[j]+=RADIX-(c-'A')-11;
		}
	}
	for(i=0;i<RADIX;i++) car(&val[i]);
	qsort(val,RADIX,sizeof(VType),comp_v);
	for(i=0;i<K;i++){
		char c=val[i].c;
		for(j=0;j<N;j++) replace_to_z(&strs[j],c);
	}
	for(i=0;i<N;i++){
		int len=strlen(strs[i].str),l;
		for(j=0,l=len-1;j<len;j++,l--){
			char c=strs[i].str[l];
			if(isdigit(c)) answer[j]+=c-'0';
			else if(isupper(c)) answer[j]+=c-'A'+10;
		}
	}
	for(i=0;i<MAX_STR_SIZE;i++){
		answer[i]+=carry;
		carry=answer[i]/RADIX;
		answer[i]%=RADIX;
	}
	for(i=MAX_STR_SIZE-1;i>=0;i--){
		if(iz&&answer[i]==0) continue;
		else if(answer[i]!=0) iz=0;
		putchar(answer[i]>9?answer[i]-10+'A':answer[i]+'0');
	}
	if(iz) puts("0");
	return 0;
}