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
		stack = stack->next;
	stack->next = node;
	node->previous = stack;
	node->index = -1;
}			

void ft_stack_init(t_stack *stack, int content)
{
	stack->content = content;
	stack->next = NULL;
	stack->previous = NULL;
	stack->index = -1;
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

void ft_print_list(t_stack *stack)
{
	while(stack)
	{
		printf("Value: %i\nIndex: %i\n\n", stack->content, stack->index);
		stack = stack->next;
	}
	printf("\n\n");
}

void ft_free_stack(t_stack *stack)
{
	t_stack *temp;

	while(stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}