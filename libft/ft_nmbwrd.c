/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmbwrd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 21:11:11 by ttran             #+#    #+#             */
/*   Updated: 2017/12/05 22:17:56 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nmbwrd(char *str, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			if (str[i + 1] == c || str[i + 1] == '\0')
				count++;
		i++;
	}
	return (count);
}