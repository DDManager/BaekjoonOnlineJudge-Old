/**
 *  BOJ 10814번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 8,172 KB / 262,144 KB
 *  소요 시간 : 96 ms / 3,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

typedef struct People{
	int id:20;
	int age:10;
	string name;
}People;

bool compare(const People a,const People b){
	if(a.age!=b.age) return a.age<b.age;
	return a.id<b.id;
}

int main(void){
	int N;
	People *A;
	int i;
	scanf("%d",&N);
	A=(People*)calloc(N,sizeof(People));
	for(i=0;i<N;i++){
		int age;
		char name[101];
		scanf("%d %s",&age,name);
        A[i].id=i;
		A[i].age=age;
		A[i].name=name;
	}
	sort(A,A+N,compare);
	for(i=0;i<N;i++) printf("%d %s\n",A[i].age,A[i].name.c_str());
	return 0;
}