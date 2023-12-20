/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:15:48 by avallet           #+#    #+#             */
/*   Updated: 2023/12/20 15:38:00 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	nbelements;

	nbelements = 0;
	while (lst)
	{
		lst = lst->next;
		nbelements++;
	}
	return (nbelements);
}

// int main(void)
// {
// 	t_list	*a;
// 	t_list	*b;

// 	a = ft_lstnew("salut");
// 	b = ft_lstnew("ca va");
// 	ft_lstadd_front(&a, b);
// 	printf("%d\n", ft_lstsize(b));
// 	return (0);
// }