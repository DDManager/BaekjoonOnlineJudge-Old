/**
 *  BOJ 7681번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 924 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <string.h>
#define SDK 9
#define GET_IDX(I,J) ((I)*(SDK)+(J))

char sudoku[SDK*SDK+1];
char* r[SDK][SDK];
char* c[SDK][SDK];
char* s[SDK][SDK];
typedef struct Set{
	int rn,cn;
	char num[9];
}Set;

void init(void){
	int i,j;
	int rn,cn;
	for(i=0;i<SDK;i++)
		for(j=0;j<SDK;j++)
			r[i][j]=c[j][i]=&sudoku[GET_IDX(i,j)];
	for(rn=0;rn<SDK;rn+=3)
		for(cn=0;cn<SDK;cn+=3)
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					s[rn+(cn/3)][i*3+j]=&sudoku[GET_IDX(rn+i,cn+j)];
}

int sizeNumset(Set set){
	char *n=set.num;
	int cnt=0;
	int i;
	for(i=0;i<SDK;i++) if(n[i]) cnt++;
	return cnt;
}

Set findAblNum(int rn,int cn){
	Set nums={rn,cn,{1,1,1,1,1,1,1,1,1}};
	int sn=rn/3*3+cn/3;
	int i;
	for(i=0;i<SDK;i++){
		if(*r[rn][i]>0)
			nums.num[*r[rn][i]-1]=0;
		if(*c[cn][i]>0)
			nums.num[*c[cn][i]-1]=0;
		if(*s[sn][i]>0)
			nums.num[*s[sn][i]-1]=0;
	}
	return nums;
}

Set findMinPossible(void){
	int size=10;
	int i,j;
	Set minset={-1,-1};
	for(i=0;i<SDK;i++){
		for(j=0;j<SDK;j++){
			int nsize;
			Set tmp;
			if(sudoku[GET_IDX(i,j)]>0) continue;
			tmp=findAblNum(i,j);
			nsize=sizeNumset(tmp);
			if(!nsize){
				Set ret={10,10};return ret;
			}else if(nsize==1) return tmp;
			else if(nsize<size){
				size=nsize;minset=tmp;
			}
		}
	}
	return minset;
}

int solve(void){
	Set set=findMinPossible();
	int i;
	if(set.rn>SDK) return 0;
	if(set.rn<0) return 1;
	for(i=1;i<=SDK;i++){
		if(!set.num[i-1]) continue;
		sudoku[GET_IDX(set.rn,set.cn)]=i;
		if(solve()) return 1;
	}
	sudoku[GET_IDX(set.rn,set.cn)]=0;
	return 0;
}

int main(void){
	while(1){
		int i;
		init();
		scanf("%s",sudoku);
		if(strcmp(sudoku,"end")==0) break;
		for(i=0;i<SDK*SDK;i++){
			if(sudoku[i]=='.') sudoku[i]=0;
			else sudoku[i]-='0';
		}
		solve();
		for(i=0;i<SDK*SDK;i++) sudoku[i]+='0';
		puts(sudoku);
	}
	return 0;
}