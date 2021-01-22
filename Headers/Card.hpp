#pragma once

#include <string>
#include <iostream>

class Card 
{
    private:
        int number;
        std::string suit;

        bool checkCardValid(const std::string suit, const int number);

    public:
        //TODO Deconstructors
        Card(const std::string suit, const int number);

        void print();
};