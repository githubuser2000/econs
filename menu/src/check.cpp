#include "check.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <notMain567a.h>
#include <notMain567b.h>

void check(const std::set<int>& selected)
{
    std::set<int> wsys567 = {5, 6, 7};

    std::vector<int> schnittmenge;
    std::set_intersection(
        wsys567.begin(), wsys567.end(),
        selected.begin(), selected.end(),
        std::back_inserter(schnittmenge)
    );

    switch (static_cast<int>(schnittmenge.size() == wsys567.size())) {
        case 1:
            std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
            break;

        case 0:
        default:
            std::cout << "Nicht alle Elemente von {5,6,7} sind vorhanden.\n";
            break;
    }
}
