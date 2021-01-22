#include "../Headers/Card.hpp"
#include "../Headers/Deck.hpp"

int main (int argc, char *argv[]) { 
    // Card* aceHeart = new Card("heart", 1);
    // aceHeart->print();
    
    Deck* deck = new Deck("Resources/deck.txt");
    deck->print();
}