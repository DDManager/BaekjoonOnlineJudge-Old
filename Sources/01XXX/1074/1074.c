/**
 *  BOJ 1074번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

void calc(int N,int r,int c){
	int h=1<<(N-1),w=1<<(N-1);
	int ans=0;
	int cnt=0;
	int size=(1<<N)*(1<<N);
	int ph=1<<(N-1),pw=1<<(N-1);
	while(size){
		cnt++;
		size/=2;
		if(cnt%2){
			ph/=2;
			if(r>=h){
				ans+=size;
				h+=ph;
			}else h-=ph;
		}else{
			pw/=2;
			if(c>=w){
				ans+=size;
				w+=pw;
			}else w-=pw;
		}
	}
	printf("%d\n",ans);
}

int main(void){
	int N,r,c;
	scanf("%d %d %d",&N,&r,&c);
	calc(N,r,c);
	return 0;
}