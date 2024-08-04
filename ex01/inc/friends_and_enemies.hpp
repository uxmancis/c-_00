/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   friends_and_enemies.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:21:08 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/04 16:34:07 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRIENDS_AND_ENEMIES_HPP
# define FRIENDS_AND_ENEMIES_HPP

/*C++ Standard Library is recommended in subject:
* https://en.cppreference.com/w/cpp/header*/
#include <iostream> //std::cin, std::cout, 
#include <string> //std::string, std::getline
#include <stdio.h> //printf
#include <unistd.h> //usleep
#include "Contact.hpp"
#include "PhoneBook.hpp"

#define DEF_COLOR "\033[0;39m"
#define GRAY "\033[0;90m"
#define RED "\033[0;31m"
#define GREEN "\033[0;92m"
#define YELLOW "\033[0;93m"
#define BLUE "\033[0;94m"
#define MAGENTA "\033[0;95m"
#define CYAN "\033[0;96m"
#define WHITE "\033[0;97m"
#define RESET_COLOR "\033[0m"
#define AQUAMARINE "\033[0;96m"
#define CLEAR_SCREEN "\033[2J"

Contact get_contact_info(void);
int isValidIntegerInRange(std::string input);

#endif 