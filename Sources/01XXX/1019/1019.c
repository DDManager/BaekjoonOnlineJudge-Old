/**
 *  BOJ 1019번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main() {
	int N,pre=0,cnt[10]={0};
	scanf("%d",&N);
	for(int i=1;N;i*=10){
		int now=N%10;
		N/=10;
		for(int j=0;j<now;j++) cnt[j]+=(N+1)*i;
		cnt[now]+=N*i+pre+1;
		for(int j=now+1;j<10;j++) cnt[j]+=N*i;
		cnt[0]-=i;
		pre+=now*i;
	}
	for(int i=0;i<10;++i) printf(i?" %d":"%d",cnt[i]);
}