/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 11:20:39 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/04 15:33:01 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8
# include "Contact.hpp"
# include "friends_and_enemies.hpp"

//Class definition
class PhoneBook
{
	//Constructor and destructor
	public:
		PhoneBook(void);
		~PhoneBook(void);
		
	//Atributos o propiedades
	Contact		contacts[MAX_CONTACTS];
	int			indext_contact;
	int			counter_contacts;
	
	//Métodos o comportamientos
	public:
		void	add_new_contact(PhoneBook *phonebook); //ADD: save a new contact
		void	search_show_contacts(PhoneBook phonebook); //SEARCH

};

#endif // PHONEBOOK_HPP