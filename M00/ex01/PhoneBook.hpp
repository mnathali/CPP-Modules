/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 13:43:51 by nikita            #+#    #+#             */
/*   Updated: 2022/07/31 23:57:48 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public: 

    PhoneBook();

    void    search();
    void    add_new_contact();

private:

    void    choose(int n, std::string str);

    int i;
    Contact contacts[8];

};

#endif
