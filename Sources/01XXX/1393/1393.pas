(*
 *  BOJ 1393번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 2,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR X,Y,CX,CY,MX,MY,G,PD,ND,RX,RY:INTEGER;
FUNCTION GCD(A,B:INTEGER):INTEGER;
VAR C,MAX,MIN:INTEGER;
BEGIN
	A:=ABS(A);
	B:=ABS(B);
	IF A>B THEN
	BEGIN
		MAX:=A;
		MIN:=B;
	END
	ELSE
	BEGIN
		MAX:=B;
		MIN:=A;
	END;
	WHILE MIN>0 DO
	BEGIN
		C:=MAX MOD MIN;
		MAX:=MIN;
		MIN:=C;
	END;
	GCD:=MAX;
END;
BEGIN
	READ(X,Y);
	READ(CX,CY,MX,MY);
	G:=GCD(MX,MY);
	IF G<=0 THEN G:=1;
	MX:=MX DIV G;
	MY:=MY DIV G;
	RX:=CX;
	RY:=CY;
	PD:=SQR(X-CX)+SQR(Y-CY);
	WHILE TRUE DO
	BEGIN
		CX:=CX+MX;
		CY:=CY+MY;
		ND:=SQR(X-CX)+SQR(Y-CY);
		IF ND>PD THEN BREAK;
		PD:=ND;
		RX:=CX;
		RY:=CY;
	END;
	WRITELN(RX,' ',RY);
END.