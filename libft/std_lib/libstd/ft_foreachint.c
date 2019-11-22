/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehugh-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 14:20:12 by ehugh-be          #+#    #+#             */
/*   Updated: 2018/11/28 14:28:01 by ehugh-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_foreachint(int **arr, size_t len, void (*f)(int *n))
{
	size_t	i;

	if (!arr || !*arr)
		return ;
	i = 0;
	while (i < len)
	{
		f((*arr + i++));
	}
}