/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/06/02 11:35:37 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "Wrong.class.hpp"
#include "Brain.class.hpp"

int main(void)
{
    std::cout << "--- Animals ---" << std::endl;
    {
        Animal  monkey("monkey");
        Animal  turtle;
        Animal  kingkong(monkey);

        std::cout << monkey.getType() << std::endl;
        std::cout << turtle.getType() << std::endl;
        std::cout << kingkong.getType() << std::endl;
    }
    std::cout << "--- Dogs and Cats ---" << std::endl;
    {
        Animal  *garfield = new Cat("garfield"); 
        Animal  *snoop = new Dog("snoop"); 

        snoop->makeSound();
        garfield->makeSound();
        delete (snoop);
        delete (garfield);
    }
    std::cout << "--- Wrong animals and cats ---" << std::endl;
    {
        WrongAnimal *fakeGarfield = new WrongCat("fake garfield"); 

        fakeGarfield->makeSound();
        delete (fakeGarfield);
    }    
    std::cout << "--- Test with brains ---" << std::endl;
    {
        	const Animal    *animals[10];

            for (int i = 0; i < 10; i++)
            {
                if (i < 5)
                    animals[i] = new Dog();
                else
                    animals[i] = new Cat();
            }
            for (int i = 0; i < 10; i++)
                delete animals[i];
    }
    std::cout << "--- Brain copy tests ---" << std::endl;
    {
        Dog     *snoop = new Dog("snoop");

        snoop->getBrain().setIdea("first idea", 0);
        snoop->getBrain().setIdea("second idea", 1);

        Dog *milou = new Dog;
        *milou = *snoop;
        // Dog *milou = new Dog(*snoop);

        std::cout << "[BEFORE]" << std::endl;
        std::cout << "Snoop [0] = " << snoop->getBrain().getIdea(0) << std::endl;
        std::cout << "Snoop [1] = " << snoop->getBrain().getIdea(1) << std::endl;
        std::cout << "Milou [0] = " << milou->getBrain().getIdea(0) << std::endl;
        std::cout << "Milou [1] = " << milou->getBrain().getIdea(1) << std::endl;

        milou->getBrain().setIdea("OTHER IDEA !", 1);

        std::cout << "[AFTER]" << std::endl;
        std::cout << "Snoop [0] = " << snoop->getBrain().getIdea(0) << std::endl;
        std::cout << "Snoop [1] = " << snoop->getBrain().getIdea(1) << std::endl;
        std::cout << "Milou [0] = " << milou->getBrain().getIdea(0) << std::endl;
        std::cout << "Milou [1] = " << milou->getBrain().getIdea(1) << std::endl;

        delete (snoop);
        delete (milou);
    }
    return (0);
}