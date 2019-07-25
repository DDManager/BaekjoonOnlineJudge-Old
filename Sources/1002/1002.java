/**
 *  BOJ 1002번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 17,020 KB / 278,528 KB
 *  소요 시간 : 160 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int x1=sc.nextInt();
			int y1=sc.nextInt();
			int r1=sc.nextInt();
			int x2=sc.nextInt();
			int y2=sc.nextInt();
			int r2=sc.nextInt();
			System.out.println(calc(x1,y1,r1,x2,y2,r2));
		}
		sc.close();
	}
	private static int calc(int x1,int y1,int r1,int x2,int y2,int r2){
		int xx=x2-x1;
		int yy=y2-y1;
		int rr=(r1+r2)*(r1+r2);
		int dist=xx*xx+yy*yy;
		if(dist==0){
			if(r1==r2) return -1;
		}else{
			if((dist<rr)&&(dist>(r2-r1)*(r2-r1))) return 2;
			if((dist==rr)||(dist==(r2-r1)*(r2-r1))) return 1;
		}
		return 0;
	}
}