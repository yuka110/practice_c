#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 4096

int	match(char open, char close)
{
	if ((open == '(' && close == ')')
		|| (open == '[' && close == ']')
		|| (open == '{' && close == '}'))
		return (0);
	else
		return (1);
}


int	check_bracket(char *s)
{
	int	i;
	char stack[BUF_SIZE];
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			stack[cnt] = s[i];
			cnt++;
		}
		else if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			if (!match(stack[cnt - 1], s[i]))
				cnt--;
			else
				return (1);
		}
		i++;
	}
	return (cnt);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		if (check_bracket(av[i]))
			write(1, "ERROR\n", 6);
		else
			write(1, "OK\n", 3);
		i++;
	}
	return (0);
}
