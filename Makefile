CCXX = g++

SOURCE_FILES = Beasts.cpp Space.cpp Bridge.cpp Cathedral.cpp Central.cpp Cheater.cpp ClericBeast.cpp Dream.cpp Gascoigne.cpp Guardian.cpp Hunter.cpp Item.cpp Nightmare.cpp Rogue.cpp SickRoom.cpp TheBeast.cpp Tomb.cpp main.cpp

final: $(SOURCE_FILES)
	$(CXX) $(SOURCE_FILES) $(CFLAGS) -o final

clean:
	rm finalProject