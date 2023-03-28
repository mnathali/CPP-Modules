/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 12:54:25 by nikita            #+#    #+#             */
/*   Updated: 2022/07/28 15:06:42 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::clear()
{
    f_name.clear();
    l_name.clear();
    nick.clear();
    phone.clear();
    d_secret.clear();
}

int Contact::change()
{
    std::cout << "First name   : ";
    std::getline(std::cin, f_name);
    std::cout << "Last name    : ";
    std::getline(std::cin, l_name);
    std::cout << "Nick name    : ";
    std::getline(std::cin, nick);
    std::cout << "Phone number : ";
    std::getline(std::cin, phone);
    std::cout << "Dark secret  : ";
    std::getline(std::cin, d_secret);
    if (f_name == "" || l_name == "" || nick == ""
        || phone == "" || d_secret == "")
    {
        clear();
        std::cout << "This contact is not created. All information should be set\n";
        return (0);
    }
    return (1);
}

void    Contact::show(int n)
{
    std::cout << std::setw(10) << n << "|";
    f_name.size() > 10 ? std::cout << f_name.substr(0, 9) << "." : std::cout << std::setw(10) << f_name;
    std::cout << "|";
    l_name.size() > 10 ? std::cout << l_name.substr(0, 9) << "." : std::cout << std::setw(10) << l_name;
    std::cout << "|";
    nick.size() > 10 ? std::cout << nick.substr(0, 9) << "." : std::cout << std::setw(10) << nick;
    std::cout << "|" << std::endl;
}

void    Contact::show_all()
{
    std::cout << "First name   : " << f_name << std::endl;
    std::cout << "Last name    : " << l_name << std::endl;
    std::cout << "Nickname     : " << nick << std::endl;
    std::cout << "Phone number : " << phone << std::endl;
    std::cout << "Dark secret  : " << d_secret << std::endl;
}

int Contact::find(std::string str)
{
    if (f_name.find(str) != f_name.npos || l_name.find(str) != l_name.npos
        || nick.find(str) != nick.npos || phone.find(str) != phone.npos
        || d_secret.find(str) != d_secret.npos)
        return (1);
    return (0);
}
