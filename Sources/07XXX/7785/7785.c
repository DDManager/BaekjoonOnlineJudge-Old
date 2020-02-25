/**
 *  BOJ 7785번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,900 KB / 262,144 KB
 *  소요 시간 : 44 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONVERT_RADIX 53
#define MAX_NAME_LEN 5

typedef struct{
	int name:30;
	int enter:2;
}People;

int str2num(char *str){
	int num=0,i;
	int len=strlen(str);
	for(i=0;i<len;i++){
		num*=CONVERT_RADIX;
		if('A'<=str[i]&&str[i]<='Z') num+=str[i]-'A'+1;
		else if('a'<=str[i]&&str[i]<='z') num+=str[i]-'a'+27;
	}
	for(i=len;i<MAX_NAME_LEN;i++) num*=CONVERT_RADIX;
	return num;
}

void num2str(int num,char *str){
	int i;
	for(i=MAX_NAME_LEN-1;i>=0;i--,num/=CONVERT_RADIX){
		int m=num%CONVERT_RADIX;
		if(0<m&&m<=26) str[i]='A'+m-1;
		else if(26<m&&m<=52) str[i]='a'+m-27;
	}
}

int comp(const void *a,const void *b){
	return ((People*)b)->name-((People*)a)->name;
}

int main(void){
	int n,i;
	People *people;
	scanf("%d",&n);
	people=(People*)calloc(n,sizeof(People));
	for(i=0;i<n;i++){
		char name[6],cmd[6];
		scanf("%s %s",name,cmd);
		people[i].name=str2num(name);
		if(strcmp(cmd,"enter")==0) people[i].enter=1;
		else if(strcmp(cmd,"leave")==0) people[i].enter=-1;
	}
	qsort(people,n,sizeof(People),comp);
	int current=people[0].name,cnt=0;
	for(i=0;i<n;i++){
		int num=people[i].name;
		if(num!=current){
			if(cnt>0){
				char nm[6]={0};
				num2str(current,nm);
				puts(nm);
			}
			current=num;
			cnt=0;
		}
		if(people[i].enter>0) cnt++;
		else cnt--;
	}
	if(cnt>0){
		char nm[6]={0};
		num2str(current,nm);
		puts(nm);
	}
	return 0;
}