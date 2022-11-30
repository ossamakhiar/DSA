/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:44:33 by okhiar            #+#    #+#             */
/*   Updated: 2022/11/30 20:46:12 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

t_list *sort_list(t_list* lst, int (*cmp)(void *, void *))
{
  int tmp;
  t_list *begin;
  t_list *nxt;

  begin = lst;
  while (lst)
    {
      nxt = lst->next;
      while (nxt)
        {
          if (cmp(lst->content, nxt->content) == 0)
          {
            tmp = lst->content;
            lst->content = nxt->content;
            nxt->content = tmp;
          }
          nxt = nxt->next;
        }
      lst = lst->next;
    }
  return (begin);
}

int ascending(void *a, void *b)
{
	int	x;
	int	y;

	x = *((int *)a);
	y = *((int *)b);
	return (x <= y);
}