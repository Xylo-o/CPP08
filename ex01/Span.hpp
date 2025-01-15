/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adprzyby <adprzyby@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 08:07:58 by adprzyby          #+#    #+#             */
/*   Updated: 2025/01/15 08:37:02 by adprzyby         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <exception>

class Span {
  public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span& other);
    ~Span();

    
    void addSpan(int value);
  private:
      unsigned int N;
};