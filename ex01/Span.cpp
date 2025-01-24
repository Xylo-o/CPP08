/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:46 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/24 14:17:00 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "Colors.hpp"

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span &other) : size(other.size) {}

Span &Span::operator=(const Span &other) {
    if (this == &other) {
        return *this;
    }
	numbers = other.numbers;
    size = other.size;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value) {
    if (numbers.size() >= size) {
		throw std::out_of_range("Span is full!");
	}
	else {
		numbers.push_back(value);
		std::cout << GREEN << "Item added successfully: " << NC << value << std::endl;
	}
}

void Span::addNumbers(std::initializer_list<int> values) {
	for (int value : values) {
		if (numbers.size() >= size) {
			throw std::out_of_range("Span is full!");
		}
		numbers.push_back(value);
		std::cout << GREEN << "Item added successfully: " << NC << value << std::endl;
	}
}

int Span::shortestSpan() {
	int shortest = INT_MAX;
	if (numbers.size() <= 1) {
		throw std::runtime_error("The span is impossible to assess!");
	}
	for (std::vector<int>::iterator it1 = numbers.begin(); it1 != numbers.end(); ++it1) {
		for (std::vector<int>::iterator it2 = it1 + 1; it2 != numbers.end(); ++it2) {
			int span = std::abs(*it2 - *it1);
			if (span < shortest) {
				shortest = span;
			}
		}
	}
	return shortest;
}

int Span::longestSpan() {
	int smallest = INT_MAX;
	int biggest = 0;
	if (numbers.size() <= 1) {
		throw std::runtime_error("The span is impossible to assess!");
	}
	for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
		int current = *it;
		if (current > biggest) {
			biggest = current;
		}
		if (current < smallest) {
			smallest = current;
		}
	}
	return (biggest - smallest);
}
