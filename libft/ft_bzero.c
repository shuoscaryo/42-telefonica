/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:10:29 by orudek            #+#    #+#             */
/*   Updated: 2023/03/12 23:10:29 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((char *)s)[i++] = 0;
}
/*
int main()
{
	char vector[10];
	for (int i = 0 ; i < 10; i++){
		vector[i] = i;
		printf("%d", vector[i]);}
	printf("\n");
	ft_bzero(vector, 10);
	for(int i = 0; i < 10; i ++)
		printf("%d", vector[i]);
}*/