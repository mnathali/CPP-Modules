/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:17:25 by nikita            #+#    #+#             */
/*   Updated: 2022/08/03 01:04:03 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl().complain("DEBUG");
    Harl().complain("INFO");
    Harl().complain("WARNING");
    Harl().complain("ERROR");
    return 0;
}
