/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 15:00:38 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

# include <iostream>

class Animal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	protected:
		std::string	_type;

	public:
		// Constructors
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &copy);
		~Animal();

		// Operators
		Animal const	&operator=(Animal const &copy);

		// Methods
		
		// Getters and Setters
		std::string	getType(void) const;
		void	setType(std::string const &type);
		
};

#endif