/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taboterm <taboterm@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:15:01 by taboterm          #+#    #+#             */
/*   Updated: 2023/06/21 14:23:22 by taboterm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int temp = *a; // first create temp var to store 
	*a = *b;
	*b = temp;
}

int	main()
{
	int	a = 90;
	int b = 8;
	
	ft_swap(&a, &b);
	printf("a = %i, b = %i\n", a, b);
	return 0;
}