/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/06/02 11:32:36 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_H
# define AANIMAL_CLASS_H

# include <iostream>

class AAnimal
{
	private:
		// Print
		void	print(std::string const &str, int color) const;

	protected:
		std::string	_type;

	public:
		// Constructors
		AAnimal();
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal();

		// Operators
		AAnimal const	&operator=(AAnimal const &copy);

		// Getters and Setters
		std::string	const	&getType(void) const;
		void	setType(std::string const &type);

		// Methods
		virtual void	makeSound(void) const = 0;
};

#endif