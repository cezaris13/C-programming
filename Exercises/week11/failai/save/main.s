	.file	"main.c"
	.text
	.globl	save
	.bss
	.align 4
	.type	save, @object
	.size	save, 4
save:
	.zero	4
	.globl	load
	.align 4
	.type	load, @object
	.size	load, 4
load:
	.zero	4
	.section	.rodata
.LC0:
	.string	"wb"
.LC1:
	.string	"%d "
	.text
	.globl	savetofile
	.type	savetofile, @function
savetofile:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, -36(%rbp)
	movl	save(%rip), %eax
	addl	$1, %eax
	movl	%eax, save(%rip)
	movq	-24(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -8(%rbp)
	movl	-36(%rbp), %edx
	movq	-8(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	movl	$0, -12(%rbp)
	jmp	.L2
.L3:
	movl	-12(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	-8(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	fprintf@PLT
	addl	$1, -12(%rbp)
.L2:
	movl	-12(%rbp), %eax
	cmpl	-36(%rbp), %eax
	jl	.L3
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	savetofile, .-savetofile
	.section	.rodata
.LC2:
	.string	"rb"
	.text
	.globl	loadfromfile
	.type	loadfromfile, @function
loadfromfile:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	load(%rip), %eax
	addl	$1, %eax
	movl	%eax, load(%rip)
	movq	-40(%rbp), %rax
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	fopen@PLT
	movq	%rax, -16(%rbp)
	leaq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	movl	$0, -20(%rbp)
	jmp	.L5
.L6:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-48(%rbp), %rax
	addq	%rax, %rdx
	movq	-16(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_fscanf@PLT
	addl	$1, -20(%rbp)
.L5:
	movl	-24(%rbp), %eax
	cmpl	%eax, -20(%rbp)
	jl	.L6
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	fclose@PLT
	nop
	movq	-8(%rbp), %rax
	subq	%fs:40, %rax
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	loadfromfile, .-loadfromfile
	.globl	createArray
	.type	createArray, @function
createArray:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	movl	%ecx, -36(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L9
.L10:
	call	rand@PLT
	movl	-36(%rbp), %edx
	subl	-32(%rbp), %edx
	leal	1(%rdx), %ecx
	cltd
	idivl	%ecx
	movl	-32(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, (%rdx)
	addl	$1, -8(%rbp)
.L9:
	movl	-8(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L10
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	createArray, .-createArray
	.globl	printArray
	.type	printArray, @function
printArray:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L12
.L13:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L12:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L13
	movl	$10, %edi
	call	putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	printArray, .-printArray
	.section	.rodata
.LC3:
	.string	"save.txt"
.LC4:
	.string	"save2.txt"
.LC5:
	.string	"ALL GOOD"
.LC6:
	.string	"SOMETHING'S WRONG\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB10:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$10, -28(%rbp)
	movl	$0, %edi
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	movl	-28(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movl	-28(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -16(%rbp)
	movl	-28(%rbp), %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movl	$20, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	createArray
	movl	-28(%rbp), %esi
	movq	-16(%rbp), %rax
	movl	$20, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	createArray
	movl	-28(%rbp), %esi
	movq	-8(%rbp), %rax
	movl	$20, %ecx
	movl	$0, %edx
	movq	%rax, %rdi
	call	createArray
	movl	-28(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movl	-28(%rbp), %edx
	movq	-16(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movl	-28(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	printArray
	movl	-28(%rbp), %edx
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	call	savetofile
	movl	-28(%rbp), %edx
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	call	savetofile
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	call	loadfromfile
	movl	-28(%rbp), %edx
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	call	savetofile
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	call	loadfromfile
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	call	loadfromfile
	movl	save(%rip), %eax
	cmpl	$3, %eax
	jne	.L15
	movl	load(%rip), %eax
	cmpl	$3, %eax
	jne	.L15
	leaq	.LC5(%rip), %rax
	jmp	.L16
.L15:
	leaq	.LC6(%rip), %rax
.L16:
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	main, .-main
	.ident	"GCC: (GNU) 10.2.0"
	.section	.note.GNU-stack,"",@progbits
