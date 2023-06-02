/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/06/02 11:34:08 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "AAnimal.class.hpp"

// Print
void AAnimal::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[AAnimal " << this->_type << "] " << reset;
	else
		std::cout << colorsString << "[AAnimal " << this->_type << "] " << reset << str << std::endl;
}

// Constructors
AAnimal::AAnimal()
{
	this->_type = "default aAnimal";
	this->print("created", 2);
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

AAnimal::~AAnimal()
{
	this->print("deleted", 1);
}

// Operators
AAnimal const	&AAnimal::operator=(AAnimal const &copy)
{
	this->_type = copy.getType();
	this->print("created by assignment", 2);
	return (*this);
}

// Getters and Setters
std::string const	&AAnimal::getType(void) const
{
    return (this->_type);
}

void AAnimal::setType(std::string const &type)
{
	this->_type = type;
}

// Methods
void AAnimal::makeSound(void) const
{
	this->print("default animal sound...", 3);	
}