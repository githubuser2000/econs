#include "mode_toggle.h"
#include "bitmask.h"
#include <iostream>
#include <set>
#include <notMain567a.h>
#include <notMain567b.h>

void mode_toggle() {
    std::set<int> selected;

    while (true) {
        system("clear");
        for (int i = 3; i <= 9; ++i)
            std::cout << "[" << (selected.count(i) ? 'x' : ' ') << "] " << i << "\n";

        std::cout << "\n3-9 toggle | q = fertig: ";
        char c;
        std::cin >> c;

        if (c == 'q') break;
        if (c >= '3' && c <= '9') {
            int v = c - '0';
            if (selected.count(v)) selected.erase(v);
            else selected.insert(v);
        }
    }

    std::cout << "\nAuswahl: ";
    for (int n : selected) std::cout << n << " ";



    std::set<int> wsys567 = {5, 6, 7};
     // Schnittmenge bestimmen
    std::vector<int> schnittmenge;
    std::set<int> intersection;
    std::set_intersection(
        wsys567.begin(), wsys567.end(),
        selected.begin(), selected.end(),
        std::back_inserter(schnittmenge)
    );/*
    if (schnittmenge.size() == wsys567.size()) {
        std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
        start567a();
    } else {
        std::cout << "Nicht alle Elemente von {5,6,7} sind vorhanden.\n";
    }*/
    switch (static_cast<int>(schnittmenge.size() == wsys567.size())) {
    case 1:
        std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
        start567a();
        std::cout << "\n\n\n\n";
        start567b();
        break;
    case 0:
        std::cout << "Nicht alle Elemente von {5,6,7} sind vorhanden.\n";
        break;
}/*
switch (schnittmenge.size() == wsys567.size()) {
    case true:
        std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
        start567a();
        break;
    case false:
        std::cout << "Nicht alle Elemente von {5,6,7} sind vorhanden.\n";
        break;
}


if (std::includes(selected.begin(), selected.end(), wsys567.begin(), wsys567.end())) {
    std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
} else {
    std::cout << "Nicht alle Elemente von {5,6,7} sind vorhanden.\n";
}




std::cout << "\nDebug - selected: ";
for (int x : selected) std::cout << x << " ";
std::cout << "\n";




    std::cout << "\nBitmaske: " << toBitmask(selected) << "\n";*/
}
