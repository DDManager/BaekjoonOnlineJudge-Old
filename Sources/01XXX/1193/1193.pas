(*
 *  BOJ 1193번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 262,144 KB
 *  소요 시간 : 0 ms / 500 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR X,T,A,N:LONGINT;
BEGIN
	READ(X);
	T:=TRUNC((SQRT(8*x)-1)/2+2);
	N:=T*(T-1)DIV 2;
	A:=N-X+1;
	IF T MOD 2=1 THEN WRITE(T-A,'/',A)
	ELSE WRITE(A,'/',T-A);
END.