/**
 *  BOJ 1049번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>

int main(void){
	int N,M,i;
	int pkg,one,ans;
	int t1,t2;
	scanf("%d %d",&N,&M);
	scanf("%d %d",&pkg,&one);
	for(i=1;i<M;i++){
		scanf("%d %d",&t1,&t2);
		pkg=t1<pkg?t1:pkg;
		one=t2<one?t2:one;
	}
	if(pkg>one*6) ans=one*N;
	else{
		t1=N/6*pkg+N%6*one;
		t2=pkg*(N/6+1);
		ans=t1<t2?t1:t2;
	}
	printf("%d\n",ans);
	return 0;
}