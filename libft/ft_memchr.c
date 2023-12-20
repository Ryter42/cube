/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:08:29 by avallet           #+#    #+#             */
/*   Updated: 2023/12/20 15:38:00 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptrs;

	i = 0;
	ptrs = ((unsigned char *)s);
	while (i < n)
	{
		if (ptrs[i] == (unsigned char)c)
			return (ptrs + i);
		else
			i++;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 4)
// 	{
// 		char 	*p1;
// 		char 	*p2;

// 		p1 = memchr(argv[1], (int)*argv[2], atoi(argv[3]));
// 		printf("true: %s\n", p1);
// 		p2 = ft_memchr(argv[1], (int)*argv[2], atoi(argv[3]));
// 		printf("mine: %s\n", p2);
// 	}
// }
