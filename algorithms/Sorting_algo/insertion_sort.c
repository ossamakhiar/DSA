/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:53:53 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/01 13:36:55 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	insertion_sort(int tab[], int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		tmp = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > tmp)
		{
			tab[j + 1] = tab[j];
			j--;
		}
		tab[j + 1] = tmp;
		i++;
	}
}
