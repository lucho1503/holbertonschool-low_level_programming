	section .text
	global main

main:
	mov rax, 1		; write(
	mov rdi, 1		;	STDOUT_FILENO,
	mov rsi, msg		;	"hello, world\n",
	mov rdx, msglen		;	sizeof("Hello, world\n")
	syscall			;	);

	mov rax, 60		; exit(
	mov rdi, 0		;	EXIT_SUCCES
	syscall			; );

	section .rodata
msg:	db "Hello, holberton", 10
msglen:	equ $ -msg
