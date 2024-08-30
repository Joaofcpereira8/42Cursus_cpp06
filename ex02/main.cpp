/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:48:34 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/29 18:48:42 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
	Base *base = generate();
	std::cout << "Base through pointer is ";
	identify(base);
	std::cout << std::endl;
	std::cout << "Base through address is ";
	identify(*base);
	delete base;
}