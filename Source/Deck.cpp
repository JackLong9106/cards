#include "../Headers/Deck.hpp"

#include <sstream>

Deck::Deck(std::string filePath){
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

void Deck::print(){
    std::cout << "The order of this deck in order of top to bottom is as follows." << std::endl;
    for(int i = 0; i < cards.size(); i++){
        std::cout << "Card " << i << ": ";
        cards[i].print();
    }
}