	section .text
	global _ft_strcpy
_ft_strcpy:
	mov rcx, 0
	mov rdx, 0
    jmp loop
loop:  
	mov dl, byte [rsi + rcx]
	cmp dl, 0
	je end
	mov byte [rdi + rcx], dl
	inc rcx
	jmp loop
end:
	mov byte [rdi + rcx], 0
	mov rax, rdi
	ret