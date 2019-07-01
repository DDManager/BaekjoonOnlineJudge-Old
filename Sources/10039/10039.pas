(*
 *  BOJ 10039번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR S,A,L:LONGINT;
BEGIN
	A:=0;
	FOR L:=1 TO 5 DO
	BEGIN
		READ(S);
		IF S<40 THEN S:=40;
		A:=A+S;
	END;
	WRITE(A DIV 5);
END.