/**
 *  BOJ 10827번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,576 KB / 540,672 KB
 *  소요 시간 : 108 ms / 3,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

import java.math.BigDecimal;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.println(new BigDecimal(sc.next()).pow(sc.nextInt()).toPlainString());
		sc.close();
	}
}