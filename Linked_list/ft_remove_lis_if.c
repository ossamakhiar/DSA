/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_lis_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:29:03 by okhiar            #+#    #+#             */
/*   Updated: 2022/11/30 20:34:16 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
  t_list *curr;
  t_list *tmp;
  while (*begin_list && cmp((*begin_list)->content, data_ref) == 0)
    {
      curr = *begin_list;
      *begin_list = (*begin_list)->next;
      free(curr);
    }
  curr = *begin_list;
  while (curr && curr->next)
    {
      if (cmp(curr->next->content, data_ref) == 0)
      {
        tmp = curr->next;
        curr->next = curr->next->next;
        free(tmp);
      }
      else
        curr = curr->next;
    }
}
