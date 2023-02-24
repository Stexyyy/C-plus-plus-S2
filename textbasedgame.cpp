#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

//GLOBAL variable decleration

string inventory[10];
//int inventoryNums[10]={0,0,0,0,0,0,0,0,0,0};

//function declarations
int TrapGen();
int Health();
void InventoryDropper();
int BattleSystem(char monstertype, int health);
char Monster();
int Shop(int coins);


//main loop/code
int main() {
    int PlayerHealth = 500;
    for (int i = 0; i < 10; i++)
        inventory[i] = " ";
    //LOCAL variables to main
    string input = "a";
    int room = 1;
    int age;
    char n1, n2, n3, n4, n5; //chars hold letters
    int money = 50;

    cout << "What is your age?" << endl;
    cin >> age;
    if (age <= 12) {
        cout << "Bruh nah B you cant play" << endl;
        return 0; //kills program
    }
    else if (age >= 13 && age <= 17)
        cout << "you might want to ask a parent first?" << endl;
    else
        cout << "Welcome to the game!" << endl;




    cout << "enter 5 letters for your name!" << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    cin >> n5;

    getchar();//clears out the memory
    cout << "welcome, " << n1 << n2 << n3 << n4 << n5 << endl << endl;

    //story here

    cout << endl << endl;
    cout << "And your adventure begins" << endl << endl << endl;

    cout << "you wake up and find yourself stuck in a room theres only one door and no other things around you.. your head shakes and it spins the room, you probably stood up too quickly from being on that hard floor." << endl << endl;
    cout << "It's very dark and the door is the only thing that lights the way" << endl << endl;
    cout << "You question your sanity as you feel like your hallucinating.. you pinch yourself and it isn't a dream either. Your head throbs and you lay back down wondering why you even got here in the first place" << endl << endl;
    cout << "while you sit down your head throbs again and now you remember. You were walking home like any other day and suddenly got hit in the head by a man and blacked out. You suspect someone kidnapped you and brought you here." << endl << endl;
    cout << "You finally start to get up after your head stops hurting and now you can only hope for the best." << endl << endl;
    cout << "In a situation like this, we have no choice but to be thinking of the worst." << endl << endl;
    cout << "But I’m keeping my head high and not letting this whole ‘dungeon’ get to me because well we always have to think of the best in the worst situations possible." << endl << endl;
    cout << "As you get your breathing steady you always get this feeling that you’re being watched or there’s just something odd about this place but you keep shrugging it off still trying to get around where you are and that why did those people bring you there in the first place." << endl << endl;
    cout << "As much as you want to shrug this off you still get those odd feelings the ones you can’t ignore after a good period of time the anxiety..." << endl << endl;
    cout << "As you now move you feel relaxed and calm like this was just a dream." << endl << endl;
    cout << "but in the end you can tell this won't be normal." << endl << endl;
    //////////////////////////////////////////end of backstory


      //does while the game is running
    while (input.compare("quit") != 0) {//da loop

        cout << "your health is now " << PlayerHealth << endl << endl;

        cout << "Inventory: " << endl;
        cout << "arrows: " << inventory[0] << endl;
        cout << "potions: " << inventory[1] << endl;
        cout << "bombs: " << inventory[2] << endl;
        cout << "waffles: " << inventory[3] << endl;
        cout << "cupcakes: " << inventory[4] << endl;
        cout << "hearts: " << inventory[5] << endl;
        cout << "puppies: " << inventory[6] << endl;
        cout << "swords: " << inventory[7] << endl;
        cout << "Cube: " << inventory[8] << endl;
        cout << "prism: " << inventory[9] << endl;
        //switches statements (cases)
        switch (room) {

        case 1:
            InventoryDropper();
            cout << "The only thing that lights your way is the 1 door, go through?" << endl;
            cout << "you can go South" << endl;
            getline(cin, input);
            if (input.compare("South") == 0 || input.compare("go South") == 0)
                room = 2;
            break;//ends the loop/code to go onto the next one

        case 2:
            cout << "you walked in the room and see 2 doors they both glow bright you see hand writing on the wall and doors" << endl << endl;
            cout << "The writing on the wall says I stand in the corner of a building and I never move but my children travel everywhere. what am I?" << endl << endl;
            cout << "The (w)est door says a mailbox! but the (e)ast door says a dog" << endl << endl;
            cout << "you can go West or East" << endl;
            getline(cin, input);
            if (input.compare("West") == 0 || input.compare("go West") == 0)
                room = 3;
            else if (input.compare("East") == 0 || input.compare("go East") == 0) {
                cout << "the door bites you" << endl;
                PlayerHealth -= 50;
            }
            break;

        case 3:
            //a call
            PlayerHealth = BattleSystem(Monster(), PlayerHealth);

            cout << "you enter the correct room its the same as always and you see another peice of writing on the wall" << endl << endl;
            cout << "What year was the N64 released?" << endl << endl;
            cout << "The west door says 1994, but the south door says 1996" << endl << endl;
            cout << "you can go West or South" << endl;
            getline(cin, input);
            if (input.compare("South") == 0 || input.compare("go South") == 0)
                room = 4;
            else if (input.compare("West") == 0 || input.compare("go West") == 0) {
                cout << "It was a fake door again!!" << endl;
                PlayerHealth -= 50;
            }
            break;

        case 4:

            PlayerHealth -= TrapGen();//random trap

            cout << "a monster attacks you!! but You start to think now that out of every 2 doors theres one thats always wrong, theres more writing on the walls it seems like general riddles or knowledge." << endl << endl;
            cout << "What is the best game ever made?" << endl << endl;
            cout << "The (E)ast door says Big Rigs and the (S)outh door says ET on the Atari, where would you like to go?" << endl << endl;
            cout << "you can go South or East" << endl;
            getline(cin, input);
            if (input.compare("East") == 0 || input.compare("go East") == 0)
                room = 5;
            else if (input.compare("South") == 0 || input.compare("go South") == 0) {
                cout << "as you open the door the door bites you!" << endl << endl;
                PlayerHealth -= 50;
            }
            break;

        case 5:

            Health();//function call for void health

            cout << "you finally feel a sense of relief as you finally get healed and the riddle on the wall says, nothing..? you can go East, or North. you also see something in the room.. would you like to go to there? type 'Mysterious' or 'weird' if you'd like to do so." << endl << endl;
            inventory[9] = "prism";// ints can't store chars
            cout << "You picked up a Cool Prism!" << endl << endl;
            getline(cin, input);
            if (input.compare("East") == 0 || input.compare("go East") == 0)
                room = 6;
            else if (input.compare("North") == 0 || input.compare("go North") == 0) {
                cout << "The door bites you again!" << endl << endl;
                PlayerHealth -= 50;
            }
            else if (input.compare("Mysterious") == 0 || input.compare("weird") == 0) {
                money = Shop(money);
            }
            break;


        case 6:

            PlayerHealth -= TrapGen();

            cout << "seems like that sense of relief was all for nothing you sigh and just continue as normal but this time theres no more riddles, seems like its getting to be a guessing game now.. if you go in the wrong door it would do a good chunk of damage to you.. you can go West or East" << endl << endl;
            getline(cin, input);
            if (input.compare("South") == 0 || input.compare("go South") == 0)
                room = 7;
            else if (input.compare("East") == 0 || input.compare("go East") == 0) {
                cout << "damnit.." << endl << endl;
                PlayerHealth -= 100;
            }
            break;

        case 7:

            Health();

            cout << "You go through the door and luckily it actually worked you didn't get hit by any door so far now you feel like theres actually hope in this. you can go West or South" << endl << endl;
            inventory[8] = "Cube";
            cout << "You picked up a cube! looks important-" << endl << endl;
            getline(cin, input);
            if (input.compare("West") == 0 || input.compare("go West") == 0)
                room = 8;
            else if (input.compare("South") == 0 || input.compare("go South") == 0) {
                cout << "ouch-" << endl << endl;
                PlayerHealth -= 100;
            }
            break;

        case 8:

            PlayerHealth -= TrapGen();

            cout << "You get through the door like any other time and you hear birds for once it's really odd you can hear that but you shrug it off and go to the next room. you can go South or West." << endl << endl;
            getline(cin, input);
            if (input.compare("South") == 0 || input.compare("go South") == 0)
                room = 9;
            else if (input.compare("West") == 0 || input.compare("go West") == 0) {
                cout << "YIKES that one hurt.." << endl << endl;
                PlayerHealth -= 200;
            }
            break;

        case 9:

            Health();

            cout << "at this point all you can think about is just running to the end and so you head to the next room you can go East or West." << endl << endl;
            getline(cin, input);
            if (input.compare("East") == 0 || input.compare("go East") == 0) {
                //ints can't store chars, inventory is a int
                if (inventory[9] == "prism" && inventory[8] == "Cube") {
                    cout << "You put the prism and cube in its place." << endl << endl;
                    //say something about the key?
                    //usually you might want to erase items, "inventory[2] = " "
                    room = 10;
                }
                else {
                    cout << "you can't go that way" << endl;
                }

            }
            else if (input.compare("West") == 0 || input.compare("go West") == 0) {
                cout << "WOAH-" << endl << endl;
                PlayerHealth -= 300;
            }
            break;

        case 10:
            cout << "you finally are relieved as you make it out the door and you're finally free at last. Not suffering from the pain of that dungeon you can finally go home." << endl << endl;
            room = 11;
            break;





        }//end switch

    }//end game loop



}//endmain
//shop function
int Shop(int coins) {
    int choice;
    cout << "Welcome to the shop!!" << endl << endl;
    //does while the shop is running
    while (choice != 0) {
        cout << "You have " << coins << " coins! " << endl << endl;
        cout << "Press 1 to purchase arrows ($1),  press 2 to purchase potions ($2),  press 3 to purchase bombs ($4), Press 4 to purchase waffles ($2), press 5 to purchase cupcakes ($2), press 6 to purchase hearts ($6),  press 7 to purchase puppies ($5),  press 8 to purchase swords ($8), or 0 to u" << endl << endl;
        cin >> choice;
        //if they chose 1 they'll get the item
        if (choice == 1) {
            if (coins >= 1) {
                coins -= 1;
                cout << "You bought an Arrow!" << endl << endl;
                inventory[0] = "arrows";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 2) {
            if (coins >= 2) {
                coins -= 2;
                cout << "You bought a potion!" << endl << endl;
                inventory[1] = "potions";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 3) {
            if (coins >= 4) {
                coins -= 4;
                cout << "You bought a bomb!" << endl << endl;
                inventory[2] = "bombs";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 4) {
            if (coins >= 2) {
                coins -= 2;
                cout << "You bought a waffle!" << endl << endl;
                inventory[3] = "waffles";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 5) {
            if (coins >= 2) {
                coins -= 2;
                cout << "You bought a cupcake!" << endl << endl;
                inventory[4] = "cupcakes";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 6) {
            if (coins >= 6) {
                coins -= 6;
                cout << "You bought a Heart!" << endl << endl;
                inventory[5] = "hearts";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 7) {
            if (coins >= 5) {
                coins -= 5;
                cout << "You bought a puppy!" << endl << endl;
                inventory[6] = "puppies";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

        if (choice == 8) {
            if (coins >= 8) {
                coins -= 8;
                cout << "You bought a Sword!" << endl << endl;
                inventory[7] = "swords";
            }
            else
                cout << "You don't have enough coins!" << endl << endl;
        }

    }//end of shop
    return coins;
}


//Monster Generator
char Monster() {
    int num = rand() % 100 + 1; //range is between 1-100

    if (num <= 30) {
        cout << "a Kevin Salazar spawned!" << endl << endl;
        return 'k';
    }
    //add more if statements here  
    else if (num <= 70) {//40% chance
        cout << "a Dr mo appeared!" << endl << endl;
        return 'd';
    }
    else { //30% chance
        cout << "Simon's dog bella appeared!" << endl << endl;
        return 'b';

    }
    cout << "you should never see this" << endl;
    return 0;
}
//Monster Generator
int TrapGen() {
    int num = rand() % 100 + 1; //range is between 1-100

    if (num <= 20) {
        cout << "goo comes up from the floor and hurts you!" << endl << endl;
        return 40;
    }
    else if (num <= 50) {//30% chance
        cout << "a rock bonks your head! (dont worry you're okay! sorta)" << endl << endl;
        return 20;
    }
    else if (num <= 90) {//40% chance
        cout << "a blade randomly appears and hurts you!" << endl << endl;
        return 15;
    }
    else
        cout << "a pebble hits you and it stings a litle" << endl << endl;
    return 5;

}

//Health Generator!
int Health() {
    int num = rand() % 100 + 1;

    if (num <= 20) {
        cout << "you touch blue slime on the walls and feel a sense of relief" << endl << endl;
        return 50;
    }
    else if (num <= 50) {
        cout << "you find a health potion! and drink it!" << endl << endl;
        return 20;
    }
    else if (num <= 90) {
        cout << "you find a mini health potion and drink it!" << endl << endl;
        return 10;
    }
    else
        cout << "you see green goop on the wall and you lick it-" << endl << endl;
    return 5;


}

//inventory dropper
void InventoryDropper() {
    int num = rand() % 10; //0-9
    inventory[num] += 1;

}
//battle system
int BattleSystem(char monstertype, int health) {
    string choice;
    int chance, echance;
    int monsterhealth;
    if (monstertype == 'k')//
        monsterhealth = 50;
    if (monstertype == 'd')
        monsterhealth = 20;
    if (monstertype == 'b')
        monsterhealth = 30;



    while (health > 0 && monsterhealth > 0) {
        cout << "Your HP is:" << health << endl;
        cout << "Monster HP:" << monsterhealth << endl;
        chance = rand() % 17 + 5;
        echance = rand() % 100 + 1;
        cout << "what would you like to do?" << endl << endl;
        cout << "(F)ight" << endl << endl;
        cout << "(R)un" << endl << endl;
        cout << "(I)tem" << endl << endl;
        getline(cin, choice);
        if (choice.compare("r") == 0) {
            //gives a chance ot run if you don't want to fight
            if (echance <= 50) {
                echance = rand() % 100 + 1;//fresh chance
                cout << "well then.. you ran.. " << endl << endl;
                return health;//return kills the function
            }
            else
                cout << "you couldn't run" << endl;
        }
        if (choice.compare("f") == 0) {

            if (monstertype == 'k')
                cout << "you play a country song, it annoys the kevin" << endl << endl;

            if (monstertype == 'd')
                cout << "You did Javascrpit code! it makes dr mo sad :(" << endl << endl;

            if (monstertype == 'b')
                cout << "You ate bella (inside joke)" << endl << endl;

            cout << "You did " << chance << " damage!" << endl << endl;
            monsterhealth -= chance;//hurt the monster
        }
        if (choice.compare("i") == 0) {
            cout << "You drank a potion! " << endl << endl;
            health += 20;
        }

        //MONSTER's TURN!
        if (monstertype == 'd') {
            chance = rand() % 8 + 2;
            cout << "Mo assigns a GAME REVIEW. It is " << chance << " stinky" << endl;
            health -= chance;
        }


    }//end of battle loop

    if (health > 0) {
        cout << "YOu defeated the monster!" << endl;
    }
    else
        cout << "YOU DIED" << endl;
    return health;//returns health

}//end of whole loops?
