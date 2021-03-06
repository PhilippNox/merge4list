/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgorold <wgorold@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:24:31 by wgorold           #+#    #+#             */
/*   Updated: 2019/11/21 21:44:33 by wgorold          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "merge.h"

#define SZ 10

int			condition(void *left, void *right)
{
	if (*(int *)(left) <= *(int *)(right))
		return (1);
	else
		return (0);
}

int	main(void)
{
	t_list		*to_sort;
	t_list_node	*node;
	int 		idx;
	int tab[SZ] = {3, 4, 2, 1, 7, 5 , 8, 9, 0, 6};

	to_sort = ft_lstinit();
	node = NULL;
	idx = -1;
	while (++idx < SZ)
		ft_lstaddend(to_sort, ft_lstnew_noc(tab + idx, 0));
	ft_lstiter(to_sort, &show);
	printf("\n\n");
	nms(to_sort, &condition);
	ft_lstiter(to_sort, &show);
	printf("\n\n");
	node = to_sort->end;
	while(node)
	{
		printf("%d <- ", *(int *)(node->content));
		node = node->prev;
	}
	free_list_without_content(to_sort);
}
