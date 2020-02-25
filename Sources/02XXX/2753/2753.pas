(*
 *  BOJ 2753번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR Y:LONGINT;
BEGIN
	READ(Y);
	WRITE(ORD((Y MOD 4=0)AND(Y MOD 100>0)OR(Y MOD 400=0)))
END.