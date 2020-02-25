(*
 *  BOJ 2455번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR O,I,S,M,L:LONGINT;
BEGIN
	S:=0;
	M:=0;
	FOR L:=1 TO 4 DO
	BEGIN
		READ(O,I);
		S:=S+I-O;
		IF S>M THEN M:=S;
	END;
	WRITE(M);
END.