/**
 *  BOJ 1004번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 27,436 KB / 278,528 KB
 *  소요 시간 : 288 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int sx=sc.nextInt();
			int sy=sc.nextInt();
			int ex=sc.nextInt();
			int ey=sc.nextInt();
			int n=sc.nextInt();
			int cnt=0;
			for(int j=0;j<n;j++){
				int x=sc.nextInt();
				int y=sc.nextInt();
				int r=sc.nextInt();
				boolean c1=check(x,sx,y,sy,r);
				boolean c2=check(x,ex,y,ey,r);
				if(c1&&c2) continue;
				else if(c1||c2) cnt++;
			}
			System.out.println(cnt);
		}
		sc.close();
	}
	private static boolean check(int x,int xx,int y,int yy,int r){
		return (x-xx)*(x-xx)+(y-yy)*(y-yy)<r*r;
	}
}