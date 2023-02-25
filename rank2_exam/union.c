/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   union.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 11:42:17 by yitoh         #+#    #+#                 */
/*   Updated: 2023/02/24 12:15:01 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_strlen(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	char    s[ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1];
	int		i;
	int 	j;

	i = 0;
	if (argc != 3)
		return (0);
	printf("%d\n", ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1);
	while (argv[1][i])
	{
		s[i] = argv[1][i];
		++i;
	}
	printf("test1\n");
	j = 0;
	while (argv[2][j])
	{
		s[i + j] = argv[2][j];
		++j;
	}
	printf("test2\n");
	s[i + j] = '\0';
	i = 0;
	while (s[i])
	{
		j = i - 1;
		while (j >= 0)
		{
			if (s[i] != s[j])
				write(1, &(s[i]), 1);
			--j;
		}
		++i;
	}
	write(1, "\n", 1);
}
