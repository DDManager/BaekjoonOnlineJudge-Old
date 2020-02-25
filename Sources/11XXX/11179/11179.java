/**
 *  BOJ 11179번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,284 KB / 540,672 KB
 *  소요 시간 : 108 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.*;
public class Main{
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println(Integer.parseInt(new StringBuilder(Integer.toString(sc.nextInt(),2)).reverse().toString(),2));
		sc.close();
	}
}