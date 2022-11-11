/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:51:53 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/11 14:04:13 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

bool	isDouble(const char *str) {

	double	d;
	char	*endPtr;

	d = strtod(str, &endPtr);
	if ((d == 0.0 && strcmp(str, "0.0")) || (strcmp(endPtr, "\0") && strcmp(endPtr, "f"))
										 || errno == ERANGE)
		return (false);
	return (true);
}

bool	isFloat(const char *str) {

	float	f;
	char	*endPtr;

	f = strtof(str, &endPtr);
	if (!strcmp(str, "nanf") || !strcmp(str, "+inff") || !strcmp(str, "-inff"))
		return (true);
	if ((f == 0.0 && !strcmp(endPtr, str)) || (strcmp(endPtr, "\0") && strcmp(endPtr, "f"))
										   || f < -FLT_MAX || f > FLT_MAX || errno == ERANGE)
		return (false);
	return (true);
}

bool	isInt(const char *str) {

	long	i;
	char	*endPtr;

	i = strtol(str, &endPtr, 0);
	if ((i == 0L && strcmp(str, "0")) || (strcmp(endPtr, "\0") && strcmp(endPtr, "f"))
									  || i < INT_MIN || i > INT_MAX || errno == ERANGE)
		return (false);
	return (true);
}

int	getType(const char *str) {

	if (str[1] == '\0' && !isdigit(str[0]))
		return (CHAR);
	else if (isInt(str) == true)
		return (INT);
	else if (isFloat(str) == true)
		return (FLOAT);
	else if (isDouble(str) == true)
		return (DOUBLE);
	else
		return (-1);
}
