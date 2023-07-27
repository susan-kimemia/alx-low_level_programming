section .data
    hello db "Hello, Holberton", 0

section .text
    extern printf

global main
main:
    ; Call printf with the address of the hello string as the argument
    mov rdi, hello   ; Set rdi to the address of the hello string
    call printf      ; Call printf with the argument in rdi

    ; Exit the program
    mov rax, 60      ; syscall number for sys_exit
    xor edi, edi     ; exit status 0
    syscall          ; invoke syscall

section .bss
    ; Reserve space for any uninitialized data, if needed

