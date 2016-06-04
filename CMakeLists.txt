project (black_jack)
cmake_minimum_required (VERSION 2.8)


ADD_DEFINITIONS(
-std=c++11 # Or -std=c++0x
-L/usr/include/unittest++
-lunittest++
# Other flags
)

set( black_jack_main
  src/main.cpp
)

set( black_jack_src
  src/decision_adv.cpp
  src/Person_old.cpp
  src/Game.cpp
  src/Card.cpp
  src/Player.cpp
  src/Strategy.cpp
  src/hi_low_i.cpp
  src/player_test.cpp
  src/Dealer.cpp
  src/Take17.cpp
  src/BasicStrategy.cpp
  src/Decision.cpp
  src/gambler.cpp
  src/player.cpp
  src/decision.cpp
  src/Person.cpp
  src/basic_strategy.cpp
  src/Box.cpp
  src/Deck.cpp
  src/game.cpp
)

set(black_jack_test_main
  test/main.cpp
)

set(black_jack_test_src
  test/Card_test.cpp
  test/Player_test.cpp
  test/Box_test.cpp
  test/Game_test.cpp
  test/Dealer_test.cpp
  test/BasicStrategy_test.cpp
  test/Person_old_test.cpp
  test/Deck_test.cpp
  test/Strategy_test.cpp
  test/Person_test.cpp
  test/Take17_test.cpp
  test/Decision_test.cpp
)

add_executable(bin/black_jack ${black_jack_main} ${black_jack_src}
    )
add_executable(bin/test ${black_jack_test_main} ${black_jack_test_src} ${black_jack_src})


target_link_libraries( bin/test -lunittest++
)

add_custom_target(test ./bin/test
DEPENDS ./bin/test)
