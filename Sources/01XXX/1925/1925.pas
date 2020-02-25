(*
 *  BOJ 1925번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 336 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR X1,Y1,X2,Y2,X3,Y3,AD,BD,CD,M,S:INT64;
BEGIN
	READ(X1,Y1);
	READ(X2,Y2);
	READ(X3,Y3);
	AD:=SQR(X1-X2)+SQR(Y1-Y2);
	BD:=SQR(X2-X3)+SQR(Y2-Y3);
	CD:=SQR(X3-X1)+SQR(Y3-Y1);
	S:=AD+BD+CD;
	M:=AD;
	IF M<BD THEN M:=BD;
	IF M<CD THEN M:=CD;
	IF(X2-X1)*(Y3-Y1)=(X3-X1)*(Y2-Y1)THEN WRITE('X')
	ELSE IF(AD=BD)OR(BD=CD)OR(CD=AD)THEN
	BEGIN
		IF(M>S-M)THEN WRITE('Dunkak2Triangle')
		ELSE IF(M<S-M)THEN WRITE('Yeahkak2Triangle')
		ELSE WRITE('Jikkak2Triangle');
	END
	ELSE
	BEGIN
		IF(M>S-M)THEN WRITE('DunkakTriangle')
		ELSE IF(M<S-M)THEN WRITE('YeahkakTriangle')
		ELSE WRITE('JikkakTriangle');
	END;
END.