/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:36:35 by okhiar            #+#    #+#             */
/*   Updated: 2022/11/30 20:39:10 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void reverse_list(t_list **head)
{
	t_list *curr;
	t_list *nxt;
	t_list *prev;

	curr = *head;
	nxt = NULL;
	prev = NULL;
	while (curr)
	{
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
	}
	*head = prev;
}

void reverse_rec(t_list **head, t_list *list)
{
	if (list->next == 0)
	{
		*head = list;
		return ;
	}
	reverse_rec(head, list->next);
	list->next-> next = list;
	list->next = 0;
}