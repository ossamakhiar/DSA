/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kadane_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:52:42 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/03 15:59:35 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int x, int y)
{
	return (x > y ? x : y);
}

int	max_subarray_sum(int *tab, int size)
{
	int	i;
	int	sum;
	int	max;

	i = 1;
	sum = tab[0];
	max = tab[0];
    while (i < size)
    {
		sum = ft_max(sum + tab[i], tab[i]);
		max = ft_max(max, sum);
        i++;
	}
	return (max);
}