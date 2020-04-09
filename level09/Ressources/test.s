section .data
hello:
  .str db "Hello world !", 10
  .len equ $ - hello.str

section .text
  global start
  global _main
  extern _printf

start:
  call _main
  ret

_main:
  push ebp
  push ebp, esp
  lea rdi, [rel hello.str]
  call _printf
  leave
  ret

