/**
 *  BOJ 1158번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,116 KB / 262,144 KB
 *  소요 시간 : 60 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	short data;
	struct NODE *pre,*link;
}NODE;

int main(void){
	short n,m,d,c=0,l,t;
	NODE *p,*tmp;
	scanf("%hd %hd",&n,&m);
	p=(NODE*)malloc(n*sizeof(NODE));
	for(l=0;l<n;l++){
		p[l].data=l+1;
		p[l].link=(l+1)<n?&p[l+1]:&p[0];
		p[l].pre=(l-1)>=0?&p[l-1]:&p[n-1];
	}
	printf("<");
	tmp=&p[n-1];
	while(c<n){
		t=m;
		while(t--) tmp=tmp->link;
		d=tmp->data;
		if(!c++) printf("%d",d);
		else printf(", %d",d);
		tmp->pre->link=tmp->link;
		tmp->link->pre=tmp->pre;
	}
	puts(">");
	free(p);
	return 0;
}