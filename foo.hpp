#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector<char> v;
    v.reserve(people.size());

    for(auto element = people.rbegin(); element != people.rend(); ++element){
        element->birthday();
        v.push_back(element->isMonster() ? 'n': 'y');
    }
    return v;
}
