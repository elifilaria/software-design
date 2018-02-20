#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void switching (int x, string y, string z){
  switch (x) {
  case 1:
    cout << y;
    break;
  case 2:
    cout << z;
    break; }}

int main ()
{
  string a, b, c, d, e, f, g;
  int firstch;
  int secondch;
  int thirdch;
  a = "Imagine that after a very stressful week two of your friends text you at the same time, one invites you to a party with strangers and one invites you a party with free beer. \n Which one would you choose? \n Type 1 for party with strangers \n Type 2 for free beer \n";
  b = "Your friend came and picked you up, and only on the way you realized that this party wasn't even on campus. As you are driving to the party place, you are realizing you have forgotten your phone in our room and you know nobody at the party. \n What would you do? \n Type 1 if you ask your friend to just drive you back. \n Type 2 if you decide to go anyway, whatever happens happens.\n";
  c = "Your friend picks you up and you go to this house party right at the end of campus where there was said to be free beer for everone. Unfortunately you are not 21 and they don't let you in. \n What would you do? \n Type 1 if you would go back to sleep. \n Type 2 if you would make sure someone from your friends sneaks you in from the back door.\n";
  d = "You have chosen to go back to your dorm, but at that point all your friends have dispersed into some party anyway and you can't reach anyone. You will need to go to sleep, good luck next weekend! \n";
  e = "Bold move. Deciding to go to a party without a phone and amongst strangers this time turned out to be a good idea. You met the girl of your dreams! Too bad you can't save her phone number. \n";
  f = "You are boring! Have a good night. \n";
  g = "You got caught and the owners of the house kicked you out. You have no luck this weekend. \n";

  cout << a;

  getline (cin, a);
  stringstream(a) >> firstch;
  switch (firstch) {
  case 1:
    cout << b;
    getline (cin, b);
    stringstream(b) >> secondch;
    switching (secondch, d, e);
    break;
  case 2:
    cout << c;
    getline (cin, c);
    stringstream(c) >> thirdch;
    switching (thirdch, f, g);
    break;
  }
}
