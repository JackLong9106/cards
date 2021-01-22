#include "../Headers/Card.hpp"
#include <stdexcept>

    Card::Card(const std::string suit, const int number){
        try {
            if(!this->checkCardValid(suit, number)){
                throw std::invalid_argument("ERROR: Tried to construct card with invalid arguments");
            }
        } catch(const std::invalid_argument& e) {
            
         }

        this->number = number;
        this->suit = suit;
    }

    void Card::print(){
        std::string cardNumber;

        if(this->number == 1){
            cardNumber = "Ace";
        } else if(this->number == 11){
            cardNumber = "Jack";
        } else if(this->number == 12){
            cardNumber = "Queen";
        } else if(this->number == 13){
            cardNumber = "King";
        } else {
            cardNumber = std::to_string(this->number);
        }

        std::cout << cardNumber << " of " << this->suit << "s. " << std::endl;
    }

    bool Card::checkCardValid(const std::string suit, const int number){
        if(number < 1 || number > 13){
            std::cout << "ERROR: number: " << number << ", is not valid." << std::endl;
            return false;
        } else if (!(suit == "spade" || suit == "heart" || suit == "club" || suit == "diamond")) {
            std::cout << "ERROR: suit: " << suit << ", is not valid." << std::endl;
            return false;
        } else {
            return true;
        }
    }