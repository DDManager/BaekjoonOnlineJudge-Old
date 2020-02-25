(*
 *  BOJ 2884번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR H,M,T:LONGINT;
BEGIN
	READ(H,M);
	T:=H*60+M+1395;
	WRITE(T DIV 60 MOD 24,' ',T MOD 60)
END.