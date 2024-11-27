/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuele <samuele@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:18:05 by samuele           #+#    #+#             */
/*   Updated: 2024/11/27 23:42:22 by samuele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
    _brain = new Brain();
}

Dog::Dog(Dog const &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    _type = copy._type;
    _brain = new Brain(*copy._brain);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

Dog &Dog::operator=(Dog const &copy)
{
    if (this != &copy)
    {
        _type = copy._type;
        *_brain = *copy._brain;
    }
    return *this;
}

Brain *Dog::getBrain() const
{
    return _brain;
}

void Dog::makeSound() const
{
    std::cout << "BAUUU!" << std::endl;
}
