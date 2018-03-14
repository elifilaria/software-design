#include <iostream>
using namespace std;

class Rating {
  int id, numStars;
public:
  Rating(int, int);
  int set_stars(int u) { 
  	if (u > 5){
  		u = 5;
  		numStars = u;
  	}
  	else if (u < 1){
  		u = 1;
  		numStars = u;
  	}
  	else numStars = u;
  	return (u);
  }
  int get_id() {return(id);}
  int get_stars() {return(numStars);}
  void display(ostream& os){
  	char* astStars = new char[6];
  	if (numStars <= 1) astStars[0] = '*';
  	else if (numStars = 2) {astStars[0] = '*'; astStars[1] = '*';}
  	else if (numStars = 3) {astStars[0] = '*'; astStars[1] = '*'; astStars[2] = '*';}
  	else if (numStars = 4) {astStars[0] = '*'; astStars[1] = '*'; astStars[2] = '*'; astStars[3] = '*';}
  	else if (numStars >= 5) {astStars[0] = '*'; astStars[1] = '*'; astStars[2] = '*'; astStars[3] = '*'; astStars[4] = '*';}
  	cout << id << ": " << astStars << endl;
  }
};

Rating::Rating (int x, int y){
	id = x;
	if (y > 5){
  		y = 5;
  		numStars = y;
  	}
  	else if (y < 1){
  		y = 1;
  		numStars = y;
  	}
  	else numStars = y;
}

int main() {
  Rating r(1234, 3);
  cout << "Rating r contains ";   r.display(cout);  cout << endl;
  r.set_stars(4);
  cout << "After r.set_stars(4), id=" << r.get_id() 
       << " and stars=" << r.get_stars() << endl;

  Rating *arr[8];
  int i;
  for (i = 0;  i < 8;  i++)
    arr[i] = new Rating(100+i, i);
  cout << "Ratings in array arr:  ";
  for (i = 0;  i < 8;  i++)
    arr[i]->display(cout); cout << "  ";
  cout << endl;    
}
