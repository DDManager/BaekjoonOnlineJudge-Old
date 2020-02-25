(*
 *  BOJ 2609번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR X,Y,G:LONGINT;
FUNCTION GCD(A,B:LONGINT):LONGINT;
BEGIN
	IF B=0 THEN GCD:=A
	ELSE GCD:=GCD(B,A MOD B);
END;
BEGIN
	READ(X,Y);
	G:=GCD(X,Y);
	WRITELN(G);
	WRITELN(X*Y DIV G);
END.