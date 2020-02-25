(*
 *  BOJ 2164번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR N,I:LONGINT;
BEGIN
	READ(N);
	I:=1;
	WHILE(I<N)DO I:=I*2;
	IF N=1 THEN WRITE(1)
	ELSE WRITE((N-I DIV 2)*2)
END.