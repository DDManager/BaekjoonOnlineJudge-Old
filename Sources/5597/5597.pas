(*
 *  BOJ 5597번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR D:STRING[30]='000000000000000000000000000000';
VAR L,N:BYTE;
BEGIN
	FOR L:=1 TO 28 DO
	BEGIN
		READ(N);
		D[N]:='1';
	END;
	FOR L:=1 TO 30 DO IF(D[L]='0')THEN WRITELN(L);
END.