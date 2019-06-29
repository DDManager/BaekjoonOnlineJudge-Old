(*
 *  BOJ 2292번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR N,C,S:INT64;
BEGIN
	C:=1;
	S:=1;
	READ(N);
	WHILE S<N DO
	BEGIN
		S:=S+6*C;
		C:=C+1;
	END;
	WRITE(C);
END.