(*
 *  BOJ 9498번 Pascal 소스 코드
 *  작성자 : 동동매니저 (DDManager)
 *
 *  ※ 실행 결과
 *  사용 메모리 : 340 KB / 131,072 KB
 *  소요 시간 : 0 ms / 1,000 ms
 *
 *  Copyright 2019. DDManager all rights reserved.
 *)

VAR S:LONGINT;
BEGIN
	READ(S);
	IF S>=90 THEN WRITE('A')
	ELSE IF S>=80 THEN WRITE('B')
	ELSE IF S>=70 THEN WRITE('C')
	ELSE IF S>=60 THEN WRITE('D')
	ELSE WRITE('F');
END.