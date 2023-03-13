/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:55:08 by orudek            #+#    #+#             */
/*   Updated: 2023/03/07 13:55:54 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int letter)
{
	if (letter >= '0' && letter <= '9')
		return (1);
	return (0);
}