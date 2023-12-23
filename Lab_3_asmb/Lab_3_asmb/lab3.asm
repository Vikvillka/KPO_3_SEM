.586P
.MODEL FLAT, STDCALL
includelib kernel32.lib

ExitProcess PROTO :DWORD
MessageBoxA PROTO : DWORD, : DWORD, : DWORD, : DWORD

.STACK 4096

.CONST

.DATA
	myBytes BYTE 10h, 20h, 30h, 40h					; 1 байт
	myWords WORD 8Ah, 44h, 3Bh, 5Fh, 99h			; 2 байта
	

	massive DWORD 1, 2, 3, 4, 5, 6, 7				
	sumOfElements DWORD 0							
	
	STR1 DB "Бычковская Виктория Александровна, 5 ", 0			
	STR2 DB "Есть нулевой элемент", 0 
	STR3 DB "Нулевого элемента не найдено", 0 

.CODE

main PROC
start: 
	mov ESI, OFFSET myWords
	mov AX, [ESI + 4] ; 3Bh
	mov BX, [ESI + 2] ; 44h

	;Вычислить сумму элементов массива. Результат запомнить в регистре EAX.
	mov ESI, OFFSET massive
	mov ECX, lengthof massive						
	mov EBX, 1

CYCLE:
	mov EAX, [ESI]									
	add sumOfElements, EAX							
	add ESI, type massive							; +4 байта
	cmp EAX, 0										; сравнение
	jz ZERO
	loop CYCLE										; ECX--, if (ECX != 0) goto CYCLE
	jmp ALLOK										; if massive!=0 goto ALLOK

ZERO:
	mov EBX, 0	
	jz ZD1

ALLOK:
	mov eax, sumOfElements	
	jnz ZD2


ZD1:
	INVOKE MessageBoxA, 0, OFFSET Str2, OFFSET Str1, 1
	INVOKE ExitProcess, 2

ZD2:
	INVOKE MessageBoxA, 0, OFFSET Str3, OFFSET Str1, 1
	INVOKE ExitProcess, 2
	
push 0
call ExitProcess

main ENDP

end main
