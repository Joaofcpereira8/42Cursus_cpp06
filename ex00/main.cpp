/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:40:57 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/27 15:40:59 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		std::cout << "Program only accepts 2 arguments! ./ex00 [value]" << std::endl;
	else
		ScalarConverter::convert(argv[1]);
}
