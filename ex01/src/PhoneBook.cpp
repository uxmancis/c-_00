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
	// printf(AQUAMARINE "Before: index_contacts = %d, counter_contacts = %d\n" RESET_COLOR, phonebook->indext_contact, phonebook->counter_contacts);
    phonebook->contacts[indext_contact] = get_contact_info();
    phonebook->counter_contacts++;
	//std::cout << phonebook->sum_of_contacts;
	// printf(AQUAMARINE "After: index_contacts = %d, counter_contacts = %d\n" RESET_COLOR, phonebook->indext_contact, phonebook->counter_contacts);
}

int isValidIntegerInRange(std::string input)
{
	if (input == "1" || input == "2" || input == "3"
		|| input == "4" || input == "5" || input == "6"
		|| input == "7" || input == "8")
		return (input[0] - 48);
	return (-1);
}

void ft_put_first_name(PhoneBook phonebook, int index)
{
	int len_first_name;
	int i;
	
	len_first_name = phonebook.contacts[index].first_name.length();
	// std::cout << "len_first_name = " << len_first_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_first_name <= 10)
	{
		std::cout << phonebook.contacts[index].first_name;
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
			std::cout << phonebook.contacts[index].first_name[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_last_name(PhoneBook phonebook, int index)
{
	int len_last_name;
	int i;
	
	len_last_name = phonebook.contacts[index].last_name.length();
	//std::cout << "len_last_name = " << len_last_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_last_name <= 10)
	{
		std::cout << phonebook.contacts[index].last_name;
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
			std::cout << phonebook.contacts[index].last_name[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_nickname(PhoneBook phonebook, int index)
{
	int len_nickname;
	int i;
	
	len_nickname = phonebook.contacts[index].nickname.length();
	//std::cout << "len_last_name = " << len_last_name << std::endl;
	i = 0;
	std::cout << "|";
	if (len_nickname <= 10)
	{
		std::cout << phonebook.contacts[index].nickname;
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
			std::cout << phonebook.contacts[index].nickname[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_index(int index)
{
	std::cout << "|     " << AQUAMARINE << index + 1 << RESET_COLOR "    ";
}

void show_all_contacts_mandatory_info(PhoneBook phonebook)
{
	int tmp_counter_contacts;
	int i;

	tmp_counter_contacts = phonebook.counter_contacts;
	// printf("tmp_counter_contacts = %d\n", tmp_counter_contacts);
	std::cout << " __________ __________ __________ __________" << std::endl;
	std::cout << "|        " YELLOW "FRIENDS & ENEMIES' PHONEBOOK" RESET_COLOR "       |" << std::endl;
	std::cout << "|          Currently " YELLOW << phonebook.counter_contacts <<  RESET_COLOR " / 8 contacts         |\n"; 
	std::cout << " —————————— —————————— —————————— ——————————" << std::endl;
	std::cout << "|index     |first_name|last_name |nickname  |" << std::endl;
	std::cout << " —————————— —————————— —————————— ——————————" << std::endl;
	i = 0;
	while (tmp_counter_contacts > 0)
	{
		ft_put_index(i);
		ft_put_first_name(phonebook, i);
		ft_put_last_name(phonebook, i);
		ft_put_nickname(phonebook, i);
		std::cout << "|" << std::endl;
		i++;
		tmp_counter_contacts--;
	}
	//std::cout << AQUAMARINE "\n" << phonebook.counter_contacts << RESET_COLOR " contacts are in phonebook" << std::endl;
}

void ft_put_age(PhoneBook phonebook, int index)
{
	int len_age;
	int i;

	len_age = phonebook.contacts[index].age.length();
	std::cout << "|";
	if(len_age == 0)
	{
		std::cout << "null      |";
		return;
	}
	if (len_age <= 10)
	{
		std::cout << phonebook.contacts[index].age;
		while (len_age < 10)
		{
			std::cout << " ";
			len_age++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << phonebook.contacts[index].age[i];
			i++;
		}
		std::cout << ".";
	}
}

void ft_put_hobby(PhoneBook phonebook, int index)
{
	int len_hobby;
	int i;

	len_hobby = phonebook.contacts[index].hobby.length();
	std::cout << "|";
	if(len_hobby == 0)
	{
		std::cout << "null      |";
		return;
	}
	if (len_hobby <= 10)
	{
		std::cout << phonebook.contacts[index].hobby;
		while (len_hobby < 10)
		{
			std::cout << " ";
			len_hobby++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << phonebook.contacts[index].hobby[i];
			i++;
		}
		std::cout << ".";
	}
}

/*see_more_info_about
*
*	index: index to find each contact
*	number: number specified by user through standard input
*/
void see_more_info_about(PhoneBook phonebook, int number)
{
	int index;

	index = number - 1;
	std::cout << "More info about contact number " << AQUAMARINE << number << RESET_COLOR ":" << std::endl;
	std::cout << " __________ __________ __________ __________ __________ __________" << std::endl;
	std::cout << "|index     |first_name|last_name |nickname  |age       |hobby     |" << std::endl;
	std::cout << " —————————— —————————— —————————— —————————— —————————— ——————————" << std::endl;
	std::cout << "|" << AQUAMARINE "     " << number << "    " RESET_COLOR;
	ft_put_first_name(phonebook, index);
	ft_put_last_name(phonebook, index);
	ft_put_nickname(phonebook, index);
	ft_put_age(phonebook, index);
	ft_put_hobby(phonebook, index);
	std::cout << "|" << std::endl;
}

void choose_index_for_more_detail(PhoneBook phonebook)
{
	std::string	input;
	int	number;

	if (phonebook.counter_contacts == 0)
	{
		std::cout << AQUAMARINE "Add your first contact so that you can then search info about them :)\n" RESET_COLOR;
		return;
	}
		
	std::cout << "Choose contact number [1-8] to see more details" << std::endl;
	std::getline(std::cin, input);
    if (isValidIntegerInRange(input) == -1)
	{
		std::cout << "Non valid number. Please enter [1-8] to see contact details" << std::endl;
		std::cout << RED "This phonebook can only store 8 contacts" RESET_COLOR << std::endl;
		return;
	}
	number = isValidIntegerInRange(input);
	if (number > phonebook.counter_contacts)
	{
		std::cout << RED "This phonebook has only " << phonebook.counter_contacts << " contacts at the moment." << std::endl;
		std::cout << RESET_COLOR "You can still " AQUAMARINE "ADD " << 8 - phonebook.counter_contacts <<" more!\n";
		return;
	}
	see_more_info_about(phonebook, number);
}

void PhoneBook::search_show_contacts(PhoneBook phonebook)
{   
	show_all_contacts_mandatory_info(phonebook);
    choose_index_for_more_detail(phonebook);
}
