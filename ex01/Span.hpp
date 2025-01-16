/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:58 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/16 19:56:48 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

class Span {
  public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span& other);
    ~Span();

    void addNumber(int value);
	int shortestSpan();
	int longestSpan();
  private:
      unsigned int size;
	  std::vector<int> numbers;
};