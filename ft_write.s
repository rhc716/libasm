    section .text
	extern ___error
	global _ft_write
_ft_write:
    mov rax, 0x02000004
    syscall
	jc _err
    ret
_err:  
	push rax
	call ___error
	pop rdx
    mov [rax], rdx
    mov rax, -1 
    ret