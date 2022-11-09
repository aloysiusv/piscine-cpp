/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:43:51 by lrandria          #+#    #+#             */
/*   Updated: 2022/11/08 20:38:51 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <cstdio>
# include <cstring>
# include <cerrno>
# include <limits.h>
# include <float.h>
# include <math.h>

enum	eType {

	CHAR,
	INT,
	FLOAT,
	DOUBLE,
};

int		getType(const char *str);

void	convertFromChar(const char *str);
void	convertFromInt(const char *str);	
void	convertFromFloat(const char *str);
void	convertFromDouble(const char *str);
void	cannotDisplay();

#endif
