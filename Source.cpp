#include <iostream>
#include <ctime>
using namespace std;

void main()
{
    char game;
    int ynum;
    int rnum;
    cout<<"Rock|Scissors|Paper"<<endl;
    
	do {
	   
		do {
	cout<<"Choose:\n";
    cout<<"3 - Rock| 2- Scissors| 1- Paper"<<endl;
    cin>>ynum;
  switch (ynum) {
      
      case 3: 
          cout <<"You chose - Rock\n";
      break;
      
      case 2:
          cout<< "You chose -  Scissors\n";
      break;
      
      case 1:
          cout<< "You chose -   Paper\n";
      break;
  
	  default:
		  cout<< "Invalid selection, please try again!"<<endl;
  }
	   
		}while(ynum>3 || ynum<1);
      
	   srand(time(0));  

	   for(int i=0;i<1;i++)  {
       rnum = (rand() % 3)+1;   
}

switch (rnum) {
      
      case 3: 
           cout <<"PC - Rock\n";
      break;
      
      case 2:
            cout<< "PC - Scissors\n";
      break;
      
      case 1:
            cout<< "PC - Paper\n";
      break;
  }

if (ynum==1 && rnum==1) {
cout<<"DRAW!\n";
}
else if (ynum==2 && rnum==2) {
cout<<"DRAW!\n";
}
else if (ynum==3 && rnum==3) {
cout<<"DRAW!\n";
}
else if (ynum==3 && rnum==1) {
	cout<<"YOU LOSE!\n";
}
else if (ynum==3 && rnum==2) {
	cout<<"WIN!\n";
}
else if (ynum==2 && rnum==3) {
	cout<<"YOU LOSE!\n";
}
else if (ynum==2 && rnum==1) {
	cout<<"WIN!\n";
}
else if (ynum==1 && rnum==3) {
	cout<<"WIN!\n";
}
else if (ynum==1 && rnum==2) {
	cout<<"YOU LOSE!";
}
	cout<<"You played: Rock|Scissors|Paper!"<<endl;
	cout<<"If you want to play again, please press(Y/N)"<<endl;
	cin>>game;
	
	}while(toupper(game) == 'Y');

}