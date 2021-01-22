#include "../Headers/Deck.hpp"

#include <sstream>
#include <algorithm>
#include <ctime>

Deck::Deck(const std::string filePath){
    std::string line;
    std::ifstream file(filePath);

    if(file.is_open()){
        std::cout << "Opened file at: " << filePath << " successfully." << std::endl;

        while(getline(file, line)){
            std::istringstream stringStream(line);
            std::string suit, number;

            stringStream >> suit;
            stringStream >> number;
            int numStoi = stoi(number);
            
            this->cards.push_back(Card(suit, numStoi));
            // cards.back().print();
        }
    }

    file.close();

    std::cout << "Deck Constructed: This deck contains: " << this->cards.size() << " cards."<< std::endl;

} 

void Deck::shuffle(){
    std::random_shuffle(this->cards.begin(), this->cards.end());
}

Card * Deck::getTop(){
    return &cards[0];
}

Card * Deck::getRandom(){
    srand((unsigned) time(0));

    return &cards[(rand() % this->cards.size())];
}

void Deck::print(){
    std::cout << "The order of this deck in order of top to bottom is as follows." << std::endl;

    for(int i = 0; i < cards.size(); i++){
        std::cout << "Card " << i << ": ";
        cards[i].print();
    }

    std::cout << "Finished printing deck." << std::endl;
}