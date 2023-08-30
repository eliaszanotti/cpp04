/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:11:04 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Wrong.class.hpp"

/* WrongAnimal */
// Print
void WrongAnimal::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[WrongAnimal " << this->_type << "] " << reset;
	else
		std::cout << colorsString << "[WrongAnimal " << this->_type << "] " << reset << str << std::endl;
}

// Constructors
WrongAnimal::WrongAnimal()
{
	this->_type = "default WrongAnimal";
	this->print("created", 2);
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	this->_type = type;
	this->print("created", 2);
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

WrongAnimal::~WrongAnimal()
{
	this->print("deleted", 1);
}

// Operators
WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	this->_type = copy.getType();
	this->print("created by assignment", 2);
	return (*this);
}

// Getters and Setters
std::string const	&WrongAnimal::getType(void) const
{
    return (this->_type);
}

void WrongAnimal::setType(std::string const &type)
{
	this->_type = type;
}

// Methods
void WrongAnimal::makeSound(void) const
{
	this->print("default animal sound...", 3);	
}

/* WrongCat */
// Print
void WrongCat::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[WrongCat] " << reset;
	else
		std::cout << colorsString << "[WrongCat] " << reset << str << std::endl;
}

// Constructors
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	this->print("created", 2);
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

WrongCat::~WrongCat()
{
	this->print("deleted", 1);
}

// Operators
WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	WrongAnimal::operator=(copy);
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void WrongCat::makeSound(void) const
{
	this->print("miaou miaou", 3);
}