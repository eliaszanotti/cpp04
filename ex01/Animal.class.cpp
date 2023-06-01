/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 17:24:58 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Animal.class.hpp"

// Print
void Animal::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[Animal " << this->_type << "] " << reset;
	else
		std::cout << colorsString << "[Animal " << this->_type << "] " << reset << str << std::endl;
}

// Constructors
Animal::Animal()
{
	this->_type = "default animal";
	this->print("created", 2);
}

Animal::Animal(std::string const &type)
{
	this->_type = type;
	this->print("created", 2);
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Animal::~Animal()
{
	this->print("deleted", 1);
}

// Operators
Animal const	&Animal::operator=(Animal const &copy)
{
	this->_type = copy.getType();
	this->print("created by assignment", 2);
	return (*this);
}

// Getters and Setters
std::string const	&Animal::getType(void) const
{
    return (this->_type);
}

void Animal::setType(std::string const &type)
{
	this->_type = type;
}

// Methods
void Animal::makeSound(void) const
{
	this->print("default animal sound...", 3);	
}