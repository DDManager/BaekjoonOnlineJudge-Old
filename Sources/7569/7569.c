/**
 *  BOJ 7569번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,992 KB / 262,144 KB
 *  소요 시간 : 132 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct ne{
	char row,col,hei;
}ne;

char ***data;
ne *xy,*xyt;

void spread(int,int,int,int);

int main(void){
	int m,n,h,l,i,p,q,j,cnt=0,ccn=0,ccnt,not=0,all,result=0;
	scanf("%d %d %d",&m,&n,&h);
	all=m*n*h;
	xy=(ne*)malloc(sizeof(ne));
	data=(char***)calloc(h,sizeof(char**));
	for(i=0;i<h;i++){
		data[i]=(char**)calloc(n,sizeof(char*));
		for(l=0;l<n;l++){
			data[i][l]=(char*)calloc(m,sizeof(char));
			for(j=0;j<m;j++){
				scanf("%hhd",&data[i][l][j]);
				if(data[i][l][j]==1){
					cnt++;ccn++;
					xy=realloc(xy,cnt*sizeof(ne));
					xy[cnt-1].hei=i;
					xy[cnt-1].row=l;
					xy[cnt-1].col=j;
				}
				else if(data[i][l][j]==-1) not++;
			}
		}
	}
	while(cnt+not<all){
		xyt=(ne*)malloc(sizeof(ne));
		ccnt=0;
		for(j=0;j<ccn;j++){
			i=xy[j].hei;
			p=xy[j].row;
			q=xy[j].col;
			if(i>0&&data[i-1][p][q]==0) spread(i-1,p,q,++ccnt),cnt++;
			if(p<n-1&&data[i][p+1][q]==0) spread(i,p+1,q,++ccnt),cnt++;
			if(i<h-1&&data[i+1][p][q]==0) spread(i+1,p,q,++ccnt),cnt++;
			if(p>0&&data[i][p-1][q]==0)	spread(i,p-1,q,++ccnt),cnt++;
			if(q<m-1&&data[i][p][q+1]==0) spread(i,p,q+1,++ccnt),cnt++;
			if(q>0&&data[i][p][q-1]==0) spread(i,p,q-1,++ccnt),cnt++;
		}
		ccn=ccnt;
		free(xy);
		xy=(ne*)malloc(ccnt*sizeof(ne));
		for(l=0;l<ccnt;l++){
			xy[l].row=xyt[l].row;
			xy[l].col=xyt[l].col;
			xy[l].hei=xyt[l].hei;
		}
		free(xyt);
		if(++result>all){
			result=-1;
			break;
		}
	}
	printf("%d\n",result);
	for(i=0;i<h;i++){
		for(l=0;l<n;l++) free(data[i][l]);
		free(data[i]);
	}
	free(data);
	free(xy);
	return 0;
}

void spread(int p,int q,int r,int c){
	data[p][q][r]=1;
	xyt=realloc(xyt,c*sizeof(ne));
	xyt[c-1].hei=p;
	xyt[c-1].row=q;
	xyt[c-1].col=r;
}