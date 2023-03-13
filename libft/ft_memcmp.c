/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:42:51 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 14:28:12 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	const char		*in1;
	const char		*in2;

	in1 = s1;
	in2 = s2;
	i = 0;
	if (!n)
		return (0);
	while (in1[i] && in1[i] == in2[i] && i < n - 1)
		i++;
	return (in1[i] - in2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(int c, char **v)
{
	if (c)
	{}
	printf("%d\n",ft_memcmp(v[1],v[2],3));
//	printf("%d\n",memcmp(v[1],v[2],10));
}*/
