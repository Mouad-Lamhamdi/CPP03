/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:31:15 by molamham          #+#    #+#             */
/*   Updated: 2026/01/13 23:08:17 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
//     : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad) {
    
//     std::cout << "ClapTrap attribute constructor called." << std::endl;
// }

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other){
    std::cout << "ClapTrap copy assignement operator called" << std::endl;
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target){
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is dead and can't attack." << std::endl;
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy left to attack." << std::endl;
        return ;
    }
    
    _energyPoints--;

    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
        return;
    }

    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;

    std::cout << "ClapTrap" << _name << " takes " << amount
              << " points of damage! (HP: "<< _hitPoints << ")" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    
    if (_hitPoints <= 0){
        std::cout << "ClapTrap " << _name << " is dead and can't be repaired." << std::endl;
        return;    
    }

    if (_energyPoints <= 0){
        std::cout << "ClapTrap " << _name << " has no energy left to repair." << std::endl;
        return ;
    }
    
    _energyPoints--;
    _hitPoints += amount;
    
    std::cout << "ClapTrap " << _name << " repairs itself for "
              << amount << " hit points! (HP : " << _hitPoints << ")" << std::endl; 
}
