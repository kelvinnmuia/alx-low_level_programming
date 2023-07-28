section .data
    hello_message db "Hello, Holberton,", 0
    format db "%s", 0
    new_line db 10, 0   ; New line character '\n'

section .text
    global main

    extern printf, exit

main:
    ; Align the stack on a 16-byte boundary before the call to printf
    mov rax, 0           ; RAX is used as padding to align the stack
    push rax
    push rdi             ; Push RDI to align the stack on a 16-byte boundary

    ; Prepare the arguments for printf
    lea rdi, [hello_message] ; Load the address of the message to rdi (1st argument)
    lea rsi, [format]        ; Load the address of the format string to rsi (2nd argument)
    xor rax, rax             ; Clear rax (to indicate no vector registers used)
    call printf             ; Call the printf function

    ; Print the new line character
    lea rdi, [new_line]     ; Load the address of the new line character to rdi (1st argument)
    lea rsi, [format]       ; Load the address of the format string to rsi (2nd argument)
    xor rax, rax            ; Clear rax (to indicate no vector registers used)
    call printf            ; Call the printf function

    ; Restore the stack alignment
    pop rdi

    ; Exit the program
    xor edi, edi            ; Clear edi (exit code 0)
    call exit              ; Call the exit function

section .bss
    ; Add any uninitialized data here (if needed)

