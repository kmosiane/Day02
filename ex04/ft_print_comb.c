/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:27:00 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/21 13:49:13 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar (char c)

void ft_print_comb(void)
{
	int a;
	int b;
	int c;
	for(a = '0'; a <= '9'; ++a)
	{
		for(b = '0'; b <= '9'; ++ b)
		{
			for(c = '0'; c <= '9'; ++c)
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				ft_putchar(',');
			}
		}
	}
}
int main()
{

