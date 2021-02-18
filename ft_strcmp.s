    section .text
	global _ft_strcmp
_ft_strcmp:
    mov rax, 0
    jmp cmp
cmp:  
    cmp byte [rdi + rax], byte [rsi + rax]
    je je
	jne jne
je:
	cmp byte [rdi + rax], 0
	je end
	inc rax
	jmp cmp
jne:
	mov rax, byte [rdi + rax] - byte [rsi + rax]
	ret
end:
	mov rax, 0
	ret