/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 20:32:23 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/02 20:44:57 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list{
	int				data;
	struct s_list	*next;
} t_list;

t_list *sort_insert(t_list *sorted, t_list *curr)
{
	t_list	*tmp;

	if (!sorted || sorted->data >= curr->data)
	{
		curr->next = sorted;
		sorted = curr;
	}
	else
	{
		tmp = sorted;
		while (tmp->next && tmp->next->data < curr->data)
			tmp = tmp->next;
		curr->next = tmp->next;
		tmp->next = curr;
	}
	return (sorted);
}

void	insertion_sort(t_list **head)
{
	t_list	*sorted;
	t_list	*curr;
	t_list	*nxt;

	curr = *head;
	sorted = 0;
	while (curr)
	{
		nxt = curr->next;
		sorted = sort_insert(sorted, curr);
        curr = nxt;
	}
	*head = sorted;
}
