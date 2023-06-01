/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/06/01 17:09:39 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Cat.class.hpp"
#include "Brain.class.hpp"

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
		std::cout << colorsString << "[Cat " << this->_type << "] " << reset;
	else
		std::cout << colorsString << "[Cat " << this->_type << "] " << reset << str << std::endl;
}

// Constructors
Cat::Cat(): Animal("Cat")
{
	this->_type = "default Cat";
	this->_brain = new Brain();
	this->print("created", 2);
}

Cat::Cat(std::string const &type): Animal("Cat")
{
	this->_type = type;
	this->_brain = new Brain();
	this->print("created", 2);
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Cat::~Cat()
{
	delete (this->_brain);
	this->print("deleted", 1);
}

// Operators
Cat const	&Cat::operator=(Cat const &copy)
{
	this->_type = copy._type;
	Animal::operator=(copy);
	this->print("created by assignment", 2);
	return (*this);
}

// Getters and Setters
std::string const	&Cat::getType(void) const
{
    return (this->_type);
}

Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
}

void Cat::setType(std::string const &type)
{
	this->_type = type;
}

void Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}

// Methods
void Cat::makeSound(void) const
{
	this->print("miaou miaou", 3);
}