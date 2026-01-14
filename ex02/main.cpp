/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 01:57:06 by molamham          #+#    #+#             */
/*   Updated: 2026/01/14 02:03:40 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

#include "FragTrap.hpp"

int main()
{
    std::cout << "--- CREATING FRAGTRAP ---" << std::endl;
    FragTrap frag("Fraggy");

    std::cout << "\n--- TESTING FUNCTIONS ---" << std::endl;
    frag.attack("the gate");
    frag.takeDamage(50);
    frag.beRepaired(25);

    frag.highFivesGuys();

    std::cout << "\n--- DESTRUCTORS ---" << std::endl;
    return 0;
}