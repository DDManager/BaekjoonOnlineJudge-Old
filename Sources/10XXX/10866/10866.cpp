/**
 *  BOJ 10866번 C++ 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 1,224 KB / 262,144 KB
 *  소요 시간 : 4 ms / 500 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

#include <cstdio>
#include <cstring>
#include <deque>
using namespace std;

int main(void){
	deque<int> deq;
	int N;
	char cmd[12];
	int i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		int read;
		scanf("%s",cmd);
		if(strcmp(cmd,"push_front")==0){
			scanf("%d",&read);
			deq.push_front(read);
		}else if(strcmp(cmd,"push_back")==0){
			scanf("%d",&read);
			deq.push_back(read);
		}else if(strcmp(cmd,"pop_front")==0){
			if(deq.size()>0){
				printf("%d\n",deq.front());
				deq.pop_front();
			}else puts("-1");
		}else if(strcmp(cmd,"pop_back")==0){
			if(deq.size()>0){
				printf("%d\n",deq.back());
				deq.pop_back();
			}else puts("-1");
		}else if(strcmp(cmd,"size")==0) printf("%d\n",(int)deq.size());
		else if(strcmp(cmd,"empty")==0) printf("%d\n",deq.empty());
		else if(strcmp(cmd,"front")==0) printf("%d\n",(deq.size()>0)?deq.front():-1);
		else if(strcmp(cmd,"back")==0) printf("%d\n",(deq.size()>0)?deq.back():-1);
	}
	return 0;
}