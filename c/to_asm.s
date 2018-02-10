	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	$8, %eax
	movl	%eax, %ecx
	leaq	L_.str(%rip), %rdx
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movl	L_main.p3(%rip), %eax
	movl	%eax, -39(%rbp)
	movw	L_main.p3+4(%rip), %r8w
	movw	%r8w, -35(%rbp)
	movb	L_main.p3+6(%rip), %r9b
	movb	%r9b, -33(%rbp)
	movq	%rcx, %rdi
	callq	_malloc
	xorl	%r10d, %r10d
	movq	%rax, -48(%rbp)
	movl	%r10d, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"dddddd"

L_main.p3:                              ## @main.p3
	.asciz	"dddddd"


.subsections_via_symbols
