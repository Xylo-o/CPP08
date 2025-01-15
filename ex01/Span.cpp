/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:46 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 08:37:06 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

Span::Span(const Span &other) : N(other.N) {}

Span &Span::operator=(const Span &other) {
    if (this == &other) {
        return *this;
    }
    N = other.N;
    return *this;
}

Span::~Span() {}

void addSpan(int value) {
    try {
        
    } catch (std::exception &e) {
        
    }
}