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
BOOL1   DB "0"
SHORT1	DB "3"
.CODE

main PROC

START: 
	INVOKE MessageBoxA, HW, OFFSET BOOL1, OFFSET SHORT1, MB_OK
	push 0
	call ExitProcess
main ENDP
end main
