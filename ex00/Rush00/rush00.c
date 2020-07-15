/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:10:49 by pafernan          #+#    #+#             */
/*   Updated: 2020/07/15 10:28:52 by pafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"ft_putchar.c"

int		rush(int a)
{	
	char c, d, e, f;
	c = 'o';
	d = '-';
	e = '|';
	f = ' ';
	
	while (a > 0)
	{
		if (a == 1)
		{
			ft_putchar(c);
		}
		else if (a > 1  && a < a - 1 )
		{
			ft_putchar(d);
		}
		a--;
	}
	//while (b >= 0 )
	//{
	//	if (b > 1)
	//	{
	//		ft_putchar(c)
	//	}
	//}

	return	(0);
}
