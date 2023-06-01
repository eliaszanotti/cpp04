/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:34:13 by elias             #+#    #+#             */
/*   Updated: 2023/06/01 14:41:15 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
		// Print
		void	print(std::string const &str, int color) const;

	public:
		// Constructors
		Brain();
		Brain(Brain const &copy);
		~Brain();

		// Operators
		Brain const	&operator=(Brain const &copy);

		// Methods
		std::string const	&getIdea(int index) const;
		void	setIdea(std::string const &idea, int index);
};

#endif