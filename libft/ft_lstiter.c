/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:31:15 by avallet           #+#    #+#             */
/*   Updated: 2023/12/20 15:38:00 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	a = ft_lstnew("salut");
// 	b = ft_lstnew("ca va");
// 	c = ft_lstnew("bien");
// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&b, c);
// 	ft_lstiter(a, ft_itoa(ft_toupper(ft_atoi(a->next->content))));
// 	while (a)
// 		printf("%s\n", ((char *)a->next->content));
// 	return (0);
// }
