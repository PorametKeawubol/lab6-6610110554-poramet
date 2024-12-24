#include <iostream>
#include <sstream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void animateText(const string &text, int delayMs, ostream &out)
{
    for (char c : text)
    {
        out << c;
        out.flush();
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
}

bool testAnimateText()
{
    stringstream output;
    string expected = "Hello, my name is Poramet Keawubol, but you can call me Met.\n"
                      "I am currently studying at Prince of Songkla University, majoring in Computer Engineering.\n"
                      "My student ID is 6610110554.\n"
                      "This work is submitted for the SDA 240-229 course, section 01.\n"
                      "Thank you!";
    int delayMs = 10;

    animateText(expected, delayMs, output);

    return output.str() == expected;
}

int main()
{
    if (testAnimateText())
    {
        cout << "Test passed!" << endl;
        return 0;
    }
    else
    {
        cout << "Test failed!" << endl;
        return 1;
    }
}
