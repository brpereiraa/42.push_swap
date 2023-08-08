#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack {
  char *content;
  long index;
  struct s_stack *next;
}     t_stack;

t_stack ft_add_next(t_stack stack, char *content);

#endif

