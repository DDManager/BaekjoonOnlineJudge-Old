(*
 *  BOJ 1330번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 524,288 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR A,B:LONGINT;
BEGIN
	READ(A,B);
	IF A>B THEN WRITE('>')
	ELSE IF A<B THEN WRITE('<')
	ELSE WRITE('==')
END.