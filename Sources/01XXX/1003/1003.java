/**
 *  BOJ 1003번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,656 KB / 278,528 KB
 *  소요 시간 : 132 ms / 250 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++) calc(sc.nextInt());
		sc.close();
	}
	private static void calc(int N){
		int a=0,b=0,t;
		if(N==0) a++;
		else if(N==1) b++;
		else{
			a=1;b=1;
			for(int i=2;i<N;i++){
				t=a+b;
				a=b;b=t;
			}
		}
		System.out.println(String.format("%d %d",a,b));
	}
}