/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:08:46 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Cat.class.hpp"

// Print
void Cat::print(std::string const &str, int color) const
{
	std::string colorsString = "";
	std::string reset = "\e[0m";
	
	if (color > 0 && color <= 9)
	{
		std::ostringstream oss;
		oss << "\e[3" << color << "m";
		colorsString = oss.str();
	}
	if (str.empty())
		std::cout << colorsString << "[Cat] " << reset;
	else
		std::cout << colorsString << "[Cat] " << reset << str << std::endl;
}

// Constructors
Cat::Cat(): Animal("Cat")
{
	this->print("created", 2);
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Cat::~Cat()
{
	this->print("deleted", 1);
}

// Operators
Cat const	&Cat::operator=(Cat const &copy)
{
	Animal::operator=(copy);
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void Cat::makeSound(void) const
{
	this->print("miaou miaou", 3);
}