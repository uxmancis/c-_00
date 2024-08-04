/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:32:48 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/04 16:42:27 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/friends_and_enemies.hpp"

//PhoneBook class constructor
PhoneBook::PhoneBook(void)
{
	this->indext_contact = 0;
    this->counter_contacts = 0;
}

//PhoneBook class destructor
PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::add_new_contact(PhoneBook *phonebook)
{
	//std::cout << phonebook->sum_of_contacts;
    phonebook->indext_contact = phonebook->counter_contacts % 8; //makes sure index_contact stays [0-7]
	printf(AQUAMARINE "Before: index_contacts = %d, counter_contacts = %d\n" RESET_COLOR, phonebook->indext_contact, phonebook->counter_contacts);
    phonebook->contacts[indext_contact] = get_contact_info();
    phonebook->counter_contacts++;
	//std::cout << phonebook->sum_of_contacts;
	printf(AQUAMARINE "After: index_contacts = %d, counter_contacts = %d\n" RESET_COLOR, phonebook->indext_contact, phonebook->counter_contacts);
}

// int	ft_atoi(const std::str& str)
// {
// 	int	i;
// 	int	sign;
// 	int	num;

// 	i = 0;
// 	sign = 1;
// 	num = 0;
// 	while (str[i] != '\0')
// 	{
// 		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
// 			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
// 			i++;
// 		if (str[i] == '+' || str[i] == '-')
// 		{
// 			if (str[i++] == '-')
// 				sign = -1;
// 		}
// 		while (str[i] >= '0' && str[i] <= '9')
// 		{	
// 			num = (num * 10) + (str[i] - 48);
// 			i++;
// 		}
// 		return (num * sign);
// 	}
// 	return (0);
// }


int isValidIntegerInRange(std::string input)
{
	// int number; 
	
	// std::cout << "Input: " << AQUAMARINE << input << RESET_COLOR << std::endl;
	// if (input.length() > 1)
	// 	return (-1);
	// number = std::atoi(input.c_str);
	// std::cout << number <<std::endl;
	// return (0);
	

	if (input == "1" || input == "2" || input == "3"
		|| input == "4" || input == "5" || input == "6"
		|| input == "7" || input == "8")
	{
		//std::cout << "yes it is valid\n";
		return (input[0] - 48);
	}
	//std::cout << "no it is not\n";
	return (-1);
}

void ft_put_first_name(PhoneBook phonebook, int number)
{
	int len_first_name;
	int i;
	
	len_first_name = phonebook.contacts[number - 1].first_name.length();
	//std::cout << "len_first_name = " << len_first_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_first_name <= 10)
	{
		std::cout << phonebook.contacts[number - 1].first_name;
		while (len_first_name < 10)
		{
			std::cout << " ";
			len_first_name++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << phonebook.contacts[number - 1].first_name[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_last_name(PhoneBook phonebook, int number)
{
	int len_last_name;
	int i;
	
	len_last_name = phonebook.contacts[number - 1].last_name.length();
	//std::cout << "len_last_name = " << len_last_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_last_name <= 10)
	{
		std::cout << phonebook.contacts[number - 1].last_name;
		while (len_last_name < 10)
		{
			std::cout << " ";
			len_last_name++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << phonebook.contacts[number - 1].last_name[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_nickname(PhoneBook phonebook, int number)
{
	int len_nickname;
	int i;
	
	len_nickname = phonebook.contacts[number - 1].nickname.length();
	//std::cout << "len_last_name = " << len_last_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_nickname <= 10)
	{
		std::cout << phonebook.contacts[number - 1].nickname;
		while (len_nickname < 10)
		{
			std::cout << " ";
			len_nickname++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << phonebook.contacts[number - 1].nickname[i];
			i++;
		}
		std::cout << ".";
	}
}

void PhoneBook::search_show_contacts(PhoneBook phonebook)
{
    std::string	input;
	int			number;
    
    std::cout << AQUAMARINE << phonebook.counter_contacts << RESET_COLOR " contacts are in phonebook" << std::endl;
    std::cout << "Choose contact number [1-8] to see details" << std::endl;
    std::getline(std::cin, input);
    if (isValidIntegerInRange(input) == -1)
	{
		std::cout << "Non valid number. Please enter [1-8] to see contact details" << std::endl;
		return;
	}
	number = isValidIntegerInRange(input);
	// std::cout << "|first_name|last_name |nickname  |" << std::endl;
	ft_put_first_name(phonebook, number);
	ft_put_last_name(phonebook, number);
	ft_put_nickname(phonebook, number);
	std::cout << "|" << std::endl;
	//contacs[number - 1]. << "|"

}
