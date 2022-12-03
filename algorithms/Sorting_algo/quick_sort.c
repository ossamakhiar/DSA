/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:16:16 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/03 13:49:11 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

int	partition(int *tab, int start, int end)
{
	int	piv;
	int	i;
	int	j;

    piv = tab[start];
	i = start + 1;
	j = i;
	while (j <= end)
	{
		if (tab[j] < piv)
		{
			if (i != j)
				ft_swap(&tab[i], &tab[j]);
			i++;
		}
		j++;
	}
	if (start != end)
		ft_swap(&tab[start], &tab[i - 1]);
	return (i - 1);
}

void	quick_sort(int *tab, int start, int end)
{
	int	piv_pos;

	if (start < end)
	{
		piv_pos = partition(tab, start, end);
		quick_sort(tab, start, piv_pos - 1);
		quick_sort(tab, piv_pos + 1, end);
	}
}
