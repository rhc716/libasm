    section .text
	global _ft_strcmp
_ft_strcmp:
	mov rax, 0
	mov rbx, 0
    mov rcx, 0
    jmp cmp
cmp:  
    movzx rax, byte [rdi + rcx]
	movzx rbx, byte [rsi + rcx]
	cmp rax, rbx
    je je
	jne jne
je:
	cmp rax, 0
	je end
	inc rcx
	jmp cmp
jne:
	sub rax, rbx
	ret
end:
	mov rax, 0
	ret