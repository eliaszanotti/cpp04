/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 18:06:10 by elias            ###   ########.fr       */
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
        Animal  monkey("monkey");
        Animal  turtle;
        Animal  kingkong(monkey);

        std::cout << monkey.getType() << std::endl;
        std::cout << turtle.getType() << std::endl;
        std::cout << kingkong.getType() << std::endl;
    }
    std::cout << "-- Dogs and Cats ---" << std::endl;
    {
        Animal  *garfield = new Cat("garfield"); 
        Animal  *snoop = new Dog("snoop"); 

        snoop->makeSound();
        garfield->makeSound();
        delete (snoop);
        delete (garfield);
    }
    std::cout << "-- Wrong animals and cats ---" << std::endl;
    {
        WrongAnimal *fakeGarfield = new WrongCat("fake garfield"); 

        fakeGarfield->makeSound();
        delete (fakeGarfield);
    }
    return (0);
}