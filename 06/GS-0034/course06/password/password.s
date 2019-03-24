	.file	"password.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.def	___main;	.scl	2;	.type	32;	.endef
LC0:
	.ascii "r\0"
LC1:
	.ascii "password.in\0"
LC2:
	.ascii "w\0"
LC3:
	.ascii "password.out\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1445:
	.cfi_startproc
	.cfi_personality 0,___gxx_personality_v0
	.cfi_lsda 0,LLSDA1445
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ebx
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	subl	$80, %esp
	call	___main
	movl	__imp___iob, %eax
	movl	%eax, 8(%esp)
	movl	$LC0, 4(%esp)
	movl	$LC1, (%esp)
	call	_freopen
	movl	__imp___iob, %eax
	addl	$32, %eax
	movl	%eax, 8(%esp)
	movl	$LC2, 4(%esp)
	movl	$LC3, (%esp)
	call	_freopen
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	leal	-48(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt3cin, (%esp)
LEHB0:
	call	__ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$0, -12(%ebp)
L7:
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
	movl	%eax, %edx
	movl	-12(%ebp), %eax
	cmpl	%eax, %edx
	seta	%al
	testb	%al, %al
	je	L2
	movl	-12(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movzbl	(%eax), %eax
	movb	%al, -21(%ebp)
	cmpb	$64, -21(%ebp)
	jle	L3
	cmpb	$67, -21(%ebp)
	jle	L4
L3:
	cmpb	$96, -21(%ebp)
	jle	L5
	cmpb	$99, -21(%ebp)
	jg	L5
L4:
	movl	-12(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movl	%eax, %ebx
	movl	-12(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movzbl	(%eax), %eax
	addl	$23, %eax
	movb	%al, (%ebx)
	jmp	L6
L5:
	movl	-12(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movl	%eax, %ebx
	movl	-12(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
LEHE0:
	subl	$4, %esp
	movzbl	(%eax), %eax
	subl	$3, %eax
	movb	%al, (%ebx)
L6:
	addl	$1, -12(%ebp)
	jmp	L7
L2:
	leal	-72(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
	subl	$1, %eax
	movl	%eax, -16(%ebp)
L9:
	cmpl	$0, -16(%ebp)
	js	L8
	movl	-16(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
LEHB1:
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movzbl	(%eax), %eax
	movsbl	%al, %edx
	leal	-72(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEc
	subl	$4, %esp
	subl	$1, -16(%ebp)
	jmp	L9
L8:
	leal	-48(%ebp), %eax
	leal	-72(%ebp), %edx
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
	subl	$4, %esp
	movl	$0, -20(%ebp)
L13:
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
	movl	%eax, %edx
	movl	-20(%ebp), %eax
	cmpl	%eax, %edx
	seta	%al
	testb	%al, %al
	je	L10
	movl	-20(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movzbl	(%eax), %eax
	movb	%al, -22(%ebp)
	cmpb	$96, -22(%ebp)
	jle	L11
	cmpb	$122, -22(%ebp)
	jg	L11
	movl	-20(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movl	%eax, %edx
	movzbl	-22(%ebp), %eax
	subl	$32, %eax
	movb	%al, (%edx)
L11:
	cmpb	$64, -22(%ebp)
	jle	L12
	cmpb	$90, -22(%ebp)
	jg	L12
	movl	-20(%ebp), %edx
	leal	-48(%ebp), %eax
	movl	%edx, (%esp)
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj
	subl	$4, %esp
	movl	%eax, %edx
	movzbl	-22(%ebp), %eax
	addl	$32, %eax
	movb	%al, (%edx)
L12:
	addl	$1, -20(%ebp)
	jmp	L13
L10:
	leal	-48(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
LEHE1:
	subl	$4, %esp
	movl	$0, %ebx
	leal	-72(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movl	%ebx, %eax
	jmp	L19
L18:
	movl	%eax, %ebx
	leal	-72(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	L16
L17:
	movl	%eax, %ebx
L16:
	leal	-48(%ebp), %eax
	movl	%eax, %ecx
	call	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movl	%ebx, %eax
	movl	%eax, (%esp)
LEHB2:
	call	__Unwind_Resume
LEHE2:
L19:
	leal	-8(%ebp), %esp
	popl	%ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1445:
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.section	.gcc_except_table,"w"
LLSDA1445:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 LLSDACSE1445-LLSDACSB1445
LLSDACSB1445:
	.uleb128 LEHB0-LFB1445
	.uleb128 LEHE0-LEHB0
	.uleb128 L17-LFB1445
	.uleb128 0
	.uleb128 LEHB1-LFB1445
	.uleb128 LEHE1-LEHB1
	.uleb128 L18-LFB1445
	.uleb128 0
	.uleb128 LEHB2-LFB1445
	.uleb128 LEHE2-LEHB2
	.uleb128 0
	.uleb128 0
LLSDACSE1445:
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1890:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1890:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1889:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L23
	cmpl	$65535, 12(%ebp)
	jne	L23
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L23:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1889:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1891:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1891:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_freopen;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	__ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEj;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEpLEc;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_;	.scl	2;	.type	32;	.endef
	.def	__ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	__ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	__Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
