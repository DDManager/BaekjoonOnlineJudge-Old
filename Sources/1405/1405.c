/**
 *  BOJ 1405번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 36 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

double prob[4];
char grid[30][30];
int vx[]={1,-1,0,0};
int vy[]={0,0,1,-1};

double dfs(int x,int y,int n){
	double ret=0;
	int i;
	if(grid[x][y]) return 0;
	if(n==0) return 1;
	grid[x][y]=1;
	for(i=0;i<4;i++) ret+=dfs(x+vx[i],y+vy[i],n-1)*prob[i];
	grid[x][y]=0;
	return ret;
}

int main(void){
	int n,east,west,south,north;
	scanf("%d %d %d %d %d",&n,&east,&west,&south,&north);
	prob[0]=east/100.0;
	prob[1]=west/100.0;
	prob[2]=south/100.0;
	prob[3]=north/100.0;
	printf("%.10f\n",dfs(15,15,n));
	return 0;
}