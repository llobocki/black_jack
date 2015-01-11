//
//
//#include "hi_low_i.h"
//#include "iostream"
//
//namespace Hi_low_I {
//
//char d_hit = 'f';
//char d_dou = 'd';
//char d_sta = 's';
//char d_spl = 'a';
//
//
//const Decision_adv tab_normal[16][10]
//{
////	 	2		3		4		5		6	  	7	   	 8			9		10		ace
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //5
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//6
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_dou,5,d_hit}, {d_dou,3,d_hit}, {d_dou,1,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//8
//    {{d_dou,1,d_hit}, {d_dou,-1,d_hit},{d_dou,-3,d_hit},{d_dou,-5,d_hit},{d_dou,0,d_dou}, {d_dou,3,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //9
//    {{d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,-5,d_hit},{d_dou,-2,d_hit},{d_dou,4,d_hit}, {d_hit,0,d_hit}},//10
//    {{d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,-5,d_hit},{d_dou,-5,d_hit},{d_hit,0,d_hit}},
//    {{d_sta,3,d_hit}, {d_sta,2,d_hit}, {d_sta,0,d_sta}, {d_sta,-2,d_hit},{d_sta,-1,d_hit},{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//12
//    {{d_sta,-1,d_hit},{d_sta,-2,d_hit},{d_sta,-4,d_hit},{d_sta,-5,d_hit},{d_sta,-5,d_hit},{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_hit,-4,d_sta},{d_hit,-5,d_sta},{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_sta,4,d_hit}, {d_hit,0,d_hit}},//15
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_sta,5,d_hit}, {d_sta,0,d_hit}, {d_hit,0,d_hit}},//16
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},//17
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},//18
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},//19
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},//20
//};
//
//const Decision_adv tab_soft_ace[8][10]
//{
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_dou,3,d_hit}, {d_dou,0,d_hit}, {d_dou,-2,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//13
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_dou,1,d_hit}, {d_dou,-2,d_hit},{d_dou,-5,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,-1,d_dou},{d_hit,-5,d_dou},{d_dou,0,d_dou},  {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//15
//    {{d_hit,0,d_hit}, {d_dou,4,d_hit}, {d_dou,-3,d_hit},{d_dou,0,d_dou}, {d_dou,0,d_dou},  {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_dou,1,d_hit}, {d_dou,-4,d_hit},{d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou},  {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},
//    {{d_dou,0,d_sta}, {d_dou,-3,d_sta},{d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou},  {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}},//18
//    {{d_sta,0,d_sta}, {d_dou,5,d_sta}, {d_dou,3,d_sta}, {d_dou,1,d_sta}, {d_dou,1,d_sta},  {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_dou,5,d_sta}, {d_dou,4,d_sta},  {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}},
//};
//
//const Decision_adv tab_split[10][10]
//{
//    {{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_hit,0,d_hit}}, //a-a
//    {{d_spl,-4,d_hit},{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //2-2
//    {{d_spl,0,d_hit}, {d_spl,-5,d_hit},{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //3-3
//    {{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_spl,1,d_hit}, {d_spl,-2,d_hit},{d_spl,-5,d_hit},{d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //4-4
//    {{d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,0,d_dou}, {d_dou,-5,d_hit},{d_dou,-2,d_hit},{d_dou,4,d_hit}, {d_hit,0,d_hit}}, //5-5
//    {{d_spl,-2,d_hit},{d_spl,-2,d_hit},{d_spl,-5,d_hit},{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //6-6
//    {{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,5,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}, {d_hit,0,d_hit}}, //7-7
//    {{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_hit,0,d_hit}}, //8-8
//    {{d_spl,-3,d_sta},{d_spl,-4,d_sta},{d_spl,-6,d_sta},{d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_sta,0,d_sta}, {d_spl,0,d_spl}, {d_spl,0,d_spl}, {d_sta,0,d_sta}, {d_sta,0,d_sta}}, //9-9
//    {{d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_spl,6,d_sta}, {d_spl,5,d_sta}, {d_spl,4,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}, {d_sta,0,d_sta}}, //10-10
//};
//
//// Decision_adv gowna(d_dou,4,d_spl);
////
//// Decision_adv aaa[2][2]{{{d_dou,0,d_spl}, {d_dou,4,d_spl}},{{d_dou,0,d_spl}, {d_dou,4,d_spl}}};
//
//// Decision_adv gowno[2]{(gowna),(gowna)};
//
//
//char move_split(int x, int y,int z) {
//    if (z >= tab_split[x/2 - 1 ][y-2].get_cards())
//        return tab_split[x/2 - 1 ][y-2].get_first();
//    else
//        return tab_split[x/2 - 1 ][y-2].get_second();
//
//}
//
//char move_ace(int x, int y, int z) {
//    if (z >= tab_soft_ace[x-13][y-2].get_cards())
//        return tab_soft_ace[x-13][y-2].get_first();
//    else
//        return tab_soft_ace[x-13][y-2].get_second();
//
//}
//
//char move_normal(int x, int y, int z) {
////     std::cout << tab_split[x-5][y-2].get_cards() << '\n';
////     std::cout << tab_split[x-5][y-2].get_first() << '\n';
////     std::cout << tab_split[x-5][y-2].get_second() << '\n';
//
//    if (z >= tab_normal[x-5][y-2].get_cards()) {
//
//        return tab_normal[x-5][y-2].get_first();
//    }
//    else
//        return tab_normal[x-5][y-2].get_second();
//}
//
//}
