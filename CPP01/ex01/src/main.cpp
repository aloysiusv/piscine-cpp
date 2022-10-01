/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estoffel <estoffel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 09:44:19 by estoffel          #+#    #+#             */
/*   Updated: 2022/09/22 02:05:43 by estoffel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/Zombie.hpp"

int	main(void) {

	Zombie	*Grgr = NULL;

	Grgr = zombieHorde(5, "Babybel");
	if (Grgr)
		delete [] Grgr;
	return (0);
}