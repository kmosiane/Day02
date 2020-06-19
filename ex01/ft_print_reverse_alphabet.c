/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmosiane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 10:54:48 by kmosiane          #+#    #+#             */
/*   Updated: 2020/06/19 15:43:05 by kmosiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar (char c)
{
	write (1, &c, 2);
}
void ft_print_reverse_alphabet(void){

	char letter;
	letter = 'z';
	while(letter >= 'a'){
	
		ft_putchar(letter);
		letter--;
	}
	}
	int main(void)
	{
		ft_print_reverse_alphabet();
		return 0;
	}

