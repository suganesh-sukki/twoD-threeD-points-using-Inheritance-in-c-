/***
Construct a base class called twoD contains x and y and methods to read and write the x and y. 
Create another class called threeD which is derived from twoD and also contains z and write methods to read and write z. 
Also write a method to find the distance of two threeD Points.

sqrt((x2-x1)^2+(y2-y1)^2+(z2-z1)^2)

In main:

Create one ThreeD object using the default constructor.
Use the setters to set x, y, and z.
Create the second ThreeD object using the constructor with three arguments.

in the TwoD class:

Add a cout statement to the TwoD default constructor with a message "TwoD default constructor"

Add a cout statement to other TwoD constructor with a message "TwoD constructor with two arguments

***/



#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class TwoD{
	double x;
	double y;
	
	public:
		TwoD(){
			this->x=0;
			cout<<"\nTwoD default constructor";
		}
		
		TwoD(double x,double y){
			this->x=x;
			this->y=y;
			cout<<"\nTwoD default constructor with arguments";
		}
		
		double setX(int x=0){
			this->x=x;
		}
		double setY(int y=0){
			this->y=y;
		}
	
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
		
		void display(){
			cout<<"\nthe x value is "<<x;
			cout<<"\nthe y value is "<<y;
		}
};

class ThreeD:public TwoD{
	double z;
	double result;
	
	public:
		ThreeD(){
			cout<<"\nTwoD default constructor";
		
		};		
		ThreeD(double z,double x,double y){
			this->z=z;
		}
		
		void setZ(int z=0){
			this->z=z;
		}
		
		double get(){
			return z;
		}
		
		double calculate(){
			result=(x)
			result=sqrt()
		}
	
};
int main(){
	TwoD s;
}
