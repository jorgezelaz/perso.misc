/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newtime.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:13:25 by jorgegon          #+#    #+#             */
/*   Updated: 2024/02/15 13:58:40 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_printhour(int *time)
{
	if (*time == 1640)
	{
		printf("PEC - Punteros - Piz Cluster 2 - %d\n", *time);
	}
	else
	{
		printf("[!] reschedule: PEC - Punteros - Piz Cluster 2 - %d\n", *time);
	}
}

int	main(void)
{
	int	time;

	time = 1700;
	ft_printhour(&time);
	return (0);
}
