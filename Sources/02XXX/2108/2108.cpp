/**
 *  BOJ 2108번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 2,344 KB / 262,144 KB
 *  소요 시간 : 96 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<short,int> &a,const pair<short,int> &b){
	if(a.second==b.second) return a.first<b.first;
	return a.second>b.second;
}

int main(void){
	int N,i;
	vector<short> A;
	vector<pair<short,int> > M;
	int sum=0;
	scanf("%d",&N);
	A.resize(N);
	for(i=0;i<N;i++){
		scanf("%hd",&A[i]);
		sum+=A[i];
	}
	sort(A.begin(),A.end());
	M.push_back(pair<short,int>(A[0],1));
	for(i=1;i<A.size();i++){
		if(M.back().first==A[i]) M.back().second++;
		else M.push_back(pair<short,int>(A[i],1));
	}
	sort(M.begin(),M.end(),comp);
	printf("%.0f\n",(double)sum/A.size());
	printf("%hd\n",A[A.size()/2]);
	printf("%hd\n",((M[0].second==M[1].second)?M[1]:M[0]).first);
	printf("%hd\n",A[A.size()-1]-A[0]);
	return 0;
}