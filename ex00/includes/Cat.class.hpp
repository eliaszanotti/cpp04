/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 17:16:22 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include <iostream>
# include "Animal.class.hpp"

class Cat: public Animal
{
	private:
		std::string	_type;
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
		void	setType(std::string const &type);

		// Methods
		void	makeSound(void) const;
};

#endif