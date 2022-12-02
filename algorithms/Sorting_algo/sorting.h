/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhiar <okhiar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:23:22 by okhiar            #+#    #+#             */
/*   Updated: 2022/12/02 13:55:04 by okhiar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include <stdio.h>

void	ft_swap(int *a, int *b);
void	selection_sort(int tab[], int size);
void	insertion_sort(int tab[], int size);
void	bubble_sort(int tab[], int size);
void	quick_sort(int *tab, int start, int end);

#endif