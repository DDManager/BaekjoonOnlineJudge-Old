(*
 *  BOJ 10250번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 262,144 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR T,H,W,N,C,D,I:INT64;
BEGIN
	READ(T);
	FOR I:=1 TO T DO
	BEGIN
		READ(H,W,N);
		C:=N MOD H;
		D:=N DIV H;
		IF C=0 THEN
		BEGIN
			C:=H;
			D:=D-1;
		END;
		WRITELN(C*100+D+1);
	END;
END.