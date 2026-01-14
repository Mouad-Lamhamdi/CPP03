/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:42:55 by molamham          #+#    #+#             */
/*   Updated: 2026/01/14 01:34:13 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Default constructor
ScavTrap::ScavTrap()
    : ClapTrap("Default", 100, 50, 20){
    
    std::cout << "ScavTrap default constructor called." << std::endl;
}

//Name constructor
ScavTrap::ScavTrap(std::string const& name)
    : ClapTrap(name, 100, 50, 20){
    
    std::cout << "ScavTrap name constructor called." << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

//Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    std::cout << "ScavTrap Copy assignment constructor called." << std::endl;
    
    if (this != &other)
        ClapTrap::operator=(other);
    
    return *this;
}

//Destructor
ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " <<  _name << " is now in gate keeper mode." << std::endl;
}


void ScavTrap::attack(const std::string& target){
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " is dead and can't attack." << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap " << _name << " has no energy left to attack." << std::endl;
        return ;
    }

    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage !" << std::endl;
}