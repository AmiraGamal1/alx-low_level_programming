; source name  : 101-hello_holberton.asm
; AUthor       : Amira
; Description  : Hello, Holberton

	section .data
message:
	db	"Hello, Holberton", 10, 0
fmt:
	db	"%s", 0

	section .text

	global main
	extern printf
main:
	push rbp
	mov rdi, fmt
	mov rsi, message
	mov rax, 0

	call printf wrt ..plt

	pop rbp

	mov rax, 0
	ret
