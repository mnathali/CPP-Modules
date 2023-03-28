/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:07:25 by nikita            #+#    #+#             */
/*   Updated: 2022/07/28 13:19:57 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{

    public:
    
    void    clear();
    void    show(int n);
    void    show_all();
    int     change();
    int     find(std::string str);

    private:
    
    std::string f_name;
    std::string l_name;
    std::string nick;
    std::string phone;
    std::string d_secret;
};

#endif