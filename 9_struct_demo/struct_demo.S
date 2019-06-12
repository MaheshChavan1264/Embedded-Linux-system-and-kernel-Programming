	.file	"struct_demo.c"
	.globl	ina
	.data
	.align 8
	.type	ina, @object
	.size	ina, 12
ina:
	.long	10
	.byte	65
	.zero	3
	.long	1078523331
	.section	.rodata
.LC0:
	.string	"sizeof (int):%ld\n"
.LC1:
	.string	"sizeof (char):%ld\n"
.LC2:
	.string	"sizeof (float):%ld\n"
.LC3:
	.string	"sizeof (struct A):%ld\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$4, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$1, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$12, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.1) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
