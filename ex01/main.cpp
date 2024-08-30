/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:18:48 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/28 18:18:49 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main() {
	// Criar uma instância de Data
	Data myData;
	myData.iNum = 10;  // Atribuindo um valor à estrutura
	myData.value = "Deserialization is dangerous";  // Atribuindo um valor à estrutura

	std::cout << "Before serialize: " << myData.iNum << std::endl;
	std::cout << "Before serialize: " << myData.value << std::endl;

	// Serializar o ponteiro para Data
	uintptr_t serializedData = Serialization::serialize(&myData);
	std::cout << "Serialize pointer: " << serializedData << std::endl;

	// Desserializar o uintptr_t de volta para um ponteiro Data*
	Data* deserializedData = Serialization::deserialize(serializedData);
	std::cout << "Deserialized value: " << deserializedData->iNum << std::endl;
	std::cout << "Deserialized value: " << deserializedData->value << std::endl;

	// Verificar se o ponteiro desserializado é o mesmo que o original
	if (deserializedData == &myData) {
		std::cout << "Pointers match. Deserialization concluded!" << std::endl;
	} else {
		std::cout << "Error: Pointers don't match." << std::endl;
	}

	return 0;
}