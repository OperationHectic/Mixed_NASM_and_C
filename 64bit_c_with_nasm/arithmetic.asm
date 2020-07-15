global add
global sub
global main

section .data

section .text

add:
    lea rax, [rdi+rsi]
    ret

sub:
    sub rdi, rsi
    mov rax, rdi
    ret
