/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:25:47 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 16:00:55 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*out;
	int		i;
	int		aux;
	int		is_negative;

	is_negative = (n < 0);
	aux = n;
	i = 1;
	while (aux < -9 || aux > 9)
	{
		i++;
		aux /= 10;
	}
	out = malloc (i + is_negative + 1);
	out[0] = '-';
	out[i + is_negative] = '\0';
	while (i > 0)
	{
		out[i-- - 1 + is_negative] = n % 10 * ((n > 0) - (n < 0)) + '0';
		n /= 10;
	}
	return (out);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(1));
}
*/