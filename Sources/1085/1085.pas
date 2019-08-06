(*
 *  BOJ 1085번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

FUNCTION MIN(X,Y:LONGINT):LONGINT;
BEGIN
	IF X<Y THEN MIN:=X
	ELSE MIN:=Y;
END;
VAR X,Y,W,H:LONGINT;
BEGIN
	READ(X,Y,W,H);
	WRITE(MIN(MIN(X,W-X),MIN(Y,H-Y)));
END.