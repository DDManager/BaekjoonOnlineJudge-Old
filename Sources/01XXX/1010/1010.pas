(*
 *  BOJ 1010번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR T,N,M,I:LONGINT;
FUNCTION C(N,M:LONGINT):LONGINT;
VAR V,L:LONGINT;
BEGIN
	V:=1;
	IF M-N<N THEN N:=M-N;
	FOR L:=1 TO N DO
	BEGIN
		V:=V*(M-L+1);
		V:=V DIV L;
	END;
	C:=V;
END;
BEGIN
	READ(T);
	FOR I:=1 TO T DO
	BEGIN
		READ(N,M);
		WRITELN(C(N,M));
	END;
END.