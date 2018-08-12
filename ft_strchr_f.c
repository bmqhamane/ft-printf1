/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmqhama <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:01:55 by bmqhama           #+#    #+#             */
/*   Updated: 2018/08/12 11:33:03 by bmqhama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char			ft_strchr_f(char *s, int c)
{
	char		*tmp;

	tmp = s;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			return (1);
		tmp++;
	}
	if (*tmp == '\0' && c == '\0')
		return (0);
	return (0);
}