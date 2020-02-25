/**
 *  BOJ 3649번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 5,028 KB / 262,144 KB
 *  소요 시간 : 1,604 ms / 5,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int *l,n;
bool find(int x){
	int low=0,high=n-1,sum;
	while(low<high){
		sum=l[low]+l[high];
		if(sum==x){
			printf("yes %d %d\n",l[low],l[high]);
			return true;
		}else if(sum<x) low++;
		else high--;
	}
	return false;
}

int main(void){
	int x,i;
	while(true){
		if(scanf("%d",&x)==EOF) break;
		scanf("%d",&n);
		l=(int*)calloc(n,sizeof(int));
		for(i=0;i<n;i++) scanf("%d",&l[i]);
		sort(l,l+n);
		if(!find(x*10000000)) puts("danger");
		free(l);
	}
	return 0;
}