(*
 *  BOJ 1037번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 524,288 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR C,D,MIN,MAX,I:LONGINT;
BEGIN
	MIN:=1000000;MAX:=0;
	READ(C);
	FOR I:=1 TO C DO
	BEGIN
		READ(D);
		IF D<MIN THEN MIN:=D;
		IF D>MAX THEN MAX:=D;
	END;
	WRITE(MIN*MAX);
END.