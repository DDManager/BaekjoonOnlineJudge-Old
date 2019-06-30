(*
 *  BOJ 5585번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR CO:ARRAY[1..6]OF INTEGER=(500,100,50,10,5,1);
VAR CA,CN,T,I:INTEGER;
BEGIN
	CN:=0;
	READ(CA);
	CA:=1000-CA;
	FOR I:=1 TO 6 DO
	BEGIN
		T:=CA DIV CO[I];
		CN:=CN+T;
		CA:=CA-T*CO[I];
	END;
	WRITE(CN);
END.