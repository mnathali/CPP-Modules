/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:41:24 by nikita            #+#    #+#             */
/*   Updated: 2022/07/28 15:19:00 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char const *argv[])
{
    PhoneBook phonebook;

    if (argc != 1)
    {
        std::cout << "phonebook will start without parameters\n";
        return (0);
    }
    while (std::cin)
    {
        std::string str;
        std::cout << argv[0] << " : ";
        std::getline(std::cin, str);
        if (str == "ADD")
            phonebook.add_new_contact();
        else if (str == "SEARCH")
            phonebook.search();
        else if (str == "EXIT")
            break ;
        else
            continue ;
        std::cout << std::endl;
    }
    return 0;
}
