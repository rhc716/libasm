    section .text
	extern ___error
	global _ft_read
_ft_read:
    mov rax, 0x02000003
    syscall
	jc _read_err
    ret
_read_err:  
    mov [errno], eax
    mov rax, -1 
    ret