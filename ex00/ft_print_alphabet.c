/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:24:51 by limashin          #+#    #+#             */
/*   Updated: 2020/07/12 16:01:44 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c);

void ft_print_alphabet(void)
{
	int c;
	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}
