(*
 *  BOJ 1004번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 4 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR T,I,SX,SY,EX,EY,N,X,Y,R,J,CNT,C1,C2:LONGINT;
FUNCTION CHK(X,XX,Y,YY,R:LONGINT):BOOLEAN;
BEGIN
	CHK:=SQR(X-XX)+SQR(Y-YY)<R*R;
END;
BEGIN
	READ(T);
	FOR I:=1 TO T DO
	BEGIN
		CNT:=0;
		READ(SX,SY,EX,EY);
		READ(N);
		FOR J:=1 TO N DO
		BEGIN
			READ(X,Y,R);
			IF CHK(X,SX,Y,SY,R) AND CHK(X,EX,Y,EY,R) THEN CONTINUE
			ELSE IF CHK(X,SX,Y,SY,R) OR CHK(X,EX,Y,EY,R) THEN INC(CNT);
		END;
		WRITELN(CNT);
	END;
END.