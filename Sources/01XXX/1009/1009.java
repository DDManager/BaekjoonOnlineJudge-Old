/**
 *  BOJ 1009번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 15,356 KB / 278,528 KB
 *  소요 시간 : 152 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int r=p(sc.nextInt()%10,sc.nextInt())%10;
			System.out.println(r==0?10:r);
		}
		sc.close();
	}
	private static int p(int b,int e){
		int v=1;
		for(int i=0;i<(e%4==0?4:e%4);i++) v*=b;
		return v;
	}
}