/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhrabro <vkhrabro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 20:19:14 by vkhrabro          #+#    #+#             */
/*   Updated: 2024/05/02 19:05:29 by vkhrabro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){

	ClapTrap a("Peter");
	// a.setName("Peter");
	for (int i = 9; i > 0; i--)
		a.attack("a box");
	a.beRepaired(2);
	a.beRepaired(2);
	return 0;
}