/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:32:21 by limashin          #+#    #+#             */
/*   Updated: 2020/07/12 15:59:29 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';
	while (c > 'a')
	
		ft_putchar(c);
		c--;
}


