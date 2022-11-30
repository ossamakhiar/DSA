/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:32:37 by okhiar            #+#    #+#             */
/*   Updated: 2022/11/30 20:46:29 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

#include <stdlib.h>

typedef struct s_list{
	void *content;
	struct s_list *next;
} t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_print_list(t_list *head);
void	reverse_list(t_list **head);
void	reverse_rec(t_list **head, t_list *list);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list *sort_list(t_list* lst, int (*cmp)(void *, void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);

#endif