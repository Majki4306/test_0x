#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
using namespace std;

//auto fun(int k){
//	if(k%2){
//		return 1;
//	}
//	else{
//		return string{"Liczba parzysta"};
//	}
//}
enum class peripherals{ hdd,gpu,keyboard,mouse,monitor };
enum class fruits{ apple,pear,strawberry };


void computer(peripherals item){
	cout<<"U choose..";
	switch(item){
	case peripherals::hdd:
		cout<<"HDD!"<<endl;
		break;
	case peripherals::gpu:
		cout<<"GPU!"<<endl;
		break;
	case peripherals::keyboard:
		cout<<"Keyboard!"<<endl;
		break;
	case peripherals::mouse:
		cout<<"Mouse!"<<endl;
		break;
	case peripherals::monitor:
		cout<<"Monitor!"<<endl;
		break;
	}
}

int main(){
	/*
	vector<int> vect{5,4,2,15,1,3,27,25};
	auto obj = vect[3];
	auto function = [](auto &a,auto &b)->bool{return a<b;};
	cout<<"Przed: "<<endl;
	for(auto &k:vect){
		cout<<k<<" ";
	}
	cout<<endl;
	sort(vect.begin(),vect.end(),function);
	cout<<"Po: "<<endl;
	for(auto &k:vect){
		cout<<k<<" ";
	}

	auto genLambda = [](auto &a,auto &b){return a<b;};				//Auto lambda = [](auto x, auto y) {return x + y;};
	vector<string> vect1{"BBB","AAA","EEE","CCC","DDD"};
	vector<int> vect2{5,2,4,1,3};
	sort(vect1.begin(),vect1.end(),genLambda);
	sort(vect2.begin(),vect2.end(),genLambda);
	cout<<"Wynik generycznej lambdy: "<<endl;
	cout<<"Inty: "<<endl;
	for(auto &k:vect1){
		cout<<k<<" ";
	}
	cout<<endl;
	cout<<"Stringi: "<<endl;
	for(auto &k:vect2){
		cout<<k<<" ";
	}
	*/
	//////////////////////////////////////// C++ 11 /////////////////////////////////////////////////
	string str1{"elo co tam"};
	string str2(10,'*');
	cout<<"str1: \n"<<str1<<"\nstr2: \n"<<str2<<endl;

	cout<<"\n\n"<<endl;

	peripherals a = peripherals::gpu, b = peripherals::monitor;
	computer(a);
	computer(b);
	//if(fruits::pear == peripherals::hdd){
	//	cout<<"ELO CO TAM"<<endl;
	//}

	// *** newBranch ***


	_getch();
}
