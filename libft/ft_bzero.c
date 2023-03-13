/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 14:33:22 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 14:24:31 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, unsigned int len)
{
	int	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = 0;
	return (b);
}
