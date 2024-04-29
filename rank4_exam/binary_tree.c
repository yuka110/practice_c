#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_node
{
		int value;
		struct s_node *left;
		struct s_node *right;
}   t_node;


t_node	*init_tree(t_node *tree)
{
	t_node	*ptr;
	int i = 5;

	tree = malloc(1 * sizeof(t_node));
	if (!tree)
		exit(1);
	tree->value = 7;
	tree->right = NULL;
	tree->left = NULL;
	while (i > 0)
	{
		ptr = malloc(1 * sizeof(t_node));
		if (!ptr)
			exit(1);
		ptr->value = i;
		ptr->right = NULL;
		ptr->left = tree;
		tree = ptr;
		i--;
	}
	tree = malloc(1 * sizeof(t_node));
	if (!tree)
		exit(1);
	tree->value = 2;
	tree->left = malloc(1 * sizeof(t_node));
	if (!tree->left)
		exit(1);
	tree->left->value = 3;
	tree->left->right = NULL;
	tree->left->left = NULL;
	tree->left = NULL;
	ptr->right = tree;

	return (ptr);
}

void	print_tree(t_node *tree)
{
	printf("%d", tree->value);
	while (tree->left)
	{
		if (tree->right)
			printf("         %d", tree->right->value);
		tree = tree->left;
		printf("\n%d", tree->value);
	}

}

int        longest_sequence(struct s_node *node)
{
	int	right;
	int	left;

	if (!node)
		return (0);
	if (node->right && node->right->value == node->value + 1)
	{
		right = (1 + longest_sequence(node->right));
	}
	if (node->left && node->left->value == node->value + 1)
	{
		left = (1 + longest_sequence(node->left));
	}
	if (right > left)
		return (1 + longest_sequence(node->right));
	else
		return (1 + longest_sequence(node->left));

}


int	main(void)
{
	t_node	*tree;

	tree = init_tree(tree);
	print_tree(tree);
	printf("longest chain is %d\n", longest_sequence(tree));
	return (0);
}
