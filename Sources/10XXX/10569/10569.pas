(*
 *  BOJ 10569번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 262,144 KB
 *  소요 시간 : 0 ms / 5,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,V,E,L:LONGINT;
BEGIN
	READ(N);
	FOR L:=1 TO N DO
	BEGIN
		READ(V,E);
		WRITELN(E-V+2);
	END;
END.