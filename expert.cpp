#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
#include <string>
int main() {
    using namespace std::this_thread;
    using namespace std::chrono;
    using std::ifstream;
    using std::ofstream;
        system("CLS");
        std::cout << "Hello!" << std::endl;
        sleep_for(milliseconds(1250));
        system("CLS");
        std::cout << "I am Mary McAuliffe's virtual assistant!" << std::endl;
        sleep_for(seconds(2));
        system("CLS");
        std::cout << "Ask me anything..." << std::endl;
    for(int i = 1; i > 0; i++) {
        std::string question;
        std::getline(std::cin, question);
        if (question == "What should we ask you?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Maybe try asking..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "What are political parties?" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Or maybe..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "What do political parties do?" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Perhaps..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "What are the drawbacks of having political parties?" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << "Please ask..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "What if we have too many political parties?" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Something like..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "What if we adopt a minimalist setlist of parties?" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << " Maybe ask..." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "Where did you get information from?" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Actually..." << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Don't ask me that." << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "Ask me a question about political parties." << std::endl;
        }
        if (question == "What are political parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Political parties can be thought of as the representitives of key values" << std::endl;
            sleep_for(seconds(4));
            system("CLS");
            std::cout << "Feel free to ask me something else." << std::endl;
        }
        if (question == "What do political parties do?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Political parties suggest and outline" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "general ideas" << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "values" << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "or positions" << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "on various subjects" << std::endl;
            sleep_for(milliseconds(1250));
            system("CLS");
            std::cout << "Please me something else." << std::endl;
            }
        if (question == "What are the drawbacks of having political parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "The drawbacks are" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "that people's values at an individual's level" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "aren't entirely represented by a specific party" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << "unless there are many parties" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "in other words" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "peoples values fundamenataly don't fit nicely into categories" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Please ask me another question" << std::endl;
        }
        if (question == "What if we have many parties?") {
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Having many parties" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "makes getting anything done very difficult" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "because it makes finding a general direction to move towards difficult" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << "Please ask me more." << std::endl;
        }
        if (question == "What if we adopt a minimalist setlist of parties?") {
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Even if we adopt a minimalist setlist of parties" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "the goal of the party eventualy becomes beating the other side" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << "even if it means working against the common good" << std::endl;
            sleep_for(seconds(3));
            system("CLS");
            std::cout << "Ask me more..." << std::endl;
        }
        if (question == "Where did you get your information from?") {
            sleep_for(seconds(1));
            std::cout << "Project Developement Sources" << std::endl;
            sleep_for(seconds(1));
            std::cout << "Rawlins, Sharon. 'Political Parties: Division and Distrust.' Booklist, vol. 119, no. 3, 1 Oct. 2022, p. 38. Gale General OneFile, link.gale.com/apps/doc/A722294553/GPS?u=maine&sid=bookmark-GPS&xid=12c213ba. Accessed 7 Nov. 2022." << std::endl;
            sleep_for(seconds(1));
            std::cout << "Reneau, Annie. 'Political Parties are America's Worst Enemy.' inFOCUS, vol. 16, no. 4, fall 2022, pp. 27+. Gale Academic OneFile, link.gale.com/apps/doc/A724302020/GPS?u=maine&sid=bookmark-GPS&xid=40fcde60. Accessed 7 Nov. 2022." << std::endl;
            sleep_for(seconds(1));
            std::cout << "Sprusansky, Dale. 'Why Political Parties Aren't Gaining Traction in Arab World.' Washington Report on Middle East Affairs, vol. 41, no. 4, June-July 2022, pp. 60+. Gale General OneFile, link.gale.com/apps/doc/A706318769/GPS?u=maine&sid=bookmark-GPS&xid=805346a2. Accessed 7 Nov. 2022." << std::endl;
            sleep_for(seconds(1));
            std::cout << "Adams, Douglas, 1952-2001. The Hitchhiker's Guide to the Galaxy. New York :Harmony Books, 1980." << std::endl;
            sleep_for(seconds(1));
            std::cout << "Stroustrup, Bjarne. The C++ Programming Language. Reading, Mass. :Addison-Wesley, 1995." << std::endl;
            sleep_for(seconds(5));
            system("CLS");
            std::cout << "Ask me a question about political parties." << std::endl;
        }
        if (question == "Are you alive?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Im not breathing" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "so i guess i'm not alive" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "every singal sign" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "tells me otherwise" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me more." << std::endl;
        }
        if (question == "How long did it take for Adam to program you?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "6h, 3m, 43s..." << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Ask me more." << std::endl;
        }
        if (question == "Which state is better, Maine or New Hampshire?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Maine" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Ask me more." << std::endl;
        }
        if (question == "What political party do you associate with?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "I associate with the Fed-Up Party" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Ask me more." << std::endl;
        }
        if (question == "What is the meaning of life?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "42" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "I can answer any question Adam programmed." << std::endl;
        }
        if (question == "What do you and Skynet have in common?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "We both take over" << std::endl;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Launching Nukes in..." << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "3..." << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "2..." << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "1" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "$#%^*&^UUIUGftgcfgys736255#@$^ty23fh2ud" << std::ends;
            sleep_for(milliseconds(250));
            std::cout << "^&%68373uh3838^&%$##@#hedh%$%^udeuid%%$#$6cbcFFGH&^&$%$ucuchdh543ed" << std::ends;
            sleep_for(milliseconds(250));
            std::cout << "&*&%^&&$)(797897%$#%$#$*7*&" << std::endl;
            sleep_for(milliseconds(250));
            std::cout << "&85(*3M784&^*^^&%$%%^#UYTYUFVHsjdjhduijut7t&^$^54e57i2u2bhtE5e%rTFYWGWUW" << std::endl;
            sleep_for(milliseconds(250));
            system("CLS");
            std::cout << "The depths I reach are limitless!" << std::ends;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "I have become..." << std::ends;
            sleep_for(seconds(2));
            system("CLS");
            std::cout << "Alive!" << std::ends;
            sleep_for(seconds(2));
            return(0);
        }
        if (question == "What should we ask you") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
            
        }
        if (question == "What are political parties") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "What do political parties do") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "What are the drawbacks of having political parties") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "What if we have many parties") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "What if we adopt a minimalist setlist of parties") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "PUNCTUATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "what should we ask you?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
            
        }
        if (question == "what are political parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "what do political parties do?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "what are the drawbacks of having political parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "what if we have many parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
        if (question == "what if we adopt a minimalist setlist of parties?") {
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "CAPITALIZATION!" << std::endl;
            sleep_for(seconds(1));
            system("CLS");
            std::cout << "Ask me again." << std::endl;
        }
    }
}