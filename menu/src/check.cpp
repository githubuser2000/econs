#include "check.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <notMain567a.h>
#include <notMain567b.h>

void check(const std::set<int>& selected)
{
 int mask = 0;
for (int x : selected) {
    if (x == 1) mask |= 1;
    if (x == 2) mask |= 2;
    if (x == 3) mask |= 4;
    if (x == 4) mask |= 8;
    if (x == 5) mask |= 16;
    if (x == 6) mask |= 32;
    if (x == 7) mask |= 64;
    if (x == 8) mask |= 128;
}
switch (mask) {
    case 0b11100000:   // {5,6,7}
        std::cout << "5 6 7 vorhanden\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
        break;

    case 0b01110000:   // {5,6}
        std::cout << "6 7 8 vorhanden\n";
        break;

    case 0b101:   // {5,7}
        std::cout << "{5,7} vorhanden\n";
        break;

    case 0b010:   // nur {6}
        std::cout << "Nur 6 vorhanden\n";
        break;

    default:
        std::cout << "Keine relevante Kombination\n";
}


}








/*

std::set<int> s1 = {5,6};
std::set<int> s2 = {5,6,7};
std::set<int> s3 = {6,7,8};

auto contains = [&](const std::set<int>& ref) {
    return std::includes(selected.begin(), selected.end(),
                         ref.begin(), ref.end());
};

switch (selected) {
    case true && contains(s3):
        std::cout << "Alle 3\n";
        break;

    case true && contains(s1):
            std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
            break;
        break;

    case true && contains(s2):
        std::cout << "{6,7,8}\n";
        break;

    default:
        std::cout << "keine bekannte Kombi\n";
}
}*/
