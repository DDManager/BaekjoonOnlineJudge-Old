/**
 *  BOJ 14425번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 6,336 KB / 1,572,864 KB
 *  소요 시간 : 128 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 9973

typedef struct Element{
	char key[501];
}Element;

typedef struct HashList{
	Element item;
	struct HashList *link;
}HashList;
HashList *ht[TABLE_SIZE];

int hash_function(char *str){
	int len=strlen(str);
	int hash=0,g=1;
	int i;
	for(i=1;i<=len;i++){
		hash+=str[len-i]*g;
		g*=31;
	}
	return (unsigned)hash%TABLE_SIZE;
}

void hash_chain_add(Element item){
	int hash_value=hash_function(item.key);
	HashList *ptr;
	HashList *node_before=NULL,*node=ht[hash_value];
	for(;node;node_before=node,node=node->link);
	ptr=(HashList*)malloc(sizeof(HashList));
	ptr->item=item;
	ptr->link=NULL;
	if(node_before) node_before->link=ptr;
	else ht[hash_value]=ptr;
}

int hash_chain_search(Element item){
	HashList *node;
	int hash_value=hash_function(item.key);
	for(node=ht[hash_value];node;node=node->link)
		if(strcmp(node->item.key,item.key)==0) return 1;
	return 0;
}

int main(void){
	int N,M;
	Element elem;
	int answer=0;
	int i;
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%s",elem.key);
		hash_chain_add(elem);
	}
	for(i=0;i<M;i++){
		scanf("%s",elem.key);
		answer+=hash_chain_search(elem);
	}
	printf("%d\n",answer);
	return 0;
}