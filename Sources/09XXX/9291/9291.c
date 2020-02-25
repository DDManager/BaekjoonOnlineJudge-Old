/**
 *  BOJ 9291번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#define SDK 9

int sudoku[SDK][SDK];

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
	for(l=1;l<=T;l++){
		int i,j;
		for(i=0;i<SDK;i++) for(j=0;j<SDK;j++) scanf("%d",&sudoku[i][j]);
		printf("Case %d: %s\n",l,isValid()?"CORRECT":"INCORRECT");
	}
	return 0;
}