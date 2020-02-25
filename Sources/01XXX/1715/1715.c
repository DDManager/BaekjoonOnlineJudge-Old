/**
 *  BOJ 1715번 C언어 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,504 KB / 131,072 KB
 *  소요 시간 : 24 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <stdio.h>
#include <stdlib.h>

typedef int HeapElement;
typedef struct HeapType{
	int heap_size;
	HeapElement *heap;
}HeapType;

void init_heap(HeapType *h,int n){
	h->heap_size=0;
	h->heap=(HeapElement*)calloc(n+1,sizeof(HeapElement));
}

void insert_min_heap(HeapType *h,HeapElement item){
	int i=++(h->heap_size);
	while((i!=1)&&(item<h->heap[i/2])){
		h->heap[i]=h->heap[i/2];
		i/=2;
	}
	h->heap[i]=item;
}

HeapElement delete_min_heap(HeapType *h){
	int parent=1,child=2;
	HeapElement item=h->heap[1];
	HeapElement tmp=h->heap[(h->heap_size)--];
	while(child<=h->heap_size){
		if((child<h->heap_size)&&(h->heap[child]>h->heap[child+1])) child++;
		if(tmp<=h->heap[child]) break;
		h->heap[parent]=h->heap[child];
		parent=child;
		child*=2;
	}
	h->heap[parent]=tmp;
	return item;
}

void deatroy_heap(HeapType *h){
	free(h->heap);
	free(h);
}

int main(void){
	HeapType *h=(HeapType*)malloc(sizeof(HeapType));
	int N;
	int answer=0;
	int i;
	scanf("%d",&N);
	init_heap(h,N);
	for(i=0;i<N;i++){
		HeapElement read;
		scanf("%d",&read);
		insert_min_heap(h,read);
	}
	for(i=1;i<N;i++){
		HeapElement e1=delete_min_heap(h);
		HeapElement e2=delete_min_heap(h);
		HeapElement e=e1+e2;
		answer+=e;
		insert_min_heap(h,e);
	}
	printf("%d\n",answer);
	deatroy_heap(h);
	return 0;
}