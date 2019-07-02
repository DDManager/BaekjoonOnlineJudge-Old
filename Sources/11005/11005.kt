/**
 *  BOJ 11005번 Kotlin (Native) 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 14,248 KB / 278,528 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 */

fun main(args:Array<String>){
	var NB=readLine()!!.split(" ")
	var N=NB[0].toInt()
	var B=NB[1].toInt()
	println(N.toString(B).toUpperCase())
}