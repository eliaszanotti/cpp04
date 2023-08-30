/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:08:54 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Dog.class.hpp"

// Print
void Dog::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[Dog] " << reset;
	else
		std::cout << colorsString << "[Dog] " << reset << str << std::endl;
}

// Constructors
Dog::Dog(): Animal("Dog")
{
	this->print("created", 2);
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Dog::~Dog()
{
	this->print("deleted", 1);
}

// Operators
Dog const	&Dog::operator=(Dog const &copy)
{
	Animal::operator=(copy);
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
void Dog::makeSound(void) const
{
	this->print("wouaf wouaf", 3);
}