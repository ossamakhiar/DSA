/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:38:45 by okhiar            #+#    #+#             */
/*   Updated: 2022/11/30 20:39:19 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void ft_print_list(t_list *head)
{
	int bool = 1;
	int size = ft_lstsize(head), i = 0;

	while (i < size)
	{
		printf("\033[1;31m ____     \033[1m");
		i++;
	}
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("\e[1;35m/    \\    \e[1m");
		i++;
	}
	printf("\n");
	while (head)
	{
		printf("\e[1;32m| %d  |", *((int *)head->content));
		head = head->next;
		if (head)
			printf("--> ");
		else
			printf("-->\e[1;5;31m[NULL]\e[0m\n");
		bool = 0;
	}
	i = 0;
	while (i < size)
	{
		printf("\e[1;35m\\\e[1m\e[1;31m____\033[1m\e[1;35m/\033[1m    ");
		i++;
	}
	printf("\n");
}