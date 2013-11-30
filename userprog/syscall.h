#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

#include "threads/synch.h"

#define USER_VADDR_BOTTOM ((void *)0x08048000)
#define STACK_HEURISTIC 32


struct lock filesys_lock;

void syscall_init (void);

#endif /* userprog/syscall.h */
