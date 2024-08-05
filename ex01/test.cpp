/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:06:05 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/03 16:10:19 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string> //std::string

int main(void)
{
    std::string greeting;

    greeting = "Hello World!";
    std::cout << greeting << std::endl;
    std::cout << "Length of greeting: " << greeting.length() << std::endl;
    return(0);
}