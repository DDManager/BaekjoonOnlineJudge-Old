(*
 *  BOJ 1978번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,X,C,L:LONGINT;
FUNCTION ISP(T:LONGINT):LONGINT;
VAR I:LONGINT;
LABEL Q;
BEGIN
	IF T=1 THEN
	BEGIN
		ISP:=0;
		GOTO Q;
	END;
	IF T=2 THEN
	BEGIN
		ISP:=1;
		GOTO Q;
	END;
	I:=2;
	WHILE I*I<=T DO
	BEGIN
		IF (T MOD I)=0 THEN
		BEGIN
			ISP:=0;
			GOTO Q;
		END;
		I:=I+1;
	END;
	ISP:=1;
	Q:
END;
BEGIN
	READ(N);
	C:=0;
	FOR L:=1 TO N DO
	BEGIN
		READ(X);
		C:=C+ISP(X);
	END;
	WRITELN(C);
END.