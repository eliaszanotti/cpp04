/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 17:28:08 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "Wrong.class.hpp"

int main(void)
{
    std::cout << "-- Animals ---" << std::endl;
    {
        Animal monkey("monkey");
        Animal turtle;
        Animal kingkong(monkey);

        std::cout << monkey.getType() << std::endl;
        std::cout << turtle.getType() << std::endl;
        std::cout << kingkong.getType() << std::endl;
    }
    std::cout << "-- Dogs and Cats ---" << std::endl;
    {
        Dog snoop("snooooooop");
        Cat garfield("garfield");

        snoop.makeSound();
        garfield.makeSound();
    }
    std::cout << "-- Wrong animals and cats ---" << std::endl;
    {
        Dog snoop("snooooooop");
        Cat garfield("garfield");

        snoop.makeSound();
        garfield.makeSound();
    }
    return (0);
}