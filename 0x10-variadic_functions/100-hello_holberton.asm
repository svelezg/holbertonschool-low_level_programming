section .rodata
    msg:    db 'Hello, Holberton', 10
    msglen: equ $-msg

section .text
        global main

main:
        mov rdi, 1			; write(1, msg, msglen)
        mov rsi, msg
        mov rdx, msglen
        mov rax, 1
        syscall				; exit(0)
        mov rdi, 0
        mov rax, 60
        syscall
