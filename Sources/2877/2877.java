/**
 *  BOJ 2877번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,268 KB / 278,528 KB
 *  소요 시간 : 108 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int K=sc.nextInt()+1;
		StringBuilder sb=new StringBuilder();
		for(int p=K;p>1;p/=2) sb.append((p%2==1)?"7":"4");
		System.out.println(sb.reverse());
		sc.close();
	}
}