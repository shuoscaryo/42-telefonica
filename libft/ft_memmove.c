/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:35:02 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 15:00:05 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	int				src_len;
	char			*out;
	const char		*in;

	out = dst;
	in = src;
	i = 0;
	while (i < len)
	{
		if (out >= in && out <= in + src_len)
			break ;
		*out++ = *in++;
		i++;
	}
	return (dst);
}
