/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:25:51 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/01 11:32:52 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorting.h"

void	selection_sort(int tab[], int size)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < size)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		ft_swap(tab + i, tab + min);
		i++;
	}
}

/*void	selection_sort(int tab[], int size)
{
	int	i;
	int	j;
	int	max;

	i = 0;
	while (i < size)
	{
		j = 0;
		max = 0;
		while (j < size - i)
		{
			if (tab[j] > tab[max])
				max = j;
			j++;
		}
		ft_swap(tab + j - 1, tab + max);
		i++;
	}
}
*/