/**
 *  BOJ 1012번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 27,876 KB / 1,064,960 KB
 *  소요 시간 : 272 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.util.Scanner;
public class Main{
	private static boolean[][] data;
	private static int M,N;
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int ans=0;
			M=sc.nextInt();
			N=sc.nextInt();
			int K=sc.nextInt();
			data=new boolean[M][N];
			for(int j=0;j<M;j++) for(int p=0;p<N;p++) data[j][p]=false;
			for(int j=0;j<K;j++) data[sc.nextInt()][sc.nextInt()]=true;
			for(int j=0;j<M;j++){
				for(int p=0;p<N;p++){
					if(data[j][p]){
						spread(j,p);
						ans++;
					}
				}
			}
			System.out.println(ans);
		}
		sc.close();
	}
	private static void spread(int x,int y){
		data[x][y]=false;
		if(x>0&&data[x-1][y]) spread(x-1,y);
		if(x<M-1&&data[x+1][y]) spread(x+1,y);
		if(y>0&&data[x][y-1]) spread(x,y-1);
		if(y<N-1&&data[x][y+1]) spread(x,y+1);
	}
}