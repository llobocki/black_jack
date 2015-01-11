//
//#include "basic_strategy.h"
//
//namespace Basic_strategy {
//char d_hit = 'f';
//char d_dou =  'd';
//char d_sta = 's';
//char d_spl = 'a';
//
//
//// class Basic_strategy
//// {
//// };
//
//Decision tab_normal[16][10]
//{
////    2		3	4	5	6	  7	    8		9	10	ace
//    (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), //5
//    (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), //6
//    (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_hit), (d_dou), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit), //9
//    (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit),//10
//    (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_hit),
//    (d_hit), (d_hit), (d_sta), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),//12
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),//15
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),//16
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),//17
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),//20
//};
//
//
//Decision tab_soft_ace[8][10]
//{
//    (d_hit), (d_hit), (d_hit), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),	//13
//    (d_hit), (d_hit), (d_hit), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_hit), (d_hit), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),//
//    (d_hit), (d_hit), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_hit), (d_dou), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_sta), (d_dou), (d_dou), (d_dou), (d_dou), (d_sta), (d_sta), (d_hit), (d_hit), (d_hit),//18
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),//20
//};
//
//Decision tab_split[10][10] {
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit), //a-a
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_hit), (d_hit), (d_hit), (d_spl), (d_spl), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_dou), (d_hit), (d_hit),	//10
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit), (d_hit), (d_hit), (d_hit), (d_hit),
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit), (d_hit), (d_hit), (d_hit),//14
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_hit),//16
//    (d_spl), (d_spl), (d_spl), (d_spl), (d_spl), (d_sta), (d_spl), (d_spl), (d_sta), (d_sta),//18
//    (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta), (d_sta),//20
//};
//
//char move_split(int x, int y) {
//
//    return tab_split[x/2 - 1 ][y-2].get_first();
//}
//
//char move_ace(int x, int y)
//{
//    return tab_soft_ace[x-13][y-2].get_first();
//}
//
//char move_normal(int x, int y)
//{
//    return tab_normal[x-5][y-2].get_first();
//}
//
//
//};
