/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/08/30 14:56:49 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "Brain.class.hpp"
#include "AAnimal.class.hpp"

int main(void)
{
    std::cout << "--- Animals ---" << std::endl;
    {
        Animal  monkey("monkey");
        Animal  turtle;
        // AAnimal abstractAnimal;
        Animal  kingkong(monkey);

        std::cout << monkey.getType() << std::endl;
        std::cout << turtle.getType() << std::endl;
        std::cout << kingkong.getType() << std::endl;
    }
    return (0);
}