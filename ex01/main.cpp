/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/06/01 16:58:02 by elias            ###   ########.fr       */
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
    // {
    //     Dog *snoop = new Dog("snoop");
        
    //     Brain   snoopBrain;
    
    //     //snoopBrain.setIdea("first idea", 0);
    //     //snoopBrain.setIdea("second idea", 1);

    //     snoop->setBrain(snoopBrain);

    //     Brain   *newBrain = &snoop->getBrain();

    //     std::cout << "efefef:which" << newBrain->getIdea(0) << std::endl;
        
  
        
    //     Dog *milou = new Dog("milou");

    //     std::cout << milou->getBrain().getIdea(0) << std::endl;
    //     std::cout << milou->getBrain().getIdea(1) << std::endl;



    // }
    // std::cout << "--- Test with brains ---" << std::endl;
    // {
    //     const Animal	*animals[10];
    //     int				i;

    //     i = -1;
    //     while (++i < 10)
    //     {
    //         if (i < 5)
    //             animals[i] = new Dog();
    //         else
    //             animals[i] = new Cat();
    //     }
    //     while (i)
    //         delete animals[10 - i--];
    // }
    {

		const Dog *lotsOfAnimals[10];

		for (int i = 0; i < 10; i++)
			lotsOfAnimals[i] = new Dog("Dog");

		std::cout << "-------------------------------------\n";
		std::cout << lotsOfAnimals[0]->getType() << std::endl;
		std::cout << lotsOfAnimals[5]->getType() << std::endl;
		Brain *brain;
		brain = &lotsOfAnimals[0]->getBrain();
		brain->setIdea("I want sarshisitas!", 0);
		brain->setIdea("Let's play ball!!", 1);
		brain->setIdea("Feed me human!", 2);
		std::cout << lotsOfAnimals[0]->getBrain().getIdea(0) << std::endl;
		std::cout << lotsOfAnimals[0]->getBrain().getIdea(1) << std::endl;
		std::cout << "-------------------------------------\n";
		for (int i = 0; i < 10; i++)
			delete lotsOfAnimals[i];
        
    }
    return (0);
}