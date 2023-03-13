/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:29:12 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 14:17:23 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t number, size_t size)
{
	void	*out;
	int		i;

	i = 0;
	out = malloc (number * size);
	if (!out)
		return (NULL);
	while (i < number * size)
		((char *)out)[i++] = 0;
	return (out);
}
/*
int	main()
{
	char *hola = calloc(5, 4);
	for ( int i = 0; i < 20, i ++)
		printf("%d", hola[i]);
}*/