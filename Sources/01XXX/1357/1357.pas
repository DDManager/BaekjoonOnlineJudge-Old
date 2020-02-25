(*
 *  BOJ 1357번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR X,Y:LONGINT;
FUNCTION REV(N:LONGINT):LONGINT;
VAR S,R:LONGINT;
BEGIN
	S:=0;
	WHILE (N>0) DO
	BEGIN
		R:=N MOD 10;
		N:=N DIV 10;
		S:=S*10+R;
	END;
	REV:=S;
END;
BEGIN
	READ(X,Y);
	WRITELN(REV(REV(X)+REV(Y)));
END.