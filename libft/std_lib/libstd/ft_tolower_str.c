/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehugh-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:55:20 by ehugh-be          #+#    #+#             */
/*   Updated: 2019/01/12 18:19:22 by ehugh-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_tolower_str(char *str)
{
	char *ret;

	if (!str)
		return (0);
	ret = str;
	while (*str)
	{
		*str = (char)ft_tolower(*str);
		str++;
	}
	return (ret);
}
