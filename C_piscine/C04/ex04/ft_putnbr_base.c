/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:15:53 by orudek            #+#    #+#             */
/*   Updated: 2023/02/20 12:22:49 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

int	ft_base_ok(char *str)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	if (size <= 1)
		return (0);
	while (*str)
	{
		if (*str == '-' || *str == '+' || *str < ' ' || *str > '~')
			return (0);
		i = 1;
		while (str[i])
		{
			if (str[i] == *str)
				return (0);
			i++;
		}
		str++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (!ft_base_ok(base))
		return ;
	len = ft_strlen(base);
	if (nbr < 0)
		write(1, "-", 1);
	if (nbr >= len)
		ft_putnbr_base(nbr / len, base);
	if (nbr <= -len)
		ft_putnbr_base(-(nbr / len), base);
	nbr %= len;
	if (nbr < 0)
		nbr *= -1;
	write(1, &base[nbr], 1);
}

#include <stdio.h>

int main(int argc , char **v)
{
	if( argc == 2)
		ft_putnbr_base(100,v[1]);
	write(1, "\n", 1);
	return (0);
}
