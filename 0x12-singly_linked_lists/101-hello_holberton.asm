section .data
       format db "%s", 10, 0
       msg1 db "Hello, Holberton", 0
section .text
extern printf
global main
main:
       mov  esi, msg1
       mov  edi, format
       mov  eax, 0     ; no f.p. args
       call printf
       mov ebx, 0      ; normal-exit code
       mov eax, 1      ; process-termination service
       int 0x80        ; linux kernel service
