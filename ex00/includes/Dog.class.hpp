/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:08:33 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

# include <iostream>
# include "Animal.class.hpp"

class Dog: public Animal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Dog();
		Dog(Dog const &copy);
		~Dog();

		// Operators
		Dog const	&operator=(Dog const &copy);

		// Methods
		void	makeSound(void) const;
};

#endif