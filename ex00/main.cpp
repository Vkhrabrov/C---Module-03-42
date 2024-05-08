/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:14 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/02 19:17:00 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

	ClapTrap a("Peter");
	for (int i = 9; i > 0; i--)
		a.attack("a box");
	a.beRepaired(2);
	a.beRepaired(2);

	a.takeDamage(5);
	return 0;
}