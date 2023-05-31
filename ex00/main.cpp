/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 14:54:28 by elias             #+#    #+#             */
/*   Updated: 2023/05/31 15:09:25 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.class.hpp"

int main(void)
{
    Animal  monkey("monkey");
    Animal  pig;
    pig = monkey;
    Animal  cow(pig);



    std::cout << pig.getType() << std::endl;
    std::cout << cow.getType() << std::endl;

    return (0);
}