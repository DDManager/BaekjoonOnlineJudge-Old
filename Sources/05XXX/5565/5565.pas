(*
 *  BOJ 5565번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR T,L,B:LONGINT;
BEGIN
	READ(T);
	FOR L:=1 TO 9 DO
	BEGIN
		READ(B);
		T:=T-B;
	END;
	WRITE(T);
END.