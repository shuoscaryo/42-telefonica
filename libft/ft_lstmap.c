/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orudek <orudek@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:27:52 by orudek            #+#    #+#             */
/*   Updated: 2023/03/13 14:54:41 by orudek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *last;
    t_list  *start;
    int first;

    first  = 1;
    while(lst->next)
    {
        new = createtlist();
        if(first == 1)
        {
            start = new;
            first = 0;
            last = new;
        }
        if (sehacreadomal())
            algo();
        if(first == 0)
        {
            last->next = new;
            last = new;
        }
    }
}
