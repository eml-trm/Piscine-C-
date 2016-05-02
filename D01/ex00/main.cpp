/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 13:44:03 by etermeau          #+#    #+#             */
/*   Updated: 2015/06/16 13:44:05 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony    *ponyOnTheHeap(void)
{
    Pony*    HeapPony = new Pony("FluffyOnHeap", "white", "poop rainbow");

    return (HeapPony) ;
}

Pony    ponyOnTheStack(void)
{
    Pony    stackPony = Pony("WendyOnStack", "black", "oversleep");

    return (stackPony);
}

int main()
{
    Pony    *heapPony = ponyOnTheHeap();
    Pony    stackPony = ponyOnTheStack();

    delete heapPony;
    std::cout << "Ho no! Your ponyOnTheheap is died while the program is completed.";
    std::cout << std::endl;
    std::cout << "I am so sad that preferred to leave..." << std::endl;
    return (0);
}