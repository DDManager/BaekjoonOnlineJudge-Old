(*
 *  BOJ 2475번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR A,B,C,D,E:INTEGER;
BEGIN
	READ(A,B,C,D,E);
	WRITE((A*A+B*B+C*C+D*D+E*E)MOD 10);
END.
