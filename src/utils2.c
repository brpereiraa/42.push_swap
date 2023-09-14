#include "../includes/push_swap.h"

t_stack ft_node_new(int content)
{
	t_stack node;

	node.content = content;
	return node;
}

void ft_add_last(t_stack *stack, t_stack *node)
{
	while(stack->next)
		stack = stack->next;
	stack->next = node;
	node->previous = stack;
}

void ft_add_next(t_stack *stack, int content)
{
	t_stack *node;
	node = (t_stack *)malloc(sizeof(t_stack));
	if(!node)
		return ;
	node->content = content;
	node->next = NULL;
	while(stack->next)
	{
		stack = stack->next;
	}
	stack->next = node;
	node->previous = stack;
}			

void ft_stack_init(t_stack *stack, int content)
{
	stack->content = content;
	stack->next = NULL;
	stack->previous = NULL;
}
