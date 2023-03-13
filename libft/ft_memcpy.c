/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:06:00 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 14:40:41 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	int				src_len;
	char			*out;
	const char		*in;

	out = dst;
	in = src;
	i = 0;
	while (i++ < len)
		*out++ = *in++;
	return (dst);
}
