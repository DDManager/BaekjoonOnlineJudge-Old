(*
 *  BOJ 2739번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,I:BYTE;
BEGIN
	READ(N);
	FOR I:=1 TO 9 DO WRITELN(N,' * ',I,' = ',N*I);
END.