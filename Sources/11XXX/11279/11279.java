/**
 *  BOJ 11279번 Java 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 104,008 KB / 540,672 KB
 *  소요 시간 : 1,264 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 */

import java.util.PriorityQueue;
import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		PriorityQueue<DInt> queue=new PriorityQueue<>();
		int N=sc.nextInt();
		for(int i=0;i<N;i++){
			int cmd=sc.nextInt();
			if(cmd==0) System.out.println(queue.isEmpty()?0:queue.poll().getInt());
			else queue.add(new DInt(cmd));
		}
		sc.close();
	}
}

class DInt implements Comparable<DInt>{
	private int data;
	
	public DInt(int data){
		this.data=data;
	}
	
	protected int getInt(){
		return data;
	}
	
	@Override
	public int compareTo(DInt x){
		if(x.getInt()==this.getInt()) return 0;
		return (x.getInt()<this.getInt())?-1:1;
	}
}