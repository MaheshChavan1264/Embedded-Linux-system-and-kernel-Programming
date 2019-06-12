	.file	"test_float.c"
	.globl	pi
	.data
	.align 4
	.type	pi, @object
	.size	pi, 4
pi:
	.long	1078523331
	.comm	f,4,4
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	pi(%rip), %xmm0
	movss	%xmm0, f(%rip)
	movss	.LC0(%rip), %xmm0
	movss	%xmm0, pi(%rip)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1086911939
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.1) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
