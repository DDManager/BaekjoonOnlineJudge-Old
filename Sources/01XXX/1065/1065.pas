(*
 *  BOJ 1065번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,A,B,C,I,R:LONGINT;
BEGIN
	R:=99;
	READ(N);
	IF N<100 THEN WRITE(N)
	ELSE
	BEGIN
		FOR I:=100 TO N DO
		BEGIN
			A:=I DIV 100;
			B:=(I DIV 10) MOD 10;
			C:=I MOD 10;
			IF(A-B=B-C) THEN R:=R+1;
		END;
		WRITE(R);
	END;
END.