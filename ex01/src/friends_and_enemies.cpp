/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   friends_and_enemies.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 13:03:21 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/16 13:03:21 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/friends_and_enemies.hpp"
#include <string>

std::string get_user_input(PhoneBook phonebook)
{
	std::string	input;
	std::cout << "\n\n------------------------------------------------------" << std::endl;
	std::cout << "Please " AQUAMARINE "type" RESET_COLOR " the action you'd like to execute:" << std::endl;
	std::cout << "Current number of contacts in phonebook: " AQUAMARINE << phonebook.counter_contacts_til_eight << RESET_COLOR << " / 8" << std::endl;
	std::cout << "\n";
	std::cout << " · ADD: Add new contact in phonebook" << std::endl;
	std::cout << " · SEARCH: Display existing contacts" << std::endl;
	std::cout << " · EXIT: Exit phonebook (existing contacts will be lost forever)" << std::endl;
	std::cout << AQUAMARINE "\n > " RESET_COLOR;
	std::getline(std::cin, input);
	if(std::cin.eof())
		exit(-1);
	return (input);
}

/*get_contact_info
*
*	Makes sure 100% mandatory fields are completed so that contact is
*	successfully added to phonebook.
*/
Contact get_contact_info(void)
{
	Contact contact;
	
	std::cout << RED "    *" RESET_COLOR "First name: ";
	std::getline(std::cin, contact.first_name);
	while (contact.first_name.length() <= 0) //hasta que nos lo informen bien
	{
		if(std::cin.eof())
			exit(-1);
		std::cout << RED << "Mandatory field. Please fill to add contact." << RESET_COLOR << std::endl;
		std::cout << RED "    *" RESET_COLOR "First name: ";
		std::getline(std::cin, contact.first_name);
	}
	std::cout << RED "    *" RESET_COLOR "Last name: ";
	std::getline(std::cin, contact.last_name);
	while (contact.last_name.length() <= 0) //hasta que nos lo informen bien
	{
		if(std::cin.eof())
			exit(-1);
		std::cout << RED << "Mandatory field. Please fill to add contact." << RESET_COLOR << std::endl;
		std::cout << RED "    *" RESET_COLOR "Last name: ";
		std::getline(std::cin, contact.last_name);
	}
	std::cout << RED "    *" RESET_COLOR "Nickname: ";
	std::getline(std::cin, contact.nickname);
	while (contact.nickname.length() <= 0) //hasta que nos lo informen bien
	{
		if(std::cin.eof())
			exit(-1);
		std::cout << RED << "Mandatory field. Please fill to add contact." << RESET_COLOR << std::endl;
		std::cout << RED "    *" RESET_COLOR "Nickname: ";
		std::getline(std::cin, contact.nickname);
	}
	std::cout << RED "    *" RESET_COLOR "Phone number: ";
	std::getline(std::cin, contact.phone_nb);
	while (contact.phone_nb.length() <= 0) //hasta que nos lo informen bien
	{
		if(std::cin.eof())
			exit(-1);
		std::cout << RED << "Mandatory field. Please fill to add contact." << RESET_COLOR << std::endl;
		std::cout << RED "    *" RESET_COLOR "Phone number: ";
		std::getline(std::cin, contact.phone_nb);
	}
	std::cout << RED "    *" RESET_COLOR "Darkest secret: ";
	std::getline(std::cin, contact.d_secret);
	while (contact.nickname.length() <= 0) //hasta que nos lo informen bien
	{
		if(std::cin.eof())
			exit(-1);
		std::cout << RED << "Mandatory field. Please fill to add contact." << RESET_COLOR << std::endl;
		std::cout << RED "    *" RESET_COLOR "Darkest secret: ";
		std::getline(std::cin, contact.d_secret);
	}
	std::cout << GREEN << "**Contact successfully added to phonebook**" << RESET_COLOR << std::endl;
	return (contact);
}

int main(void)
{
	std::string	input;
	PhoneBook phonebook;
	
	while (1)
	{
		input = get_user_input(phonebook);
		if (input == "-1")
			break;
		if (input == "EXIT")
			return (0);
		else if (input == "ADD")
			phonebook.add_new_contact(&phonebook);
		else if (input == "SEARCH")
			phonebook.search_show_contacts(phonebook);
		else
			std::cout << RED "Not valid action. Please, try again" RESET_COLOR << std::endl;
	}
	return (0);
}


/*  About the subject:
*	
*	Implement 2 classes: PhoneBook, Contact
*		· PhoneBook: array of contacts.
*				- Máx 8 contacts. If trying to add a 9th contact, replace oldest by new contact.
*				- Dynamic allocation is forbidden.
*
*		· Contact
*
*	❗Anything used INSIDE a class is PRIVATE. Anything that can be used OUTSIDE a class is PUBLIC.
*
*	ADD --> User is prompted to input the info of the new contact, 1 field at a time (first_name, last_name, nickname)
*	SEARCH --> Display saved contacts
*	EXIT --> Quit program, contacts are lost forever.
*
*	Concepts of OOP (Object Oriented Programming):
*		· Class
*		· Object/Instance
*		· Constructors and destructors: special member functions to initialize and clean up objects
*										Both must be declared in class as public.
*				> Constructor: automatically called when an object is instantiated.
*							   Prototype has a particular syntax so that this happens
*				> Destructor: automatically invoked when an object of the class goes out of scope
*							  or is explicitly deleted.
*/

/* About classes:
*
*	Name must start in capital letter.
*/

/*std::string
*	Se trata de una clase de la Biblioteca Estándar de C++ que proporciona una forma más fácil
*	y segura de manejar cadenas de texto en comparación con los arreglos tradicionales de caracteres
*	'char[]'.
*
*	Es parte del encabezado '<string>' y está definida en el namespace 'std'.
*
*	Características:
*		· Gestión automática de la memoria: you don't have to assign/free memory
*		· Safety: prevents buffer overflows.
*/

/*std::getline
*	Reads an entire line from an an input stream into a 'std::string'.
*	It's commonly used to read lines of text from standard input ('std::cin).
*/
