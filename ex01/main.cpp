/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:14 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/08 21:31:50 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***/// SCAVTRAP SESSION ///***" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		ScavTrap a("Chrlie");
		a.attack("a box");
		std::cout << std::endl;
		a.GuardGate();
		a.GuardGate();
		std::cout << std::endl;
		a.beRepaired(2);
		std::cout << std::endl;
		a.takeDamage(5);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***/// CLAPTRAP SESSION ///***" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	{
		ClapTrap a("Peter");
		for (int i = 4; i > 0; i--)
			a.attack("a box");
		std::cout << std::endl;
		a.beRepaired(2);
		std::cout << std::endl;
		a.takeDamage(5);

	}
	return 0;
}