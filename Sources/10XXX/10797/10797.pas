(*
 *  BOJ 10797번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,M,L,C:INTEGER;
BEGIN
	READ(N);
	C:=0;
	FOR L:=1 TO 5 DO
	BEGIN
		READ(M);
		IF N=M THEN C:=C+1;
	END;
	WRITE(C);
END.