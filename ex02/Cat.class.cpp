/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/28 16:53:17 by elias            ###   ########.fr       */
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
		std::cout << colorsString << "[Cat] " << reset;
	else
		std::cout << colorsString << "[Cat] " << reset << str << std::endl;
}

// Constructors
Cat::Cat(): Animal("Cat")
{
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
	this->print("created by assignment", 2);
	if (this != &copy)
		this->_brain = new Brain(*copy._brain);
	return (*this);
}

// Getters and Setters
Brain &Cat::getBrain(void) const
{
	return (*this->_brain);
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