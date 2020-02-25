(*
 *  BOJ 5543번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR B,D,I,T:LONGINT;
BEGIN
	B:=2000;D:=2000;
	FOR I:=1 TO 5 DO
	BEGIN
		READ(T);
		IF(I<=3)AND(T<B)THEN B:=T
		ELSE IF(T<D)THEN D:=T;
	END;
	WRITE(B+D-50);
END.