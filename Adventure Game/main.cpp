#include <iostream>
#include <string>
using namespace std;

/* -----------------------------------------
 Adventure Game Program
 Version: 1.0
 Date: October 2, 2018
 Author: Arian Taherzadeh
 School: Glebe Collegiate Institute, Ottawa
 Course: ISC 3U 03
 Teacher: Mr. Giansante
 ---------------------------------------------*/

int main() {
    string Desc[81];
    string Objects[81];
    int North[81];
    int East[81];
    int South[81];
    int West[81];
    
    int roomnum = 36;
    string currentObject = "";
    
    char answer;
    string holder;
    int flightMonitor = 0;
    bool passportChecker = false;
    int roomHolder = 0;
    
    /* Square 1 */
    Desc[1] = "Alaska";
    Objects[1] = "";
    North[1] = 0;
    East[1] = 0;
    South[1] = 11;
    West[1] = 0;
    
    /* Square 2 */
    Desc[2] = "Canadian Territories";
    Objects[2] = "";
    North[2] = 0;
    East[2] = 3;
    South[2] = 12;
    West[2] = 0;
    
    /* Square 3 */
    Desc[3] = "Greenland";
    Objects[3] = "";
    North[3] = 0;
    East[3] = 0;
    South[3] = 0;
    West[3] = 2;
    
    /* Square 4 water */
    
    /* Square 5 */
    Desc[5] = "North-West Russia";
    Objects[5] = "";
    North[5] = 0;
    East[5] = 6;
    South[5] = 0;
    West[5] = 0;
    
    /* Square 6 */
    Desc[6] = " North Russia";
    Objects[6] = "Winter Jacket";
    North[6] = 0;
    East[6] = 0;
    South[6] = 16;
    West[6] = 5;
    
    /* Square 7 */
    Desc[7] = "Central Russia";
    Objects[7] = "";
    North[7] = 0;
    East[7] = 0;
    South[7] = 17;
    West[7] = 0;
    
    /* Square 8 */
    Desc[8] = "Canadian Territories";
    Objects[8] = "";
    North[8] = 0;
    East[8] = 0;
    South[8] = 18;
    West[8] = 0;
    
    /* Square 9 water */
    
    /* Square 10 water */
    
    /* Square 11 */
    Desc[11] = "South-West Canada";
    Objects[11] = "Maple Syrup";
    North[11] = 1;
    East[11] = 12;
    South[11] = 0;
    West[11] = 0;
    
    /* Square 12 */
    Desc[12] = "South-East Canada";
    Objects[12] = "";
    North[12] = 2;
    East[12] = 0;
    South[12] = 22;
    West[12] = 11;
    
    /* Square 13 water */
    
    /* Square 14 */
    Desc[14] = "Iceland";
    Objects[14] = "Viking Treasure";
    North[14] = 0;
    East[14] = 15;
    South[14] = 24;
    West[14] = 0;
    
    /* Square 15 */
    Desc[15] = "Finland";
    Objects[15] = "";
    North[15] = 0;
    East[15] = 0;
    South[15] = 25;
    West[15] = 14;
    
    /* Square 16 */
    Desc[16] = "Kazakhstan";
    Objects[16] = "";
    North[16] = 6;
    East[16] = 17;
    South[16] = 0;
    West[16] = 0;
    
    /* Square 17 */
    Desc[17] = "Mongolia";
    Objects[17] = "";
    North[17] = 7;
    East[17] = 18;
    South[17] = 0;
    West[17] = 16;
    
    /* Square 18 */
    Desc[18] = "South-East Russia";
    Objects[18] = "";
    North[18] = 8;
    East[18] = 0;
    South[18] = 28;
    West[18] = 17;
    
    /* Square 19 water */
    
    /* Square 20 water */
    
    /* Square 21 */
    Desc[21] = "North-West United States of America";
    Objects[21] = "";
    North[21] = 0;
    East[21] = 22;
    South[21] = 31;
    West[21] = 0;
    
    /* Square 22 */
    Desc[22] = "North United States of the America";
    Objects[22] = "";
    North[22] = 12;
    East[22] = 0;
    South[22] = 32;
    West[22] = 21;
    
    /* Square 23 water */
    
    /* Square 24 */
    Desc[24] = "Norway";
    Objects[24] = "";
    North[24] = 14;
    East[24] = 25;
    South[24] = 34;
    West[24] = 0;
    
    /* Square 25 */
    Desc[25] = "Sweden";
    Objects[25] = "";
    North[25] = 15;
    East[25] = 0;
    South[25] = 0;
    West[25] = 24;
    
    /* Square 26 */
    Desc[26] = "Saudi Arabia";
    Objects[26] = "";
    North[26] = 0;
    East[26] = 27;
    South[26] = 36;
    West[26] = 0;
    
    /* Square 27 */
    Desc[27] = "Iran";
    Objects[27] = "";
    North[27] = 0;
    East[27] = 28;
    South[27] = 0;
    West[27] = 26;
    
    /* Square 28 */
    Desc[28] = "North-West China";
    Objects[28] = "";
    North[28] = 18;
    East[28] = 29;
    South[28] = 38;
    West[28] = 27;
    
    /* Square 29 */
    Desc[29] = "North-East China";
    Objects[29] = "";
    North[29] = 0;
    East[29] = 30;
    South[29] = 39;
    West[29] = 28;
    
    /* Square 30 */
    Desc[30] = "Japan";
    Objects[30] = "";
    North[30] = 0;
    East[30] = 0;
    South[30] = 0;
    West[30] = 29;
    
    /* Square 31 */
    Desc[31] = "South-West United States of America";
    Objects[31] = "Football";
    North[31] = 21;
    East[31] = 0;
    South[31] = 41;
    West[31] = 0;
    
    /* Square 32 */
    Desc[32] = "South-East United States of America";
    Objects[32] = "";
    North[32] = 22;
    East[32] = 0;
    South[32] = 0;
    West[32] = 0;
    
    /* Square 33 water */
    
    /* Square 34 */
    Desc[34] = "Western Europe";
    Objects[34] = "";
    North[34] = 24;
    East[34] = 35;
    South[34] = 44;
    West[34] = 0;
    
    /* Square 35 */
    Desc[35] = "Eastern Europe";
    Objects[35] = "";
    North[35] = 0;
    East[35] = 36;
    South[35] = 45;
    West[35] = 34;
    
    /* Square 36 */
    Desc[36] = "Pakistan";
    Objects[36] = "";
    North[36] = 26;
    East[36] = 37;
    South[36] = 46;
    West[36] = 35;
    
    /* Square 37 */
    Desc[37] = "Central India";
    Objects[37] = "";
    North[37] = 0;
    East[37] = 0;
    South[37] = 47;
    West[37] = 36;
    
    /* Square 38 */
    Desc[38] = "Nepal";
    Objects[38] = "";
    North[38] = 28;
    East[38] = 39;
    South[38] = 0;
    West[38] = 0;
    
    /* Square 39 */
    Desc[39] = "Southern China";
    Objects[39] = "";
    North[39] = 29;
    East[39] = 0;
    South[39] = 49;
    West[39] = 38;
    
    /* Square 40 */
    Desc[40] = "North Korea";
    Objects[40] = "";
    North[40] = 0;
    East[40] = 0;
    South[40] = 0;
    West[40] = 39;
    
    /* Square 41 */
    Desc[41] = "Mexico";
    Objects[41] = "";
    North[41] = 31;
    East[41] = 0;
    South[41] = 51;
    West[41] = 0;
    
    /* Square 42 water */
    
    /* Square 43 water */
    
    /* Square 44 */
    Desc[44] = "North Africa";
    Objects[44] = "";
    North[44] = 34;
    East[44] = 0;
    South[44] = 54;
    West[44] = 0;
    
    /* Square 45 */
    Desc[45] = "East Africa";
    Objects[45] = "";
    North[45] = 35;
    East[45] = 0;
    South[45] = 55;
    West[45] = 0;
    
    /* Square 46 */
    Desc[46] = "South-West India";
    Objects[46] = "";
    North[46] = 36;
    East[46] = 47;
    South[46] = 0;
    West[46] = 0;
    
    /* Square 47 */
    Desc[47] = "South-East India";
    Objects[47] = "";
    North[47] = 37;
    East[47] = 48;
    South[47] = 57;
    West[47] = 46;
    
    /* Square 48 */
    Desc[48] = "Indonesia";
    Objects[48] = "";
    North[48] = 0;
    East[48] = 0;
    South[48] = 58;
    West[48] = 47;
    
    /* Square 49 */
    Desc[49] = "Taiwan";
    Objects[49] = "";
    North[49] = 39;
    East[49] = 50;
    South[49] = 0;
    West[49] = 0;
    
    /* Square 50 */
    Desc[50] = "South Korea";
    Objects[50] = "";
    North[50] = 0;
    East[50] = 0;
    South[50] = 0;
    West[50] = 49;
    
    /* Square 51 */
    Desc[51] = "Peru";
    Objects[51] = "";
    North[51] = 41;
    East[51] = 52;
    South[51] = 61;
    West[51] = 0;
    
    /* Square 52 */
    Desc[52] = "Brazil";
    Objects[52] = "Soccer Ball";
    North[52] = 0;
    East[52] = 0;
    South[52] = 62;
    West[52] = 51;
    
    /* Square 53 water */
    
    /* Square 54 */
    Desc[54] = "West Africa";
    Objects[54] = "";
    North[54] = 44;
    East[54] = 0;
    South[54] = 0;
    West[54] = 0;
    
    /* Square 55 */
    Desc[55] = "Central Africa";
    Objects[55] = "";
    North[55] = 45;
    East[55] = 0;
    South[55] = 65;
    West[55] = 0;
    
    /* Square 56 water */
    
    /* Square 57 */
    Desc[57] = "Sri Lanka";
    Objects[57] = "";
    North[57] = 47;
    East[57] = 0;
    South[57] = 0;
    West[57] = 0;
    
    /* Square 58 */
    Desc[58] = "New Zealand";
    Objects[58] = "";
    North[58] = 48;
    East[58] = 0;
    South[58] = 68;
    West[58] = 0;
    
    /* Square 59 */
    Desc[59] = "Papua New Guinea";
    Objects[59] = "";
    North[59] = 0;
    East[59] = 0;
    South[59] = 69;
    West[59] = 0;
    
    /* Square 60 water */
    
    /* Square 61 */
    Desc[61] = "Argentina";
    Objects[61] = "";
    North[61] = 51;
    East[61] = 62;
    South[61] = 71;
    West[61] = 0;
    
    /* Square 62 */
    Desc[62] = "Bolivia";
    Objects[62] = "";
    North[62] = 52;
    East[62] = 0;
    South[62] = 72;
    West[62] = 61;
    
    /* Square 63 water */
    
    /* Square 64 */
    Desc[64] = "South Africa";
    Objects[64] = "Sling Shot";
    North[64] = 0;
    East[64] = 65;
    South[64] = 0;
    West[64] = 0;
    
    /* Square 65 */
    Desc[65] = "Sub-Saharan Africa";
    Objects[65] = "Return plane ticket to USA";
    North[65] = 55;
    East[65] = 0;
    South[65] = 0;
    West[65] = 64;
    
    /* Square 66 water */
    
    /* Square 67 water */
    
    /* Square 68 */
    Desc[68] = "North-West Australia";
    Objects[68] = "";
    North[68] = 58;
    East[68] = 69;
    South[68] = 78;
    West[68] = 0;
    
    /* Square 69 */
    Desc[69] = "North-East Australia";
    Objects[69] = "Rugby Ball";
    North[69] = 59;
    East[69] = 0;
    South[69] = 79;
    West[69] = 68;
    
    /* Square 70 water */
    
    /* Square 71 */
    Desc[71] = "Chile";
    Objects[71] = "";
    North[71] = 61;
    East[71] = 0;
    South[71] = 0;
    West[7] = 0;
    
    /* Square 72 */
    Desc[72] = "Uruguay";
    Objects[72] = "";
    North[72] = 62;
    East[72] = 0;
    South[72] = 0;
    West[72] = 0;
    
    /* Square 73 water */
    
    /* Square 74 water */
    
    /* Square 75 water */
    
    
    /* Square 76 water */
    
    
    /* Square 77 water */
    
    
    /* Square 78 */
    Desc[78] = "South-West Australia";
    Objects[78] = "";
    North[78] = 68;
    East[78] = 79;
    South[78] = 0;
    West[78] = 0;
    
    /* Square 79 */
    Desc[79] = "South-East Australia";
    Objects[79] = "";
    North[79] = 69;
    East[79] = 80;
    South[79] = 0;
    West[79] = 78;
    
    /* Square 80 */
    Desc[80] = "New Zealand";
    Objects[80] = "";
    North[80] = 0;
    East[80] = 0;
    South[80] = 0;
    West[80] = 79;
    
    
    // Opening description
    cout << "Welcome to Arian's World Map Adventure Game! \n\nYour objective is simple: Enter North Korea. \n\nYou begin your quest in Pakistan, where you will have access to the entire world, with the exception of the Americas, Greenland, and North Korea. In order to gain access to the Americas, you must locate the return plane ticket somewhere in Africa. You must then use that ticket to travel to the West, acquire the Diplomatic Passport needed to enter North Korea, and then return to Africa where you will continue your quest. Good luck!\n\nAlong the way you may encounter random objects in several countries; they are just there because they are required in the assignment :P\n\n";
    
    
    // Runs loop to play game
    do {
        
        // Checks to see if user is holding Diplomatic Passport
        if(passportChecker == true) {
            East[39] = 40;
        }
        
        cout << "You are in " << Desc[roomnum] << "\n";
        
        // Determines where the user is able to travel and what actions they can perform (i.e pick up, drop, exchange) based on room location
        if(North[roomnum] != 0) {
            cout << "[N] to go North\n";
        }
        if(East[roomnum] != 0) {
            cout << "[E] to go East\n";
        }
        if(South[roomnum] != 0) {
            cout << "[S] to go South\n";
        }
        if(West[roomnum] != 0) {
            cout << "[W] to go West\n";
        }
        if(currentObject == "" && Objects[roomnum] != "") {
            cout << "[P] to pick up the " << Objects[roomnum] << "\n";
        }
        if(currentObject != "" && Objects[roomnum] == "") {
            cout << "[D] to drop the " << currentObject << "\n";
        }
        if(currentObject != "" && Objects[roomnum] != "") {
            cout << "[X] to exchange the " << currentObject << " for the " << Objects[roomnum] << "\n";
        }
        if(currentObject == "Return plane ticket to USA" && roomnum != 21 && flightMonitor == 0) {
            cout << "[F] to use the plane ticket to fly to the North-West United States of America. After this your ticket will have one remaining use to fly directly back to Sub-Saharan Africa where you acquired the ticket. Use it wisely and remember your objective";
        }
        if(currentObject == "Return plane ticket to USA" && flightMonitor == 1) {
            cout << "[B] to use the plane ticket to fly back to Sub-Saharan. After this trip, your plane ticket will expire and you will no longer have access to the Americas. Be sure you have completed the necessary tasks before you leave for good.\n";
        }
        if(roomnum == 72 && passportChecker == false) {
            cout << "\n\nCongratulations!! You have successfully located the Diplomatic Passport needed to complete your mission. Enter [K] to pick up the Diplomatic Passport. This does not count as an item, therefore you will be able to carry the Diplomatic Passport and another item (i.e Rugby Ball) simultaneously\n";
        }
        cout << "[Q] to Quit the Game";
        
        // Draws room in ASCII code
        // If North = Yes
        if(North[roomnum] != 0) {
            cout << "\n\n\tx x x x x         x x x x x\n";
        }
        else { // If North = No
            cout << "\n\n\tx x x x x x x x x x x x x x\n";
        }
        // If East and West = Yes
        if(East[roomnum] != 0 && West[roomnum] != 0) {
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\t                            \n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
        }
        // If East and West = No
        else if(East[roomnum] == 0 && West[roomnum] == 0) {
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
        }
        // If East = Yes and West = No
        else if(East[roomnum] != 0 && West[roomnum] == 0) {
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                         x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          \n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                         x\n";
            }
        }
        // If East = No and West = Yes
        else if(East[roomnum] == 0 && West[roomnum] != 0) {
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\t                           x\n";
            }
            for (int i = 1; i <= 4; i++) {
                cout << "\tx                          x\n";
            }
        }
        // If South = Yes or No
        if(South[roomnum] != 0) {
            cout << "\tx x x x x         x x x x x\n\n";
        }
        else {
            cout << "\tx x x x x x x x x x x x x x\n\n";
        }
        
        // Prompts user for answer
        cout << "Use the graphic above as a guide\n\n";
        cout << "\nSelect a command from the list above: ";
        cin >> answer;
        
        
        // Determines action based on user input
        if((answer == 'N' || answer == 'n') && North[roomnum] != 0) {
            roomnum = North[roomnum];
        }
        else if((answer == 'E' || answer == 'e') && East[roomnum] != 0) {
            roomnum = East[roomnum];
        }
        else if ((answer == 'S' || answer == 's') && South[roomnum] != 0) {
            roomnum = South[roomnum];
        }
        else if((answer == 'W' || answer == 'w') && West[roomnum] != 0) {
            roomnum = West[roomnum];
        }
        else if(answer == 'Q' || answer == 'q') {
            break;
        }
        else if((answer == 'P' || answer == 'p') && currentObject == "" && Objects[roomnum] != "") {
            currentObject = Objects[roomnum];
            Objects[roomnum] = "";
        }
        else if((answer == 'D' || answer == 'd') && currentObject != "" && Objects[roomnum] == "") {
            Objects[roomnum] = currentObject;
            currentObject = "";
        }
        else if((answer == 'X' || answer == 'x') && currentObject != "" && Objects[roomnum] != "") {
            holder = currentObject;
            currentObject = Objects[roomnum];
            Objects[roomnum] = holder;
        }
        else if((answer == 'F' || answer == 'f') && currentObject == "Return plane ticket to USA" && roomnum != 21 && flightMonitor == 0) {
            roomHolder = roomnum;
            roomnum = 21;
            flightMonitor = 1;
        }
        else if((answer == 'B' || answer == 'b') && currentObject == "Return plane ticket to USA" && flightMonitor == 1) {
            roomnum = roomHolder;
            currentObject = "";
        }
        else if(answer == 'K' || (answer == 'k' && roomnum == 72)) {
            passportChecker = true;
            cout << "------------------------------------------------";
            cout << "\n\nYou now have the Diplomatic Passport in your possession\n\n";
            cout << "------------------------------------------------\n\n";
        }
        else {
            roomnum = roomnum;
        }
        
    }while(roomnum != 40); // Ends loop when user successfully enters North Korea or quits the game
    
    if(roomnum == 40) { // If user was successful
        cout << "Congratulations you have successfully completed your quest! I hope you enjoyed my game, thanks for playing!";
    } else { // If user failed and/or quit the game
        cout << "Game Over\n\n";
    }
    
    return 0;
}
