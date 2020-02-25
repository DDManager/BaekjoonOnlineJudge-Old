(*
 *  BOJ 3052번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR D:ARRAY[0..41]OF BOOLEAN;I,R,A:LONGINT;
BEGIN
	A:=0;
	FOR I:=0 TO 41 DO D[I]:=FALSE;
	FOR I:=0 TO 9 DO
	BEGIN
		READ(R);
		R:=R MOD 42;
		IF NOT(D[R])THEN
		BEGIN
			D[R]:=TRUE;
			A:=A+1;
		END;
	END;
	WRITE(A)
END.