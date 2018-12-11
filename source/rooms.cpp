#include "rooms.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

void Room::DoorsOfMac() {
    string line;
    ifstream fin;
    string path="TextFilesForRooms\\FirstFloor\\DoorsOfMac.txt";
    fin.open(path);

    if( fin.fail() ) {
        cout << "Can't open file." << endl;
    }

    while ( getline(fin, line) )
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        FirstRoom();
        break;
        case '2': fin.close();
        TryToLeave();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::FirstRoom() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\FirstRoom.txt";
    fin.open(path);

    while (getline(fin, line) )
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LostAndFoundRoom();
        break;
        case '2': fin.close();
        Lobby();
        break;
        case '3': fin.close();
        DoorsOfMac();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 0 );
}

void Room::LostAndFoundRoom() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\LostAndFound.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        RatPeopleSearch();
        break;
        case '2': fin.close();
        FirstRoom();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::RatPeopleSearch() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\RatPeopleSearch.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        FirstRoom();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::TryToLeave() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\TryToLeave.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        RedDead();
        break;
        case '2': fin.close();
        DoorsOfMac();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::RedDead() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\RedDeadRedemption2.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        DoorsOfMac();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Lobby() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Lobby.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        TalkToBangGroup();
        break;
        case '2': fin.close();
        LeftHallway();
        break;
        case '3': fin.close();
        Kitchen();
        break;
        case '4': fin.close();
        ShaftEntrance();
        break;
        case '5': fin.close();
        FirstRoom();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 ||  chmenu != 4 || chmenu != 5 || chmenu != 0 );
}

void Room::TalkToBangGroup() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Banging.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Lobby();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Kitchen() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\RightHallway(Kitchen).txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Lobby();
        break;
        case '2': fin.close();
        CouchParty();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::CouchParty() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\CouchParty.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Kitchen();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::LeftHallway() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\LeftHallway.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        BathroomWithKey();
        break;
        case '2': fin.close();
        Room113();
        break;
        case '3': fin.close();
        Room114();
        break;
        case '4': fin.close();
        LeftHallwayPart2();
        break;
        case '5': fin.close();
        Lobby();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 ||  chmenu != 4 || chmenu != 5 || chmenu != 0 );
}

void Room::LeftHallwayPart2() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\LeftHallwayPart2.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Room110();
        break;
        case '2': fin.close();
        Room111();
        break;
        case '3': fin.close();
        Room112();
        break;
        case '4': fin.close();
        LeftHallway();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 ||  chmenu != 4 || chmenu != 0 );
}
void Room::BathroomWithKey() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Bathroom(With Key).txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallway();
        break;
        case '2': fin.close();
        UseBathroom();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 0 );
}

void Room::UseBathroom() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\UseBathroom.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Wipe();
        break;
        case '2': fin.close();
        BathroomWithKey();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::Wipe() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Wipe.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Wipe();
        break;
        case '2': fin.close();
        Flush();
        break;
        case '3': fin.close();
        BathroomWithKey();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 0 );
}

void Room::Flush() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Flush.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        BathroomWithKey();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 0 );
}

void Room::ShaftEntrance() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\ShaftEntrance.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Room103();
        break;
        case '2': fin.close();
        Room104();
        break;
        case '3': fin.close();
        Room109();
        break;
        case '4': fin.close();
        ShaftEnd();
        break;
        case '5': fin.close();
        Lobby();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 ||  chmenu != 4 || chmenu != 5 || chmenu != 0 );
}

void Room::ShaftEnd() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\ShaftEnd.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        Room105();
        break;
        case '2': fin.close();
        Room106();
        break;
        case '3': fin.close();
        Room107();
        break;
        case '4': fin.close();
        Room108();
        break;
        case '5': fin.close();
        ShaftEntrance();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 4 || chmenu != 5 || chmenu != 0 );
}

void Room::Room104() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room104.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEntrance();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room103() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room103.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEntrance();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room109() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room109.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEntrance();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room114() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room114.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        MacBirthday();
        break;
        case '2': fin.close();
        RescueMacBDay();
        break;
        case '3': fin.close();
        LeftHallway();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 0 );
}

void Room::MacBirthday() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\MacBirthday.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallway();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::RescueMacBDay() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\RescueMacBDay.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallway();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room113() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room113.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallway();
        break;
        case '2': fin.close();
        LeftHallway();
        break;
        case '3': fin.close();
        GlassPunch();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 2 || chmenu != 3 || chmenu != 0 );
}

void Room::GlassPunch() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\GlassPunch.txt";
    fin.open(path);

    while ( getline(fin,line))
    {
        cout << line << endl;
    }
    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallway();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room110() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room110.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallwayPart2();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room111() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room111.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallwayPart2();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room112() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room112.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        LeftHallwayPart2();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room105() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room105.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        AnotherCoke();
        break;
        case '2': fin.close();
        ShaftEnd();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::AnotherCoke() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\AnotherCoke.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        AnotherCoke();
        break;
        case '2': fin.close();
        ShaftEnd();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room106() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room106.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEnd();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room107() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room107.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEnd();
        break;
        case '2': fin.close();
        ShaftEnd();
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}

void Room::Room108() {
    string line;
    ifstream fin;
    string path="C:\\Users\\User\\Desktop\\CS_Assignments\\CS_Final\\TextFilesForRooms\\FirstFloor\\Room108.txt";
    fin.open(path);

    while (getline(fin,line))
    {
        cout << line << endl;
    }

    char chmenu;
do 
{
    cin >> chmenu;

    switch ( chmenu ) {
        case '1': fin.close();
        ShaftEnd();
        break;
        case '0': cout <<  "Okay, have a nice day!" << endl;
        fin.close();
        exit(1);
        break;
    }
} while( chmenu != 1 || chmenu != 0 );
}