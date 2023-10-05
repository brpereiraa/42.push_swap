#include "../includes/push_swap.h"

t_stack ft_node_new(int content)
{
	t_stack node;

	node.content = content;
	return node;
}

void ft_add_last(t_stack *stack, t_stack *node)
{
	int	i;

	i = 0;
	while(stack->next)
	{
		stack = stack->next;
		i++;
	}
	stack->next = node;
	node->previous = stack;
	node->index = i;
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

int ft_min_value(t_stack **stack)
{
	t_stack	*temp;
	int		i;
	int		min_stack;

	i = 0;
	temp = *stack;
	min_stack = ft_min(*stack);
	while (temp->content != min_stack)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	ft_min(t_stack *stack)
{
	int	min;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}