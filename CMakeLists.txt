project (black_jack)
cmake_minimum_required (VERSION 2.8)
add_executable (black_jack src/basic_strategy.cpp src/BasicStrategy.cpp src/Box.cpp src/Card.cpp src/Dealer.cpp src/decision_adv.cpp src/decision.cpp
src/Decision.cpp
src/Deck.cpp src/gambler.cpp src/game.cpp src/Game.cpp src/hi_low_i.cpp src/Person.cpp src/Person_old.cpp src/player.cpp src/Player.cpp src/player_test.cpp src/Strategy.cpp
src/Take17.cpp
test/BasicStrategy_test.cpp test/Box_test.cpp test/Card_test.cpp test/Dealer_test.cpp test/Decision_test.cpp test/Deck_test.cpp test/Game_test.cpp test/main.cpp
test/Person_old_test.cpp test/Person_test.cpp test/Player_test.cpp test/Strategy_test.cpp test/Take17_test.cpp
)
ADD_DEFINITIONS(
    -std=c++11 # Or -std=c++0x
    -L/usr/include/unittest++
    -lunittest++
    # Other flags
)
SET (UNITTEST++_FOUND FALSE)

FIND_PATH (UNITTEST++_INCLUDE_DIR UnitTest++.h
	/usr/include/unittest++
	/usr/local/include/unittest++
	/opt/local/include/unittest++
	$ENV{UNITTESTXX_PATH}/src
	$ENV{UNITTESTXX_INCLUDE_PATH}
	)

FIND_LIBRARY (UNITTEST++_LIBRARY NAMES UnitTest++ PATHS
	/usr/lib
	/usr/local/lib
	/opt/local/lib
	$ENV{UNITTESTXX_PATH}
	ENV{UNITTESTXX_LIBRARY_PATH}
	)

IF (UNITTEST++_INCLUDE_DIR AND UNITTEST++_LIBRARY)
	SET (UNITTEST++_FOUND TRUE)
ENDIF (UNITTEST++_INCLUDE_DIR AND UNITTEST++_LIBRARY)

IF (UNITTEST++_FOUND)
   IF (NOT UnitTest++_FIND_QUIETLY)
      MESSAGE(STATUS "Found UnitTest++: ${UNITTEST++_LIBRARY}")
   ENDIF (NOT UnitTest++_FIND_QUIETLY)
ELSE (UNITTEST++_FOUND)
   IF (UnitTest++_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "Could not find UnitTest++")
   ENDIF (UnitTest++_FIND_REQUIRED)
ENDIF (UNITTEST++_FOUND)

MARK_AS_ADVANCED (
	UNITTEST++_INCLUDE_DIR
	UNITTEST++_LIBRARY
	)
