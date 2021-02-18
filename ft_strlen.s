    section .text
	global _ft_strlen
_ft_strlen:
    mov rax, 0
    jmp get_len
get_len:  
    cmp byte [rdi + rax], 0
    je end
	inc rax
    jmp get_len
end:
	ret