/**
 *  BOJ 4056번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#define SDK 9

char sudoku[SDK][SDK+1];
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
			r[i][j]=c[j][i]=&sudoku[i][j];
	for(rn=0;rn<SDK;rn+=3)
		for(cn=0;cn<SDK;cn+=3)
			for(i=0;i<3;i++)
				for(j=0;j<3;j++)
					s[rn+(cn/3)][i*3+j]=&sudoku[rn+i][cn+j];
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
		if(*r[rn][i]>0) nums.num[*r[rn][i]-1]=0;
		if(*c[cn][i]>0) nums.num[*c[cn][i]-1]=0;
		if(*s[sn][i]>0) nums.num[*s[sn][i]-1]=0;
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
			if(sudoku[i][j]>0) continue;
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
		sudoku[set.rn][set.cn]=i;
		if(solve()) return 1;
	}
	sudoku[set.rn][set.cn]=0;
	return 0;
}

int isValid(void){
	int i,j;
	int group_idx[SDK]={0,3,6,27,30,33,54,57,60};
	int group_idx2[SDK]={0,1,2,9,10,11,18,19,20};
	for(i=0;i<SDK;i++){
		int arr[SDK]={0};
		for(j=0;j<SDK;j++){
			if(sudoku[i][j]){
				if(!arr[sudoku[i][j]-1]) arr[sudoku[i][j]-1]=1;
				else return 0;
			}
		}
	}
	for(i=0;i<SDK;i++){
		int arr[SDK]={0};
		for(j=0;j<SDK;j++){
			if(sudoku[j][i]){
				if(!arr[sudoku[j][i]-1]) arr[sudoku[j][i]-1]=1;
				else return 0;
			}
		}
	}
	for(i=0;i<SDK;i++){
		int arr[SDK]={0};
		for(j=0;j<SDK;j++){
			int idx=group_idx[i]+group_idx2[j];
			int n=sudoku[idx/SDK][idx%SDK]-1;
			if(n>=0){
				if(!arr[n]) arr[n]=1;
				else return 0;
			}
		}
	}
	return 1;
}

int main(void){
	int T,l;
	scanf("%d",&T);
	for(l=0;l<T;l++){
		int i,j;
		init();
		for(i=0;i<SDK;i++){
			scanf("%s",sudoku[i]);
			for(j=0;j<SDK;j++) sudoku[i][j]-='0';
		}
		if(l) puts("");
		if(isValid()&&solve()){
			for(i=0;i<SDK;i++){
				for(j=0;j<SDK;j++) sudoku[i][j]+='0';
				puts(sudoku[i]);
			}
		}else puts("Could not complete this grid.");
	}
	return 0;
}