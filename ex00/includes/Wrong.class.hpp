/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:10:14 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CLASS_H
# define WRONG_CLASS_H

# include <iostream>
# include "Animal.class.hpp"

class WrongAnimal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	protected:
		std::string	_type;

	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		virtual	~WrongAnimal();

		// Operators
		WrongAnimal const	&operator=(WrongAnimal const &copy);

		// Getters and Setters
		std::string	const	&getType(void) const;
		void	setType(std::string const &type);

		// Methods
		void	makeSound(void) const;
};

class WrongCat: public WrongAnimal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		WrongCat();
		WrongCat(WrongCat const &copy);
		~WrongCat();

		// Operators
		WrongCat const	&operator=(WrongCat const &copy);

		// Methods
		void	makeSound(void) const;
};

#endif