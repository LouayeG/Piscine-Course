/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgafaiti <lgafaiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:12:25 by lgafaiti          #+#    #+#             */
/*   Updated: 2023/08/19 13:50:49 by lgafaiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write (1, &i, 1);
				write (1, &j, 1);
				write (1, &k, 1);
				if (i != '7')
					write (1, ", ", 2);
			k++;
			}
		j++;
		}
	i++;
	}
}
