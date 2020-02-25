/**
 *  BOJ 7469번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 43,936 KB / 540,672 KB
 *  소요 시간 : 1,564 ms / 3,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

import java.io.*;
import java.util.Arrays;
public class Main{
	private static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	private static BufferedWriter bw=new BufferedWriter(new OutputStreamWriter(System.out));
	private static NumData[] nums;
	public static void main(String[] args)throws Exception{
		String[] read=br.readLine().split(" ");
		int N=pInt(read[0]);
		int M=pInt(read[1]);
		nums=new NumData[N];
		read=br.readLine().split(" ");
		for(int i=0;i<N;i++){
			nums[i]=new NumData();
			nums[i].setNum(pInt(read[i]));
			nums[i].setIdx(i+1);
		}
		Arrays.sort(nums);
		for(int i=0;i<M;i++){
			read=br.readLine().split(" ");
			int I=pInt(read[0]);
			int J=pInt(read[1]);
			int K=pInt(read[2]);
			Q(I,J,K,N);
		}
		br.close();
		bw.close();
	}
	
	private static int pInt(String s){
		return Integer.parseInt(s);
	}
	
	private static void Q(int I,int J,int K,int N)throws Exception{
		if((J-I)/2<K){
			int cnt=J-I+2;
			for(int i=N-1;i>=0;i--){
				if(I<=nums[i].getIdx()&&nums[i].getIdx()<=J) cnt--;
				if(cnt==K){
					bw.write(nums[i].getNum()+"\n");
					break;
				}
			}
		}else{
			int cnt=0;
			for(int i=0;i<N;i++){
				if(I<=nums[i].getIdx()&&nums[i].getIdx()<=J) cnt++;
				if(cnt==K){
					bw.write(nums[i].getNum()+"\n");
					break;
				}
			}
		}
	}
	
	private static class NumData implements Comparable<NumData>{
		private int num=0,index=0;

		@Override
		public int compareTo(NumData o){
			return num-o.getNum();
		}
		
		public void setNum(int n){
			num=n;
		}
		
		public int getNum(){
			return num;
		}
		
		public void setIdx(int idx){
			index=idx;
		}
		
		public int getIdx(){
			return index;
		}
	}
}