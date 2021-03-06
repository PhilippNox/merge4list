/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehugh-be <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 22:40:21 by ehugh-be          #+#    #+#             */
/*   Updated: 2019/04/01 16:21:42 by ehugh-be         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define CLR_CNTRL '{'
# define CLR 1

int				ft_printf(const char *frmt, ...);
int				ft_sprintf(char **buf, const char *frmt, ...);
t_string		*ft_vprintf(const char *frmt, va_list vl);
int				ft_fdprintf(int fd, const char *frmt, ...);

#endif
