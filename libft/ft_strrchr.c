/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:50:54 by avallet           #+#    #+#             */
/*   Updated: 2023/12/20 15:38:00 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	*ptrs;

	ptrs = ((char *)s);
	i = ft_strlen(ptrs);
	while (i >= 0)
	{
		if (ptrs[i] == ((char)c))
			return (ptrs + i);
		i--;
	}
	return (NULL);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		char	*p1;
// 		char	*p2;

// 		p1 = strrchr(argv[1], (int)*argv[2]);
// 		p2 = ft_strrchr(argv[1], (int)*argv[2]);
// 		printf("true: %s\n", p1);
// 		printf("mine: %s\n", p2);
// 	}
// 	return (0);
// }