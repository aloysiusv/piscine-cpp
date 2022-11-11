/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:02:54 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/11 13:37:51 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

uintptr_t serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}

int	main() {

	Data		data;
	uintptr_t	raw;
	Data		*dataPtr;

	data.c = 'x';
	raw = serialize(&data);
	dataPtr = deserialize(raw);
	std::cout << "data.c = " << data.c << std::endl
			  << "adress data: " << &data << std::endl
			  << "serialized: " << raw << std::endl
			  << "deserialized: " << dataPtr << std::endl;
}
