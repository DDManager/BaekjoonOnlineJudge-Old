/**
 *  BOJ 11005번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,304 KB / 540,672 KB
 *  소요 시간 : 112 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.*;

public class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int N=sc.nextInt();
		int B=sc.nextInt();
		System.out.println(Integer.toString(N,B).toUpperCase());
		sc.close();
	}
}