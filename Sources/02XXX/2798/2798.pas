(*
 *  BOJ 2798번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2020. DDManager all rights reserved.
 *)

VAR A:ARRAY[1..100]OF LONGINT;N,M,R,S,I,J,K:INT64;
BEGIN
	READ(N,M);
	FOR I:=1 TO N DO READ(A[I]);
	R:=0;
	FOR I:=1 TO N DO
	BEGIN
		FOR J:=I+1 TO N DO
		BEGIN
			FOR K:=J+1 TO N DO
			BEGIN
				S:=A[I]+A[J]+A[K];
				IF(S<=M)AND(S>R)THEN R:=S;
			END;
		END;
	END;
	WRITE(R)
END.