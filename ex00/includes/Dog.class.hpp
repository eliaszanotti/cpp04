/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 16:00:29 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include <iostream>
# include "Animal.class.hpp"

class Dog: public Animal
{
	private:
		std::string	_type;
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Dog();
		Dog(std::string const &type);
		Dog(Dog const &copy);
		~Dog();

		// Operators
		Dog const	&operator=(Dog const &copy);

		// Getters and Setters
		std::string	const	&getType(void) const;
		void	setType(std::string const &type);

		// Methods
		void	makeSound(void) const;
};

#endif