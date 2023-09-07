#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>

typedef struct s_stack {
  char *content;
  long index;
  struct s_stack *next;
  struct s_stack *previous;
}     t_stack;

t_stack ft_add_next(t_stack stack, char *content);

#endif

