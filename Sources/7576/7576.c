/**
 *  BOJ 7576번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 6,024 KB / 262,144 KB
 *  소요 시간 : 136 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct ne{
	short row,col;
}ne;

char **data;
ne *xy,*xyt;

void spread(int,int,int);

int main(void){
	int m,n,l,i,p,j,cnt=0,ccn=0,ccnt,not=0,all,result=0;
	scanf("%d %d",&m,&n);
	all=m*n;
	xy=(ne*)malloc(sizeof(ne));
	data=(char**)calloc(n,sizeof(char*));
	for(l=0;l<n;l++){
		data[l]=(char*)calloc(m,sizeof(char));
		for(j=0;j<m;j++){
			scanf("%hhd",&data[l][j]);
			if(data[l][j]==1){
				cnt++;ccn++;
				xy=realloc(xy,cnt*sizeof(ne));
				xy[cnt-1].row=l;
				xy[cnt-1].col=j;
			}
			else if(data[l][j]==-1) not++;
		}
	}
	while(cnt+not<all){
		xyt=(ne*)malloc(sizeof(ne));
		ccnt=0;
		for(j=0;j<ccn;j++){
			i=xy[j].row;
			p=xy[j].col;
			if(i>0&&data[i-1][p]==0) spread(i - 1, p, ++ccnt),cnt++;
			if(p<m-1&&data[i][p+1]==0) spread(i,p+1,++ccnt),cnt++;
			if(i<n-1&&data[i+1][p]==0) spread(i+1,p,++ccnt),cnt++;
			if(p>0&&data[i][p-1]==0) spread(i,p-1,++ccnt),cnt++;
		}
		ccn=ccnt;
		free(xy);
		xy=(ne*)calloc(ccnt,sizeof(ne));
		for(l=0;l<ccnt;l++){
			xy[l].row=xyt[l].row;
			xy[l].col=xyt[l].col;
		}
		free(xyt);
		if (++result>all){
			result=-1;
			break;
		}
	}
	printf("%d\n",result);
	for(l=0;l<n;l++) free(data[l]);
	free(data);
	free(xy);
	return 0;
}

void spread(int p,int q,int c){
	data[p][q]=1;
	xyt=realloc(xyt,c*sizeof(ne));
	xyt[c-1].row=p;
	xyt[c-1].col=q;
}