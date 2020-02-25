(*
 *  BOJ 2562번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR P,I:BYTE;X:ARRAY[1..9]OF BYTE;
BEGIN
	P:=1;
	FOR I:=1 TO 9 DO
	BEGIN
		READ(X[I]);
		IF X[I]>X[P]THEN P:=I
	END;
	WRITELN(X[P]);
	WRITELN(P)
END.