/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:53:05 by bshintak          #+#    #+#             */
/*   Updated: 2023/02/09 00:40:18 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	to_upper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main(int argc, char **argv)
{
	int	i = 0;
	int	j = -1;

	if (argc > 1)
	{
		while(++i < argc)
		{
			j = -1;
			while(argv[i][++j])
				std::cout << (char) to_upper(argv[i][j]);;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	
	return (0);
}