/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:31:37 by uxmancis          #+#    #+#             */
/*   Updated: 2024/08/03 13:39:29 by uxmancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*C++ Standard Library is recommended in subject:
* https://en.cppreference.com/w/cpp/header*/
#include <iostream> //Several standard stream objects
//#include <string> //std::basic_string class template

//Para compilar .cpp file, g++ -o program_name file_name.cpp

/*std::cout - Object in C++ Standard Library
*	std (standard) is a namespace
*	cout (character output) is an instance of 
*					the std::ostream class that is used
*					for output operations.
*
*	We can use it to print different data types. E.g.:
*		int file_size = 0;
*		std::cout << file_size;
*/

/*std::endl
*	Inserts a newline charactera and vacía buffer de salida.
*
*	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
*	is the same as using "\n" at the ene of the string
*
*	std::cout << std::endl; is exactly the same as std::cout << "\n";
*/

int main(int argc, char **argv)
{
    int x;
	int y;
    char tmp;

    if (argc == 1) //solo nombre del programa ejecutable
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }     
    x = 1;
	y = 0;
	while (x < argc) //tantas vueltas como argumentos haya
	{
        y = 0;
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] >= 'a' && argv[x][y] <= 'z')
            {
                tmp = argv[x][y] - 32;
                std::cout << tmp;
            }
			else
				std::cout <<argv[x][y];
			y++;
		}
		x++;
	}
	std::cout << std::endl;
	return (0);   
}

/* C version of the code*/
// #include <unistd.h>
// #include <stdio.h>
// void ft_putstr(char *str)
// {
//     int i; 

//     i = 0;
//     while (str[i] != '\0')
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
// }

// int main(int argc, char **argv)
// {
//     int x;
// 	int y;
//     char tmp;

//     if (argc == 1) //solo nombre del programa ejecutable
//     {
//         ft_putstr("* LOUD AND UNBEARABLE FEEDBACK NOISE *\n");
//         return (0);
//     }     
//     x = 1;
// 	y = 0;
// 	while (x < argc) //tantas vueltas como argumentos haya
// 	{
//         y = 0;
// 		while (argv[x][y] != '\0')
// 		{
// 			if (argv[x][y] >= 'a' && argv[x][y] <= 'z')
//             {
//                 tmp = argv[x][y] - 32;
//                 write(1, &tmp, 1);
//             }
				
// 			else
// 				write(1, &argv[x][y], 1);
// 			y++;
// 		}
// 		x++;
// 	}
// 	return (0);   
// }
