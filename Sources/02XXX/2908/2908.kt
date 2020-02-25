/**
 *  BOJ 2908번 Kotlin (Native) 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,252 KB / 147,456 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

fun main(args:Array<String>){
	var nums=readLine()!!.split(" ")
	var A=nums[0].reversed().toInt()
	var B=nums[1].reversed().toInt()
	println(kotlin.math.max(A,B))
}