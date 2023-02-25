/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   anagram.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 10:42:59 by yitoh         #+#    #+#                 */
/*   Updated: 2023/02/24 12:08:28 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c)
{
	if (c < 97 && c > 122)
		return (0);
	return (1);
}

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

// void f(void)
// {
// 	system("leaks a.out");
// }

// int	main(int argc, char **argv)
// {
// 	int	abc[27];
// 	int	i;
// 	int j;
// 	char	*good;

// 	//atexit(f);
// 	good = "anagram\n";
// 	i = 0;
// 	if (argc != 3 || ft_strlen(argv[1]) != ft_strlen(argv[2]))
// 		return (0);
// 	while (i < 26)
// 	{
// 		abc[i] = 0;
// 		++i;
// 	}
// 	abc[i] = '\0';
// 	i = 0;
// 	while (argv[1][i])
// 	{
// 		if (ft_isalpha(argv[1][i]) == 0)
// 			return (0);
// 		j = (argv[1][i] - 97);
// 		++abc[j];
// 		++i;
// 	}
// 	i = 0;
// 	while (argv[2][i])
// 	{
// 		if (ft_isalpha(argv[2][i]) == 0)
// 			return (0);
// 		j = (argv[2][i] - 97);
// 		--abc[j];
// 		++i;
// 	}
// 	i = 0;
// 	while (i < 26)
// 	{	
// 		if (abc[i] != 0)
// 			return (write(1, "ERROR\n", 6), 0);
// 		++i;
// 	}
// 	write(1, good, 8);
// 	return (0);
// }
