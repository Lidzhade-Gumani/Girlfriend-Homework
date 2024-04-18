#include <iostream>

using namespace std;

int main(){

int height = 0;
int looks = 0;

cout << " Enter your looks(1-20) " << endl;
cin >> looks;

cout << " Enter your height(cm) " << endl;
cin >> height;


if(looks > 16)
	if(height < 180){
cout << " You stand a chance, let's go out " << endl;
}else if(looks <= 16 && height >= 180){
cout << " Your looks won't cut it and youu're too tall " << endl;
}else{
cout << " Please enter valid info" << endl;
}

return 0;
}
