/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:48:14 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/29 18:48:15 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate() {
	// Seed the random number generator with the current time
	std::srand(time(0));

	// Generate a random number, and mod by 4 to get either 0 or 1 or 2 or 3
	int randomValue = std::rand() % 4;

	Base *base = NULL;
	switch (randomValue) {
		case 0:
			base = new A();
			return base;
		case 1:
			base = new B();
			return base;
		case 2:
			base = new C();
			return base;
		default:
			std::cout << "Number generated is out of range!" << std::endl;
	}
	return 0;
}

void identify(Base &p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast&) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast&) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast&) {
				std::cout << "Unknown type!" << std::endl;
			}
		}
	}
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else
		std::cout << "Unknown type!" << std::endl;
}
