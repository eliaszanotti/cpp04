/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/28 16:18:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Brain.class.hpp"

// Print
void Brain::print(std::string const &str, int color) const
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
		std::cout << colorsString << "[Brain] " << reset;
	else
		std::cout << colorsString << "[Brain] " << reset << str << std::endl;
}

// Constructors
Brain::Brain()
{
	this->print("created", 2);
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	this->print("created by copy", 2);
}

Brain::~Brain()
{
	this->print("deleted", 1);
}

// Operators
Brain const	&Brain::operator=(Brain const &copy)
{
	if (this != &copy)
		std::copy(copy._ideas, copy._ideas + 100, this->_ideas);
	this->print("created by assignment", 2);
	return (*this);
}

// Methods
std::string const &Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return (this->_ideas[0]);
}

void Brain::setIdea(std::string const &idea, int index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}