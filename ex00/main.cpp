/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molamham <molamham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 21:31:18 by molamham          #+#    #+#             */
/*   Updated: 2026/01/13 03:47:22 by molamham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("JIMMY");

    a.attack("Wall");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(20);
    a.attack("Air");

    return 0;
}
