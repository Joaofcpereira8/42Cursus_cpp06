/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:05 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/27 15:41:08 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	std::cout << "Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &idemScal) {
	std::cout << "Copy constructor called" << std::endl;
	(void)idemScal;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copyScal) {
	std::cout << "Copy operator called" << std::endl;
	(void)copyScal;
	return *this;
}

ScalarConverter::~ScalarConverter() {
	std::cout << "Destructor called" << std::endl;
}

void	ScalarConverter::convert(std::string parameter) {
	char *end = NULL;
	double num = std::strtod(parameter.c_str(), &end);
	int command = verif(parameter, num, end);
	if (command == 0) {
		//PRINTAR CHAR
		std::cout << "Char: '" << static_cast<char>(end[0]) << "'" << std::endl;
		std::cout << "Int: " << static_cast<int>(end[0]) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(end[0]) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(end[0]) << std::endl;
	}	else if (command == 1) {
		//PRINTAR NUM COM VALOR PRINT
		std::cout << "Char: '" << static_cast<char>(num) << "'" << std::endl;
		std::cout << "Int: " << static_cast<int>(num) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	} else if (command == 2) {
		//PRINTAR NUM COM VALOR NAO PRINTABLE
		std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << static_cast<int>(num) << std::endl;
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl;
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl;
	} else if (command == 3) {
		//PRINTAR INT MAX/MIN E NUN E INF
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(num) << 'f' << std::endl;
		std::cout << "Double: " << num << std::endl;
	} else if (command == 4) {
		std::cout << "Invalid input" << std::endl;
	}
}

int ScalarConverter::verif(const std::string paramF, double numV, char *endV) {
	if (paramF.size() == 1 && isprint(endV[0]) && !isdigit(paramF[0])) {
		return 0;
	} else if (isnan(numV) != 0 || isinf(numV) != 0) {
		if (endV[0] == '\0' || (endV[0] == 'f' && endV[1] == '\0')) {
			return 3;
		} else {
			return 4;
		}
	} else if (paramF.size() >= 1 && (numV <= -2147483648 || numV >= 2147483647) && ((endV[0] == 'f' && endV[1] == '\0') || endV[0] == '\0')) {
		return 3;
	} else if (isprint(numV) && paramF.size() >= 1 && (numV >= -2147483648 || numV <= 2147483647) && ((endV[0] == 'f' && endV[1] == '\0') || endV[0] == '\0')) {
		return 1;
	} else if (!isprint(numV) && paramF.size() >= 1 && (numV >= -2147483648 || numV <= 2147483647) && ((endV[0] == 'f' && endV[1] == '\0') || endV[0] == '\0')) {
		return 2;
	} else if (endV[0] != '\0') {
		return 4;
	}
	return 6;
}
//PRINTAR CHAR -> 0
//PRINTAR NUM COM VALOR PRINT -> 1
//PRINTAR NUM COM VALOR NAO PRINTABLE -> 2
//PRINTAR INT MAX/MIN E NUN E INF -> 3
//PRINTAR ERRO -> 4
