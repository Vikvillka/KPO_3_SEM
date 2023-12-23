.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO : DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA

MB_OK	EQU 0
HW		DD ?
CHAR    DB d
CHARXXX	DB l
.CODE

main PROC

START: 
	INVOKE MessageBoxA, HW, OFFSET CHAR, OFFSET CHARXXX, MB_OK
	push 0
	call ExitProcess
main ENDP
end main
