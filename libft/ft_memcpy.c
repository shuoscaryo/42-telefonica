/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:06:00 by orudek            #+#    #+#             */
/*   Updated: 2023/03/07 15:09:17 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		out++ = in++;
	return (dst);
}
