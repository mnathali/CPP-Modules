/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 22:42:04 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 17:46:14 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <limits>

bool is_int(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && (std::isdigit(*it) || *it == '-'))
		it++;
    return !s.empty() && it == s.end();
}

bool is_float(const std::string& s)
{
    std::string::const_iterator it = s.begin();
	if (*it == '-')
		it++;
    while (it != s.end() && std::isdigit(*it))
		it++;
	if (*it == '.')
		it++;
	while (it != s.end() && std::isdigit(*it))
		it++;
	if (*it == 'f')
		it++;
	else
		return (0);
    return !s.empty() && it == s.end();
}

bool is_double(const std::string& s)
{
    std::string::const_iterator it = s.begin();
	if (*it == '-')
		it++;
    while (it != s.end() && std::isdigit(*it))
		it++;
	if (*it == '.')
		it++;
	while (it != s.end() && std::isdigit(*it))
		it++;
    return !s.empty() && it == s.end();
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
		return (1);
	std::string s = argv[1];
	if (s.size() > 1 && s[0] == '+')
		s.erase(0,1);
	std::cout << std::fixed;
	std::cout << std::setprecision(1);
/* -----------------------Checking CHAR----------------------------*/
	try
	{
		char c = -1;
		if (s.size() == 1 && (s[0] < 48 || s[0] > 57))
			c = s[0];
		if (c != -1)
			throw c;
		throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cout << "This is not a char" << std::endl;
	}
	catch(const char c)
	{
		std::cout << "This is a char <--------" << std::endl;
		std::cout << "char : ";
		(c >= 32 && c <= 126) ? std::cout << c << std::endl : std::cout << "Impossible" << std::endl;
		std::cout << "int : " << static_cast<int>(c) << std::endl;
		std::cout << "float : " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(c) << std::endl;
		return (0);
	}
/* -----------------------Checking INT----------------------------*/
	try
	{
		int i;

		std::string s1;
		std::istringstream(s) >> i;
		std::stringstream stram;
		stram << i;
		stram >> s1;
		if (!is_int(s) || s != s1)
		 	throw std::exception();
		throw i;
	}
	catch(const std::exception& e)
	{
		std::cout << "This is not a int" << std::endl;;
	}
	catch (int i)
	{
		std::cout << "This is a int <--------" << std::endl;
		char c = static_cast<char>(i);
		std::cout << "char : ";
		(c >= 32 && c <= 126) ? std::cout << c << std::endl : std::cout << "Impossible" << std::endl;
		std::cout << "int : " << i << std::endl;
		std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(i) << std::endl;
		return (0);
	}
/* -----------------------Checking FLOAT----------------------------*/
	try
	{
		float f;

		std::stringstream stram;
		std::string s1;
		std::istringstream(s) >> f;
		stram << std::fixed; stram << std::setprecision(1);
		stram << f;
		stram >> s1;
		if ((!is_float(s) && (s != "nanf" && s != "-inff" && s != "inff")) || (s != s1 + "f" && (s1 == "-inf" || s1 == "inf")))
		 	throw std::exception();
		if (f == 0 && s == "nanf")
			f = std::numeric_limits<float>::quiet_NaN();
		else if (f == 0 && s == "inff")
			f = std::numeric_limits<float>::infinity();
		else if (f == 0 && s == "-inff")
			f = -std::numeric_limits<float>::infinity();
		throw f;
	}
	catch(const std::exception& e)
	{
		std::cout << "This is not a float" << std::endl;;
	}
	catch (float f)
	{
		std::cout << "This is a float <--------" << std::endl;
		char c = static_cast<char>(f);
		std::cout << "char : ";
		(c >= 32 && c <= 126) ? std::cout << c << std::endl : std::cout << "Impossible" << std::endl;
		std::cout << "int : ";
		(s == "nanf" || s == "inff" || s == "-inff") ? std::cout << "Impossible" << std::endl : std::cout << static_cast<int>(f) << std::endl;
		std::cout << "float : " << f << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(f) << std::endl;
		return (0);
	}
/* -----------------------Checking DOUBLE----------------------------*/
	try
	{
		double d;

		std::stringstream stram;
		std::string s1;
		d = std::atof(s.c_str());
		stram << std::fixed; stram << std::setprecision(1);
		stram << d;
		stram >> s1;
		if ((!is_double(s) && (s != "nan" && s != "-inf" && s != "inf")) || (s != s1 && (s1 == "-inf" || s1 == "inf")))
		 	throw std::exception();
		throw d;

	}
	catch(const std::exception& e)
	{
		std::cout << "This is not a double" << std::endl;;
	}
	catch (double d)
	{
		std::cout << "This is a double <--------" << std::endl;
		char c = static_cast<char>(d);
		std::cout << "char : ";
		(c >= 32 && c <= 126) ? std::cout << c << std::endl : std::cout << "Impossible" << std::endl;
		std::cout << "int : ";
		(s == "nan" || s == "inf" || s == "-inf") ? std::cout << "Impossible" << std::endl : std::cout << static_cast<int>(d) << std::endl;
		std::cout << "float : " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double : " << d << std::endl;
		return (0);
	}
    return (0);
}
