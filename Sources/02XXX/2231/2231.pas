(*
 *  BOJ 2231번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 196,608 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

FUNCTION DSUM(N:INT64):INT64;
BEGIN
	IF N=0 THEN DSUM:=0
	ELSE DSUM:=DSUM(N DIV 10)+N MOD 10
END;
VAR N,I:INT64;
BEGIN
	READ(N);
	FOR I:=N-99 TO N DO IF I+DSUM(I)=N THEN BREAK;
	WRITE(I MOD N)
END.