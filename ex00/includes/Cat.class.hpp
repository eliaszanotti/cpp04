/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:08:30 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

# include <iostream>
# include "Animal.class.hpp"

class Cat: public Animal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Cat();
		Cat(Cat const &copy);
		~Cat();

		// Operators
		Cat const	&operator=(Cat const &copy);

		// Methods
		void	makeSound(void) const;
};

#endif