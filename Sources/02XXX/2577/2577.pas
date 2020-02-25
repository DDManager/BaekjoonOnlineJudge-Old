(*
 *  BOJ 2577번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR A,B,C:INT64;D:ARRAY[0..9]OF BYTE=(0,0,0,0,0,0,0,0,0,0);
BEGIN
	READ(A,B,C);
	A:=A*B*C;
	WHILE A>0 DO
	BEGIN
		INC(D[A MOD 10]);
		A:=A DIV 10;
	END;
	FOR A IN D DO WRITELN(A);
END.