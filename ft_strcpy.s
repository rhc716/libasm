	section .text
	global _ft_strcpy
_ft_strcpy:
	mov rcx, 0
    jmp cpy
cpy:  
	cmp byte [rsi + rcx], 0
	jne jne
	je end
jne: 
	movzx byte [rdi + rcx], byte [rsi + rcx]
	inc rcx
	jmp cpy
end:
	mov byte [rdi + rcx], 0
	mov rax, rdi
	ret