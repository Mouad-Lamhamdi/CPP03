/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:31:12 by molamham          #+#    #+#             */
/*   Updated: 2026/01/13 23:03:00 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP    
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _energyPoints;
        unsigned int    _attackDamage;
        ClapTrap(std::string name, int hp, int ep, int ad);
    
    public:
        ClapTrap();
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &other);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap const &other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif