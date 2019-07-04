/**
 *  BOJ 2908번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,260 KB / 278,528 KB
 *  소요 시간 : 112 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.*;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int A=rev(sc.nextInt());
		int B=rev(sc.nextInt());
		System.out.println(A>B?A:B);
		sc.close();
	}
	private static int rev(int i){
		return Integer.parseInt(new StringBuilder(Integer.toString(i)).reverse().toString());
	}
}