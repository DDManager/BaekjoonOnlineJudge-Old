(*
 *  BOJ 8958번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,S,L,P,C:LONGINT;ST:STRING[80];
BEGIN
	READLN(N);
	FOR L:=1 TO N DO
	BEGIN
		READLN(ST);
		S:=0;
		C:=0;
		FOR P:=1 TO LENGTH(ST) DO
		BEGIN
			IF ST[P]='O' THEN
			BEGIN
				INC(C);
				S:=S+C;
			END
			ELSE C:=0;
		END;
		WRITELN(S)
	END;
END.