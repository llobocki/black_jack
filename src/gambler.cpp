//
//
//
//#include "gambler.h"
//#include "iostream"
//
//
//
//Gambler::Gambler()
//{
//    bankroll = 0;
//}
//
//
//int Gambler::get_bankroll() const
//{
//    return bankroll;
//}
//
//
//void Gambler::create_field(int i, const int bet)
//{
//    Player p(bet);
//    for (int j = 0; j < i; ++j) {
//        fields.push_back(p);
//    }
//}
//
//void Gambler::loose(int bet)
//{
//    std::cout << "porażka\n";
//    bankroll -= bet;
//}
//
//void Gambler::win(int bet)
//{
//    std::cout << "zwycięstwo\n";
//    bankroll += bet;
//}
//
//void Gambler::push()
//{
//    std::cout << "remis\n";
//}
//
//void Gambler::loose_no_print(int bet)
//{
//    bankroll -= bet;
//
//}
//
//void Gambler::win_no_print(int bet)
//{
//    bankroll += bet;
//}
//
//void Gambler::push_no_print()
//{
//
//}
//
//
//
//
//void Gambler::result(const Dealer dealer)
//{
//    for (int j = 0; j < fields.size(); ++j) {
//        if (fields[j].get_black_jack() == true && dealer.get_black_jack() == true)
//            push();
//        else if (fields[j].get_black_jack() == true && dealer.get_black_jack() == false)
//            win(fields[j].get_bet()*3/2);
//        else if (dealer.get_black_jack() == true) {
//            loose(fields[j].get_bet());
////             std::cout << "krupier black jack\n";
//        }
//        else if (fields[j].get_cards() > 21)
//            loose(fields[j].get_bet());
//        else if (dealer.get_cards() > 21)
//            win(fields[j].get_bet());
//        else if (dealer.get_cards() < fields[j].get_cards())
//            win(fields[j].get_bet());
//        else if (dealer.get_cards() > fields[j].get_cards())
//            loose(fields[j].get_bet());
//        else
//            push();
//
//// 	std::cout << "twój bankroll: " <<
////         hands++;
//    }
//
//    std::cout << '\n';
//
//}
//
//void Gambler::result_no_print(const Dealer dealer, int& hands)
//{
//    for (int j = 0; j < fields.size(); ++j) {
//        if (fields[j].get_black_jack() == true && dealer.get_black_jack() == true)
//            push_no_print();
//        else if (fields[j].get_black_jack() == true && dealer.get_black_jack() == false)
//            win_no_print(fields[j].get_bet()*3/2);
//        else if (dealer.get_black_jack() == true) {
//            loose_no_print(fields[j].get_bet());
////             std::cout << "krupier black jack\n";
//        }
//        else if (fields[j].get_cards() > 21)
//            loose_no_print(fields[j].get_bet());
//        else if (dealer.get_cards() > 21)
//            win_no_print(fields[j].get_bet());
//        else if (dealer.get_cards() < fields[j].get_cards())
//            win_no_print(fields[j].get_bet());
//        else if (dealer.get_cards() > fields[j].get_cards())
//            loose_no_print(fields[j].get_bet());
//        else
//            push_no_print();
//        hands++;
//    }
//}
//
//
//
//void Gambler::reset()
//{
//    fields.clear();
//    ;
//}
//
//void Gambler::one_card_normal(std::vector< Card >& deck, int& counter)
//{
//    for (int j = 0; j<fields.size(); ++j)
//        fields[j].add(deck[counter++]);
//}
//
//
//void Gambler::one_card_basic(std::vector< Card >& deck, int& counter)
//{
//    for (int j = 0; j<fields.size(); ++j)
//        fields[j].add_basic(deck[counter++]);
//}
//
//void Gambler::one_card_hi_low_I(std::vector< Card >& deck, int& counter, int& actual)
//{
//    for (int j = 0; j<fields.size(); ++j)
//        fields[j].add_hi_low_I(deck[counter++],actual);
//}
//
//
//
//void Gambler::print()
//{
//    for (int j = 0; j < fields.size(); ++j)
//        fields[j].print();
//}
//
//int Gambler::size()
//{
//    return fields.size();
//}
//
//void Gambler::get_black_jack()
//{
//    for (int j = 0; j < fields.size(); ++j) {
//
//    }
//}
//
//bool Gambler::check_black_jack()
//{
//    bool check = true;
//    for(int j = 0; j < fields.size(); ++j) {
//        if (fields[j].get_black_jack() == false)
//            check = false;
//        break;
//    }
//    return check;
//}
//
//void Gambler::game_gambler_normal(std::vector< Card >& deck, const Dealer dealer, int& counter)
//{
//    for (int j = 0; j < fields.size(); ++j) {
//
//
//        char bufor;
//        bool out = false;
//
//
//
//        while (fields[j].get_cards() < 21 && out == false) {
//
//
//            if(fields[j].get_size() == 1) {
//                fields[j].add(deck[counter++]);
//                fields[j].print();
//
//            }
//            //					gra właściwa
//            std::cout << "twój ruch:\nf\t-\tkarta\nd\t-\tdouble\ns\t-\tstand\na\t-\tsplit\n";
//            std::cin >> bufor;
//
//
//            /**********************************************
//             * 		kalkulator
//            *
//            * 			basic strategy
//             * **************************************/
////             if(fields[j].can_split()) {
////                 if(fields[j].split_aces()) {
////                     bufor = Basic_strategy::move_split(2, dealer.get_cards());
////                 }
////                 else
////                     bufor = Basic_strategy::move_split(fields[j].get_cards(), dealer.get_cards());
////             }
////             else if (fields[j].ace_soft()) {
////                 bufor = Basic_strategy::move_ace(fields[j].get_cards(), dealer.get_cards());
////             }
////             else
////                 bufor = Basic_strategy::move_normal(fields[j].get_cards(), dealer.get_cards());
//
//            /*************************************************************/
//
//
//
//            /**********************************************
//             * 		kalkulator
//            *
//            * 			Hi low
//             * **************************************/
////             if(fields[j].can_split()) {
////                 if(fields[j].split_aces()) {
////                     bufor = Hi_low_I::move_split(2, dealer.get_cards(),((actual*actual)/nr_decks));
////                 }
////                 else
////                     bufor = Hi_low_I::move_split(fields[j].get_cards(), dealer.get_cards(),((actual*actual)/nr_decks));
////             }
////             else if (fields[j].ace_soft()) {
////                 bufor = Hi_low_I::move_ace(fields[j].get_cards(), dealer.get_cards(),((actual*actual)/nr_decks));
////             }
////             else
////                 bufor = Hi_low_I::move_normal(fields[j].get_cards(), dealer.get_cards(),((actual*actual)/nr_decks));
//
//            /*************************************************************/
//
//
//            switch(bufor) {
//            case 'h' : {	//hit
//                fields[j].add(deck[counter++]);
//                fields[j].print();
//                break;
//            }
//            case 'd': {		//double
//                if (fields[j].get_size() == 2) {
//                    std::cout << "double - tylko jedna karta\n";
//                    fields[j].double_bet();
//                    fields[j].add(deck[counter++]);
//                    fields[j].print();
//                    out = true;
//                }
//                else {
//                    std::cout << "double jest możliwy tylko gdy masz dwie karty\n"; //gra właściwa
//
//
//                    fields[j].add(deck[counter++]);		//do kalkulatora
//                    fields[j].print();
//
//                }
//                break;
//            }
//            case 's': {			//stand
//                std::cout << "bez kart\n";
//                out = true;
//                break;
//            }
//            case 'a' : {	//split
//
//
//                if(fields[j].can_split() == true) {
//
//                    std::cout << "split\n";
//
//                    if(fields[j].split_aces()) {
//                        std::cout << "split asów - jeden split, jedna karta, bez black jacka\n";
//
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add(c);
//                        fields[j+1].set_split();
//
//                        fields[j].add(deck[counter++]);
//                        fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//                        j++;
//
//                        fields[j].add(deck[counter++]);
//                        fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//
//                    }
//                    else {
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add(c);
//                        fields[j+1].set_split();
//
//
//
//                    }
//                    break;
//                }
//                else
//                    std::cout << "nie możesz już splitować kart\n";
//                break;
//            }
//            case 'g' : {
//
//                break;
//            }
//            default: {
//                std::cout << "zła wartość\n";
//                break;
//            }
//            }
//        }
//    }
//    /********************************************************
//    	automat - gra jak krupier
//    *********************************************************/
////         while(fields[j].get_cards() < 17) {
////             fields[j].add(deck[counter++]);
////             fields[j].print();
////         }
////     }
//    /**********************************************************/
//}
//
//void Gambler::game_gambler_basic(std::vector< Card >& deck, const Dealer dealer, int& counter, const int nr_decks)
//{
//    for (int j = 0; j < fields.size(); ++j) {
//
//
//        char bufor;
//        bool out = false;
//
//
//
//        while (fields[j].get_cards() < 21 && out == false) {
//
//
//            if(fields[j].get_size() == 1) {
//                fields[j].add_basic(deck[counter++]);
//            }
//
//
//            if(fields[j].can_split()) {
//                if(fields[j].split_aces()) {
//                    bufor = Basic_strategy::move_split(2, dealer.get_cards());
//                }
//                else
//                    bufor = Basic_strategy::move_split(fields[j].get_cards(), dealer.get_cards());
//            }
//            else if (fields[j].ace_soft()) {
//                bufor = Basic_strategy::move_ace(fields[j].get_cards(), dealer.get_cards());
//            }
//            else
//                bufor = Basic_strategy::move_normal(fields[j].get_cards(), dealer.get_cards());
//
//
//            switch(bufor) {
//            case 'f' : {	//hit
//                fields[j].add_basic(deck[counter++]);
////                 fields[j].print();
//                break;
//            }
//            case 'd': {		//double
//                if (fields[j].get_size() == 2) {
////                   std::cout << "double - tylko jedna karta\n";
//                    fields[j].double_bet();
//                    fields[j].add_basic(deck[counter++]);
////                     fields[j].print();
//                    out = true;
//                }
//                else {
////                     std::cout << "double jest możliwy tylko gdy masz dwie karty\n"; //gra właściwa
//
//
//                    fields[j].add_basic(deck[counter++]);		//do kalkulatora
////                     fields[j].print();
//
//                }
//                break;
//            }
//            case 's': {			//stand
////                 std::cout << "bez kart\n";
//                out = true;
//                break;
//            }
//            case 'a' : {	//split
//
//
//                if(fields[j].can_split() == true) {
//
//// 		  std::cout << "split\n";
//
//                    if(fields[j].split_aces()) {
////                         std::cout << "split asów - jeden split, jedna karta, bez black jacka\n";
//
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add_basic(c);
//                        fields[j+1].set_split();
//
//                        fields[j].add_basic(deck[counter++]);
////                         fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//                        j++;
//
//                        fields[j].add_basic(deck[counter++]);
////                         fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//
//                    }
//                    else {
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add_basic(c);
//                        fields[j+1].set_split();
//
//
//
//                    }
//                    break;
//                }
//                else
//// //                     std::cout << "nie możesz już splitować kart\n";
//                    break;
//            }
//            case 'g' : {
//
//                break;
//            }
//            default: {
//                std::cout << "zła wartość\n";
//                break;
//            }
//            }
//        }
//    }
//}
//
//void Gambler::game_gambler_hi_low_I(std::vector< Card >& deck, const Dealer dealer, int& counter, int& actual, const int nr_decks)
//{
//    for (int j = 0; j < fields.size(); ++j) {
//
//
//        char bufor;
//        bool out = false;
//
//
//
//        while (fields[j].get_cards() < 21 && out == false) {
//
//
//            if(fields[j].get_size() == 1) {
//                fields[j].add_hi_low_I(deck[counter++],actual);
//            }
//            if(fields[j].can_split()) {
//                if(fields[j].split_aces()) {
//                    bufor = Hi_low_I::move_split(2, dealer.get_cards(),(((actual*counter)/(nr_decks*52))));
//                }
//                else
//                    bufor = Hi_low_I::move_split(fields[j].get_cards(), dealer.get_cards(),(((actual*counter)/(nr_decks*52))));
//            }
//            else if (fields[j].ace_soft()) {
//                bufor = Hi_low_I::move_ace(fields[j].get_cards(), dealer.get_cards(),(((actual*counter)/(nr_decks*52))));
//            }
//            else
//                bufor = Hi_low_I::move_normal(fields[j].get_cards(), dealer.get_cards(),(((actual*counter)/(nr_decks*52))));
//
//            switch(bufor) {
//            case 'f' : {	//hit
//                fields[j].add_hi_low_I(deck[counter++],actual);
////                 fields[j].print();
//                break;
//            }
//            case 'd': {		//double
//                if (fields[j].get_size() == 2) {
////                   std::cout << "double - tylko jedna karta\n";
//                    fields[j].double_bet();
//                    fields[j].add_hi_low_I(deck[counter++],actual);
////                     fields[j].print();
//                    out = true;
//                }
//                else {
////                     std::cout << "double jest możliwy tylko gdy masz dwie karty\n"; //gra właściwa
//
//
//                    fields[j].add_hi_low_I(deck[counter++],actual);		//do kalkulatora
////                     fields[j].print();
//
//                }
//                break;
//            }
//            case 's': {			//stand
////                 std::cout << "bez kart\n";
//                out = true;
//                break;
//            }
//            case 'a' : {	//split
//
//
//                if(fields[j].can_split() == true) {
//
//// 		  std::cout << "split\n";
//
//                    if(fields[j].split_aces()) {
////                         std::cout << "split asów - jeden split, jedna karta, bez black jacka\n";
//
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add_basic(c);	//rozbijamy karty bez aktualizowania wartości bieżącej
//                        fields[j+1].set_split();
//
//                        fields[j].add_hi_low_I(deck[counter++],actual);
////                         fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//                        j++;
//
//                        fields[j].add_hi_low_I(deck[counter++],actual);
////                         fields[j].print();
//                        if(fields[j].get_cards() == 21)
//                            fields[j].only_21();
//
//
//                    }
//                    else {
//                        Player p;
//                        fields.insert((fields.begin()+j+1), p); 		//rozbicie pól
//
//                        Card c = fields[j].back_card();		//utworzenie nowej karty
//
//
//                        fields[j+1].add_hi_low_I(c,actual);
//                        fields[j+1].set_split();
//
//
//
//                    }
//                    break;
//                }
//                else
////                     std::cout << "nie możesz już splitować kart\n";
//                    break;
//            }
//            case 'g' : {
//
//                break;
//            }
//            default: {
//                std::cout << "zła wartość\n";
//                break;
//            }
//            }
//        }
//    }
//}
//
//
//bool Gambler::too_many()
//{
//    bool check = true;
//    for (int k = 0; k < fields.size(); ++k) {
//        if (fields[k].get_cards() < 22) {
//            check = false;
//        }
//        if(check == false)   break;
//
//    }
//    return check;
//}
//
//void Gambler::set_bankroll(int i)
//{
//
//}
//
//void Gambler::double_card(std::vector<Card> &deck, int &counter, const int i, bool &out, int &actual)
//{
//    fields[i].add(deck[counter++]);
////     fields[i].print();
//    out = true;
//}
//
