/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikita <nikita@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:40:10 by nikita            #+#    #+#             */
/*   Updated: 2022/08/02 20:09:24 by nikita           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong amount of parameters" << std::endl;
        return (0);
    }

    std::string     input = argv[1];
    std::ifstream   ifs;
    std::ofstream   ofs;
    std::string     dst;

    ifs.open(input);
    if (!ifs.is_open())
    {
        std::cout << "Error with files!" << std::endl;
        return (1);
    }
    input.append(".replace");
    ofs.open(input);
    if (!ofs.is_open())
    {
        std::cout << "Error with files!" << std::endl;
        ifs.close();
        return (2);
    }
    while (std::getline(ifs, dst))
    {
        while (dst.find(argv[2]) != dst.npos && std::string(argv[2]) != std::string(argv[3]))
        {
            std::string s = dst.substr(0, dst.find(argv[2]));
            s.append(argv[3]);
            s.append(dst.substr(dst.find(argv[2]) + strlen(argv[2])));
            dst = s;
        }
        ofs << dst << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}
