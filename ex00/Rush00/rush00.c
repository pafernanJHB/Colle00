/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:10:49 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/15 10:58:36 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"ft_putchar.c"

int		rush(int a, int b)
{	
	char c, d, e, f;
	c = 'o';
	d = '-';
	e = '|';
	f = ' ';
	int t;
	t = 1;
	int t2;
	t2 = 1;
	
	while (a > 0)
	{
		if (a == 1 || t > 0 )
		{
			ft_putchar(c);
			a--;
			t--;
		}
		else if (a > 1  || a < a - t2 )
		{
			ft_putchar(d);
			a--;
			t2--;
		}
	}
	while (b > 1 )
	{
		if (b == 1)
		{
			ft_putchar('\n');
			ft_putchar(e);
			b--;
		}
	}

	return	(0);
}
