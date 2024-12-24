#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void animateText(const string &text, int delayMs)
{
    for (char c : text)
    {
        cout << c;
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(delayMs));
    }
    cout << endl;
}

int main()
{
    string message =
        "Hello, my name is Poramet Keawubol, but you can call me Met.\n"
        "I am currently studying at Prince of Songkla University, majoring in Computer Engineering.\n"
        "My student ID is 6610110554.\n"
        "This work is submitted for the SDA 240-229 course, section 01.\n"
        "Thank you!";

    int delayMs = 50;

    cout << "Displaying animated text:" << endl
         << endl;
    animateText(message, delayMs);

    return 0;
}
