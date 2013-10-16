	.file	"jitarg.c"
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	movb	$91, 35(%esp)
	movb	$88, 36(%esp)
	movb	$1, 37(%esp)
	movb	$-40, 38(%esp)
	movb	$-61, 39(%esp)
	movl	$0, 20(%esp)
	movl	$-1, 16(%esp)
	movl	$34, 12(%esp)
	movl	$6, 8(%esp)
	movl	$5, 4(%esp)
	movl	$0, (%esp)
	call	mmap
	movl	%eax, 44(%esp)
	movl	44(%esp), %eax
	movl	35(%esp), %edx
	movl	%edx, (%eax)
	movzbl	39(%esp), %edx
	movb	%dl, 4(%eax)
	movl	44(%esp), %eax
	movl	%eax, 40(%esp)
	movl	$4, 4(%esp)
	movl	$5, (%esp)
	movl	40(%esp), %eax
	call	*%eax
	movl	%eax, 4(%esp)
	movl	$.LC0, (%esp)
	call	printf
	movl	$5, 4(%esp)
	movl	44(%esp), %eax
	movl	%eax, (%esp)
	call	munmap
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.1 20130725 (prerelease)"
	.section	.note.GNU-stack,"",@progbits
