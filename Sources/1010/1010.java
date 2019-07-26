/**
 *  BOJ 1010번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 15,896 KB / 278,528 KB
 *  소요 시간 : 172 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++) System.out.println(C(sc.nextInt(),sc.nextInt()));
		sc.close();
	}
	private static int C(int N,int M){
		int v=1;
		if(M-N<N) N=M-N;
		for(int i=1;i<=N;i++){
			v*=M-i+1;
			v/=i;
		}
		return v;
	}
}