/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:58 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/24 14:29:56 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>
#include <initializer_list>

class Span {
  public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span& other);
    ~Span();

    void addNumber(int value);
	void addNumbers(std::initializer_list<int> values);
	int shortestSpan();
	int longestSpan();
  private:
      unsigned int size;
	  std::vector<int> numbers;
};