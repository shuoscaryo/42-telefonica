/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:09:40 by orudek            #+#    #+#             */
/*   Updated: 2023/03/07 16:25:26 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	const char	*str;

	str = s;
	while (*str && *str != c && n > 0)
	{
		n--;
		str++;
	}
	if ((*str || !c) && n)
		return ((void *)str);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int c, char **v)
{
	if ( c == 4)
	{
		printf("mio>>%s\n",ft_memchr(v[1],v[2][0],atoi(v[3])));
		printf("oficial>>%s\n",memchr(v[1],v[2][0],atoi(v[3])));
	}
	return (1);
}*/
