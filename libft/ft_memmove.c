/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:35:02 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 16:15:48 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	int			src_len;
	char		*out;
	const char	*in;

	out = dst;
	in = src;
	i = 0;
	src_len = ft_strlen((char *)in);
	if (dst > src)
	{
		out += src_len;
		in += src_len;
	}
	while (i < len)
	{
		if (dst <= src)
			*out++ = *in++;
		else
			*out-- = *in--;
		i++;
	}
	return (dst);
}