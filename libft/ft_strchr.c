/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:38:08 by orudek            #+#    #+#             */
/*   Updated: 2023/03/07 15:55:45 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;
	if (*s || !c)
		return ((char *)s);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c, char **v)
{
	if ( c == 3)
	{
		printf("mio>>%s\n",ft_strchr(v[1],v[2][0]));
		printf("oficial>>%s\n",strchr(v[1],v[2][0]));
	}
	return (1);	
}*/
