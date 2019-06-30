(*
 *  BOJ 4101번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR A,B:LONGINT;
BEGIN
	WHILE TRUE DO
	BEGIN
	READ(A,B);
		IF(A=0)AND(B=0)THEN BREAK;
		IF(A>B)THEN WRITELN('Yes')
		ELSE WRITELN('No');
	END;
END.