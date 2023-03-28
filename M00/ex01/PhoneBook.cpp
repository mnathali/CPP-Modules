/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 13:03:37 by nikita            #+#    #+#             */
/*   Updated: 2022/07/31 23:58:09 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : i(0) {};

void    PhoneBook::choose(int n, std::string str)
{
    std::string m;
    int l = 0;

    std::cout << "choose by index : ";
    std::getline(std::cin, m);
    std::cout << std::endl;
    l = std::atoi(m.c_str());
    if (l <= 0 || l > n)
    {
        std::cout << "Not found\n";
        return ;
    }
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].find(str))
            l--;
        if (l == 0)
        {
            contacts[i].show_all();
            return ;
        }
    }

}

void    PhoneBook::search()
{
    std::string str;
    int n = 0;

    std::cout << "type for seraching : ";
    std::getline(std::cin, str);
    for (int i = 0; i < 8; i++)
    {
        if (contacts[i].find(str))
        {
            if (n == 0)
                std::cout << std::setw(10) << "Index" << "|" << std::setw(10)
                << "Name" << "|" << std::setw(10) << "Last name" << "|"
                << std::setw(10) << "Nickname" << "|" <<std::endl;
            contacts[i].show(n + 1);
            n++;
        }
    }
    if (!n)
        std::cout << "Not found\n";
    else
        choose(n, str);
    return ;
}

void    PhoneBook::add_new_contact(void)
{
    if (i == 8)
        i = 0;
    i += contacts[i].change();
}
