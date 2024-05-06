/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:14 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/05 17:44:38 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
			a.attack("a piece of furniture");
		std::cout << std::endl;
		a.beRepaired(2);
		std::cout << std::endl;
		a.takeDamage(5);

	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***/// FRAGTRAP SESSION ///***" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	{
		FragTrap a("Ivan");
		for (int i = 4; i > 0; i--)
			a.attack("a dusty and empty bottle of wine");
		std::cout << std::endl;
		a.beRepaired(2);
		std::cout << std::endl;
		a.takeDamage(5);
		std::cout << std::endl;
		a.highFivesGuys();
		std::cout << std::endl;
	}
	return 0;
}