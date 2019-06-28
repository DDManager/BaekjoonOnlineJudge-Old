(*
 *  BOJ 1934번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 4 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR T,X,Y,L:LONGINT;
FUNCTION GCD(A,B:LONGINT):LONGINT;
BEGIN
	IF B=0 THEN GCD:=A
	ELSE GCD:=GCD(B,A MOD B);
END;
BEGIN
	READ(T);
	FOR L:=1 TO T DO
	BEGIN
		READ(X,Y);
		WRITELN(X*Y DIV GCD(X,Y));
	END;
END.