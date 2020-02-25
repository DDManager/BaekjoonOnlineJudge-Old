(*
 *  BOJ 10707번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR A,B,C,D,P,X,Y:LONGINT;
BEGIN
	READ(A,B,C,D,P);
	X:=A*P;
	Y:=B;
	IF P>C THEN Y:=Y+D*(P-C);
	IF Y<X THEN X:=Y;
	WRITE(X);
END.