/**
 *  BOJ 1357번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,308 KB / 278,528 KB
 *  소요 시간 : 100 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.*;
public class Main{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int x=sc.nextInt();
		int y=sc.nextInt();
		System.out.println(rev(rev(x)+rev(y)));
		sc.close();
	}
	private static int rev(int n){
		return Integer.parseInt(new StringBuilder(""+n).reverse().toString());
	}
}