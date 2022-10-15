/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:12:12 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/13 12:37:49 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*heapGirl;

	heapGirl = newZombie("Mrs.Heap");
	randomChump("Mr.Stack");
	delete heapGirl;
	return (EXIT_SUCCESS);
}