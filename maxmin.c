/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxmin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfertah <alfertah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:04:40 by alfertah          #+#    #+#             */
/*   Updated: 2022/03/10 18:53:18 by alfertah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int max, min;
	int *numbers;
	int stop;
	int tmp;
	numbers = malloc(sizeof(int) * 10);
	int i = 0;
	while(i < 10)
	{
		printf("enter your numbers %d :\n", i);
		scanf("%d", &numbers[i]);
		i++;
	}
	stop = 1;
	tmp = 0;
	while (stop)
	{
		stop = 0;
		i = 0;
		while(i < 9)
		{
			if (numbers[i] > numbers[i+1])
			{
				tmp = numbers[i];
				numbers[i] = numbers [i+1];
				numbers[i+1] = tmp;
				stop = 1;
			}
			i++;
		}
	}
	min = numbers[0];
	max = numbers[9];
	printf("max = %d\nmin = %d", max, min);
	return 0;

}
