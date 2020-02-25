(*
 *  BOJ 1735번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

FUNCTION GCD(A,B:INT64):INT64;
BEGIN
	IF B=0 THEN GCD:=A
	ELSE GCD:=GCD(B,A MOD B)
END;
VAR A1,B1,A2,B2,AR,BR,G:INT64;
BEGIN
	READ(A1,B1);
	READ(A2,B2);
	AR:=A1*B2+A2*B1;
	BR:=B1*B2;
	G:=GCD(AR,BR);
	WRITE(AR DIV G,' ',BR DIV G)
END.