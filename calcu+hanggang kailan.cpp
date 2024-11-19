#include<iostream>
#include<string>
#include<windows.h> 

using namespace std;

void songLyricsDisplay(const string& lyrics, int typeSpeed, int pauseDuration, bool clearConsole){
    for (int i = 0; i < lyrics.length(); i++) {
        cout << lyrics[i] << flush;
        Sleep(typeSpeed); 
    }

    Sleep(pauseDuration);
    if (clearConsole) {
        system("cls");  
    }
}


int main() {
   
	int a,b,e;
	char c;
	bool d;
	cout<<"TIKTOK: @kayeteryn24"<<endl;
	cout<<"CALCULATOR\n"<<endl;
	cout<<"ENTER NUM1: ";
	cin>>a;
	cout<<"(+,-,*,/): ";
	cin>> c;
	cout<<"ENTER THE NUM2: ";
	cin>>b;
	e=a+b;
	cout<<e;
	d=true;
    if (d) {
        system("cls");  
}

    songLyricsDisplay("Di mapigilang " , 150, 0, false);	
    songLyricsDisplay(" mag isip" , 90, 2000, true);
    songLyricsDisplay("Na baka ", 110, 0, false);
    songLyricsDisplay(" sa tagal ", 80, 800, true);
    songLyricsDisplay("Mahulog ang loob", 90,0, false);
    songLyricsDisplay(" mo sa iba", 80, 4000, true);
   

    return 0;
}

