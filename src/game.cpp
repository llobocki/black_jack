//#include "game.h"
//
//#include "fstream"
//#include "stdlib.h"
//
//
//
//void start(std::vector<Card> &deck, int & nr_decks) {	//wypełnienie buta
////     int x = 6;
////     std::cout << "Podaj liczbę decków:\n";		//gra właściwa;
//// //     std::cin >> x;
//
//    Card::Color c = Card::clubs;
//    Card::Value v = Card::A;
//    for (int h = 0; h < nr_decks; ++h)
//        for (int i = 1; i < 5; ++i)
//            for (int j = 1; j < 14; ++j)
//                deck.push_back(Card(c=Card::Color(i),v=Card::Value(j)));
//
//
//}
//
//void shuffle(std::vector<Card> &deck) {	//tasowanie kart
//    std::srand(std::time(0));
//    std::random_shuffle(deck.begin(),deck.end());
//
//
//    /**********************************
//     * plik z kartami
//     *********************************/
////     std::string nazwa = "dane";
////     std::ofstream ost(nazwa.c_str());
////     for (int h = 0; h < deck.size(); ++h)
////         ost << deck[h].get_value() << '\n';
//    /*********************************************/
//
//}
//
//
//void dealer_game_normal(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter);
//
//void dealer_game_basic(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter);
//
//void dealer_game_hi_low_I(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter, int& actual);
//
//
//// void player_game(std::vector< Card >& deck, Gambler& gambler, int& counter);
//
//void start_hand_normal(std::vector< Card >& deck, Dealer& dealer, Gambler &gambler, int &counter, const int end) {
//
//    int nr_fields = 0 	; //kalkulator
//    int bet = 10;
//
//    std::cout << "podaj ilość pól:\n";
//    std::cin >>nr_fields;
//
////     int card_counting = 0;
//
//    while (counter < end) {
////						gra właściwa
//
//
////         std::cout << "podaj ilość pól:\n";
////         std::cin >>nr_fields;
//
//
//
//
//        if(nr_fields == 0) {
//
//            break;
//        }
//        else {
////             			gra właściwa
//            std::cout << "podaj bet:\n";
//            std::cin >> bet;
////
//            dealer.reset();
//
//            gambler.reset();
//
//            gambler.create_field(nr_fields, bet);
//
//
//            gambler.one_card_normal(deck,counter);
//
//            dealer.add(deck[counter++]);
//
//            gambler.one_card_normal(deck,counter);
//
//            gambler.print();
//
//            dealer.print();
//
//
//            //należy dopracować even money i insurance
//
//            if (gambler.check_black_jack() ==  true) {	//sprawdzenie black jacków graca i odpowiednie zachowanie krupiera
//                if (dealer.get_cards()==1 || dealer.get_cards()==10) {
//
//                    dealer.add(deck[counter++]);
//
//                }
//
//
//            }
//            else {
//                gambler.game_gambler_normal(deck, dealer, counter);	//w przeciwnym wypadku standardowa gra
//                dealer_game_normal(deck, dealer, gambler, counter);
//
//            }
//
//            gambler.result(dealer);
//        }
//
//    }
//}
//
//void start_hand_basic(std::vector< Card >& deck, Dealer& dealer, Gambler &gambler, int &counter, const int end, int & hands, const int nr_decks, const int & boxes) {
//    int nr_fields = boxes 	; //kalkulator
//    int bet = 10;
//
//
////     int card_counting = 0;
//
//    while (counter < end) {
////						gra właściwa
////       std::cout << "podaj ilość pól:\n";
////       std::cin >>nr_fields;
//
//
//
//
//        if(nr_fields == 0) {
//
//            break;
//        }
//        else {
//            //			gra właściwa
//// 	std::cout << "podaj bet:\n";
//// 	std::cin >> bet;
////
//            dealer.reset();
//
//            gambler.reset();
//
//            gambler.create_field(nr_fields, bet);
//
//
//            gambler.one_card_basic(deck,counter);
//
//            dealer.add_basic(deck[counter++]);
//
//            gambler.one_card_basic(deck,counter);
//
////             gambler.print();
//
////             dealer.print();
//
//
//            //należy dopracować even money i insurance
//
//            if (gambler.check_black_jack() ==  true) {	//sprawdzenie black jacków graca i odpowiednie zachowanie krupiera
//                if (dealer.get_cards()==1 || dealer.get_cards()==10) {
//
//                    dealer.add_basic(deck[counter++]);
//
//                }
//
//
//            }
//            else {
//                gambler.game_gambler_basic(deck, dealer, counter, nr_decks);	//w przeciwnym wypadku standardowa gra
//                dealer_game_basic(deck, dealer, gambler, counter);
//
//            }
//
//            gambler.result_no_print(dealer, hands);
//        }
//
//    }
//}
//
//void start_hand_hi_low_I(std::vector< Card >& deck, Dealer& dealer, Gambler &gambler, int &counter, const int end, int &hands, int & actual, const int nr_decks, const int & boxes) {
//    int nr_fields = boxes 	; //kalkulator
//    int bet = 10;
//
//    if((((actual*counter)/(nr_decks*52))) > 1) bet *= ((((actual*counter)/(nr_decks*52)))*10);		//bankroll managment
////     else if(((actual*counter)/(nr_decks*52)) < 0) bet /= ((((actual*counter)/(nr_decks*52)))* (-1));
//
////     int card_counting = 0;
//
//    while (counter < end) {
////						gra właściwa
////       std::cout << "podaj ilość pól:\n";
////       std::cin >>nr_fields;
//
//
//
//
//        if(nr_fields == 0) {
//
//            break;
//        }
//        else {
//            //			gra właściwa
//// 	std::cout << "podaj bet:\n";
//// 	std::cin >> bet;
////
//            dealer.reset();
//
//            gambler.reset();
//
//            gambler.create_field(nr_fields, bet);
//
//
//            gambler.one_card_hi_low_I(deck,counter,actual);
//
//            dealer.add_hi_low_I(deck[counter++], actual);
//
//            gambler.one_card_hi_low_I(deck,counter, actual);
//
////             gambler.print();
//
////             dealer.print();
//
//
//            //należy dopracować even money i insurance
//
//            if (gambler.check_black_jack() ==  true) {	//sprawdzenie black jacków graca i odpowiednie zachowanie krupiera
//                if (dealer.get_cards()==1 || dealer.get_cards()==10) {
//
//                    dealer.add_hi_low_I(deck[counter++], actual);
//
//                }
//
//
//            }
//            else {
//                gambler.game_gambler_hi_low_I(deck, dealer, counter,actual, nr_decks);	//w przeciwnym wypadku standardowa gra
//                dealer_game_hi_low_I(deck, dealer, gambler, counter, actual);
//
//            }
//
//
////     gambler.print();
////     std::cout << "bankroll: " << gambler.get_bankroll() << '\n';
////     dealer.print();
////     std::cout << "wartość rzeczywista: " << (((actual*counter)/(nr_decks*52))) << "\nwartość bieżąca: " << actual << '\n';
//
//            gambler.result_no_print(dealer, hands);
//        }
//
//    }
//}
//
//void dealer_game_normal(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter) {
//    if (gambler.too_many() == true)
//        return;
//    else
//        while (dealer.get_cards() < 17) {
//            dealer.add(deck[counter++]);
//
//            dealer.print();
//        }
////     dealer.print();
//}
//
//void dealer_game_basic(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter)
//{
//    if (gambler.too_many() == true)
//        return;
//    else
//        while (dealer.get_cards() < 17) {
//            dealer.add_basic(deck[counter++]);
//
////             dealer.print();
//        }
////     dealer.print();
//}
//
//void dealer_game_hi_low_I(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler, int& counter, int& actual)
//{
//    if (gambler.too_many() == true)
//        return;
//    else
//        while (dealer.get_cards() < 17) {
//            dealer.add_hi_low_I(deck[counter++], actual);
//        }
//}
//
//
//
//void game(std::vector< Card >& deck, Dealer& dealer, Gambler& gambler)
//{
//
//    int counter = 0; //licznik dla kart
//
//    int all_games = 0; //liczba butów do przeliczenia / liczba planowanych gier
//    int nr_game = 0;	//but pierwszy
//
////     int cards_counting = 0;
//    int actual = 0; //wartość bieżąca
////     int real = 0;
//
//    int nr_decks = 6;	//ilość talii kart w bucie
//
//    start(deck, nr_decks);//wypełnienie buta kartami
//
//    int end = deck.size()*2/3; //koniec buta - około 2/3
//
//    int hands = 0; //ilość rozegranych rąk
//
//    char mode_game; //wybór trybu gry - zwykła lub kalkulator
//
//    int boxes = 0;
//
//
//
//    std::cout << "podaj tryb gry:\ng - gra zwykła\nb - kalkulator basic strategy\nh - kalkulator hi low I\n";
//    std::cin >> mode_game;
//
//    std::cout << "podaj liczbę gier:\n";		//gra właściwa
//    std::cin >> all_games;
//
////     std::cout << "poda ilość pól\n";
////     std::cin >> nr_fields;
//
//    switch(mode_game) {
//    case 'g': {
////         std::cout << "podaj liczbę gier:\n";		//gra właściwa
////         std::cin >> all_games;
//
//        while (nr_game ++ < all_games) {	//pętla but przez ilość butów
//            shuffle(deck);	//tasowanie buta
//            counter = 0; //zerowanie licznika kartam
//// 	cards_counting = 0;
//            actual = 0; //zerowanie wartości bieżącej
//            start_hand_normal(deck,dealer,gambler,counter,end);
//        }
//        std::cout << "\nwynik gracza:\t" << gambler.get_bankroll() << '\n';
////             std::cout << "wygrane stawki: " <<  gambler.get_bankroll()/10 << "\nzwrot na but: " << (double)(gambler.get_bankroll()/10)/all_games << "\nilość rąk: " << (hands) << '\n';
////             std::cout << "średnia wygrana na ręke: " << (double)(gambler.get_bankroll()*10)/hands << " %\n";
//
//
//        break;
//    }
//
//    case 'b': {	//basic strategy
//        std::cout << "podaj ilość boxów:\n";		//gra właściwa
//        std::cin >> boxes;
//
//        while (nr_game ++ < all_games) {	//pętla but przez ilość butów
//            shuffle(deck);	//tasowanie buta
//            counter = 0; //zerowanie licznika kartam
//// 	cards_counting = 0;
//            actual = 0; //zerowanie wartości bieżącej
//            start_hand_basic(deck,dealer,gambler,counter,end, hands, nr_decks, boxes);
//        }
//
//        std::cout << "wygrane stawki: " <<  gambler.get_bankroll()/10 << "\nzwrot na but: " << (double)(gambler.get_bankroll()/10)/all_games << "\nilość rąk: " << (hands) << '\n';
//        std::cout << "średnia wygrana na ręke: " << (double)(gambler.get_bankroll()*10)/hands << " %\n";
//        break;
//    }
//
//    case 'h': {	//hi low I
//        std::cout << "podaj ilość boxów:\n";		//gra właściwa
//        std::cin >> boxes;
//
//        while (nr_game ++ < all_games) {	//pętla but przez ilość butów
//            shuffle(deck);	//tasowanie buta
//            counter = 0; //zerowanie licznika kartam
//// 	cards_counting = 0;
//            actual = 0; //zerowanie wartości bieżącej
//            start_hand_hi_low_I(deck,dealer,gambler,counter,end, hands, actual, nr_decks, boxes);
//        }
//
//        std::cout << "wygrane stawki: " <<  gambler.get_bankroll()/10 << "\nzwrot na but: " << (double)(gambler.get_bankroll()/10)/all_games << "\nilość rąk: " << (hands) << '\n';
//        std::cout << "średnia wygrana na ręke: " << (double)(gambler.get_bankroll()*10)/hands << " %\n";
//
//        break;
//    }
//    default: {
//        std::cout << "niepoprwana wartość - koniec gry\n";
//        exit(1);
//        break;
//    };
//    }
//
//
////     std::cout << "podaj liczbę gier:\n";		//gra właściwa
////     std::cin >> nr_game;
////
////     while (nr_game ++ < all_games) {	//pętla but przez ilość butów
////         shuffle(deck);	//tasowanie buta
////         counter = 0; //zerowanie licznika kartam
//// // 	cards_counting = 0;
////         actual = 0; //zerowanie wartości bieżącej
////         start_hand_normal(deck,dealer,gambler,counter,end, hands, actual, nr_decks);
////     }
////
////     std::cout << "wygrane stawki: " <<  gambler.get_bankroll()/10 << "\nzwrot na but: " << (double)(gambler.get_bankroll()/10)/all_games << "\nilość rąk: " << (hands) << '\n';
////     std::cout << "średnia wygrana na ręke: " << (double)(gambler.get_bankroll()*10)/hands << " %\n";;
//
//}
//
