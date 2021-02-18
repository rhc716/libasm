    section .text
	global _ft_strcmp
_ft_strcmp:
    mov rax, 0
    jmp cmp
cmp:  
    mov rcx, byte [rdi + rax]
	mov rdx, byte [rsi + rax]
	cmp rcx, rdx
    je je
	jne jne
je:
	cmp rcx, 0
	je end
	inc rax
	jmp cmp
jne:
	sub rcx, rdx
	mov rax, rcx
	ret
end:
	mov rax, 0
	ret