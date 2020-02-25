/**
 *  BOJ 3649번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 397,092 KB / 540,672 KB
 *  소요 시간 : 6,228 ms / 11,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

import java.util.*;
public class Main{
	private static int[] l;
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		while(sc.hasNext()){
			int x=sc.nextInt();
			int n=sc.nextInt();
			l=new int[n];
			for(int i=0;i<n;i++){
				l[i]=sc.nextInt();
			}
			Arrays.sort(l);
			if(find(x*10000000,n)) System.out.println("danger");
		}
		sc.close();
	}
	
	private static boolean find(int x,int n){
		int low=0,high=n-1,sum;
		while(low<high){
			sum=l[low]+l[high];
			if(sum==x){
				System.out.println(String.format("yes %d %d",l[low],l[high]));
				return false;
			}else if(sum<x) low++;
			else high--;
		}
		return true;
	}
}