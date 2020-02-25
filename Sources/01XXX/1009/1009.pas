(*
 *  BOJ 1009번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR T,A,B,R:LONGINT;
VAR LOOP:LONGINT;
FUNCTION POW(BASE,EXP:LONGINT):LONGINT;
VAR V,L,EM:LONGINT;
BEGIN
	V:=1;
	EM:=EXP MOD 4;
	IF EM=0 THEN EM:=4;
	FOR L:=1 TO EM DO
		V:=V*BASE;
	POW:=V;
END;
BEGIN
	READ(T);
	FOR LOOP:=1 TO T DO
	BEGIN
		READ(A,B);
		R:=POW(A MOD 10,B) MOD 10;
		IF R=0 THEN R:=10;
		WRITELN(R);
	END;
END.