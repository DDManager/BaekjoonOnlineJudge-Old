/**
 *  BOJ 2745번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,344 KB / 278,528 KB
 *  소요 시간 : 108 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.*;

public class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		String N=sc.next();
		int B=sc.nextInt();
		System.out.println(Integer.parseInt(N,B));
		sc.close();
	}
}