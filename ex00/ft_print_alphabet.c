/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:32:47 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/19 09:46:59 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
int main(void)
{
	ft_print_alphabet();
	return 0;
}


