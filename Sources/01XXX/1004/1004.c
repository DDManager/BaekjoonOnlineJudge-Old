/**
 *  BOJ 1004번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int check(int x,int xx,int y,int yy,int r){return (x-xx)*(x-xx)+(y-yy)*(y-yy)<r*r;}

int main(void){
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		int sx,sy,ex,ey,n,x,y,r,j,c1,c2,cnt=0;
		scanf("%d %d %d %d",&sx,&sy,&ex,&ey);
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%d %d %d",&x,&y,&r);
			c1=check(x,sx,y,sy,r);
			c2=check(x,ex,y,ey,r);
			if(c1&&c2) continue;
			else if(c1||c2) cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}