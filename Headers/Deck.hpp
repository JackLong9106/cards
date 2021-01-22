#pragma once

#include "../Headers/Deck.hpp"
#include "../Headers/Card.hpp"

#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class Deck 
{
    private:
        std::vector<Card> cards; 

    public:
        //TODO Deconstructors
        Deck(std::string filePath);

        void print();
};