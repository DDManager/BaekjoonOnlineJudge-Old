/**
 *  BOJ 1112번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,112 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#define MAX_LEN 64
#define MABS(x) ((x)<0?-(x):(x))

int main(void){
	int x,b;
	char ans[MAX_LEN];
	int iz=1,i,v;
	scanf("%d %d",&x,&b);
	for(i=0;i<MAX_LEN;i++) ans[i]='0';
	for(i=0,v=(x<0&&b>0)?-x:x;v;i++,v/=b) ans[i]=(v%b)%b+'0';
	for(i=0;i<MAX_LEN;i++){
		if(ans[i]<'0'){
			ans[i]-=b;
			ans[i+1]+=(i%2?1:-1)*((x<0&&b<0)?-1:1);
		}else if(ans[i]>='0'+MABS(b)){
			ans[i]-=MABS(b);
			ans[i+1]+=(i%2?1:-1)*((x<0&&b<0)?-1:1);
		}
	}
	if(x<0&&b>0) putchar('-');
	for(i=MAX_LEN-1;i>=0;i--){
		if(iz&&ans[i]=='0') continue;
		else if(ans[i]!='0') iz=0;
		putchar(ans[i]);
	}
	if(iz) puts("0");
	return 0;
}