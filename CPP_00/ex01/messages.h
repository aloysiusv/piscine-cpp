/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   messages.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrandria <lrandria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 05:56:10 by lrandria          #+#    #+#             */
/*   Updated: 2022/10/04 06:18:45 by lrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MESSAGES_H
# define MESSAGES_H

# include <iostream>
# include <iomanip>
# include <cctype>
# include "colours.h"

# define ENTER_FIRSTNAME	"Enter a valid first name: "
# define ENTER_LASTNAME		"Enter a valid last name: "
# define ENTER_NICKNAME		"Enter a valid nickname: "
# define ENTER_NUM			"Enter a valid number: "
# define ENTER_SECRET		"Enter a valid dark secret: "
# define ENTER_IDX			"Enter a valid index: "

void	greetings();
void    watchingYou();
void    funBook(std::string msg);

#endif