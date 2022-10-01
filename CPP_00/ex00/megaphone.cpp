/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:54:11 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/01 00:21:35 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	ft_shoutback(int ac, char *av[])
{
	size_t j;

	for (size_t i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			std::cout << (char)std::toupper(av[i][j++]);
	}
}

int	main(int ac, char *av[])
{
	if (ac >= 2)
		ft_shoutback(ac, av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
