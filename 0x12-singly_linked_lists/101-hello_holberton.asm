section .data
    hello db 'hello,holberton',0Ah   ; message to be displayed

_start:
    ; write hello to stdout
    mov eax, 4       ; system call for write
    mov ebx, 1       ; file descriptor for stdout
    mov ecx, hello   ; message to be printed
    mov edx, 14      ; message length
    int 0x80         ; invoke kernel

    ; exit program
    mov eax, 1       ; system call for exit
    xor ebx, ebx     ; return 0 status
    int 0x80         ; invoke kernel
