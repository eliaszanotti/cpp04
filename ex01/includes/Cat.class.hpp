/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/06/01 13:57:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include <iostream>
# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat: public Animal
{
	private:
		std::string	_type;
		Brain	*_brain;
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Cat();
		Cat(std::string const &type);
		Cat(Cat const &copy);
		~Cat();

		// Operators
		Cat const	&operator=(Cat const &copy);

		// Getters and Setters
		std::string	const	&getType(void) const;
		Brain	&getBrain(void) const;
		void	setType(std::string const &type);
		void	setBrain(Brain const &brain);

		// Methods
		void	makeSound(void) const;
};

#endif