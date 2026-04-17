#include <iostream>
using namespace std;

// class Box {
// private:
//     float height;
//     float width;
//     float depth;
// public:
//     Box(float h, float w, float d) {    //Constructor 
//         cout<<"This is a default constructor"<<endl;
//         height=h;
//         width=w;
//         depth=d;

//         cout<<height<<endl;
//         cout<<width<<endl;
//         cout<<depth<<endl;
//         cout<<calcVolume()<<endl;  //Order of function position doesnt matter or not need be declare before Box() constructor
//     }
//     float calcVolume(){
//         return height*width*depth;
//     }
// };


// class Box {
// public:
//     float height;
//     float width;
//     float depth;
//     Box(float height, float width, float depth) {    //Constructor 
//         cout<<"This is a default constructor"<<endl;
//         this->height=height;
//         this->width=width;
//         this->depth=depth;
//     }
//     Box(float depth) {

//         cout<<"hi"<<depth<<endl;
//     }
// };

// int main(void) {
//     Box mybox1(4.0);
//     Box mybox2(3.0,2.0,7.0);

// }

// class Box {
// public:
//     float height;
//     float width;
//     float depth;
//     Box(float height, float width, float depth) {    //Constructor 
//         cout<<"Constructor Running"<<endl;
//         this->height=height;
//         this->width=width;
//         this->depth=depth;
//     }
//     Box(Box &orgBox) {  //This is to copy one object parameter to another object
//         this->height=orgBox.height; //changes mybox2 orginal class variable And Here I tested that i dont need "this->" to indicate this class variable
//         cout<<height<<endl; 
//     }
//     float calcVolume(){
//         return height*width*depth;
//     }
// };

// int main(void) {
//     Box mybox1(4.0,5.0,8.0);
//     Box mybox3(5.0,5.0,8.0);
//     Box mybox2(mybox3);  //Here im copying it to myBox2 the values of myBox3
//     cout<<mybox1.height;
//     cout<<mybox2.height;

// } 

// class demo{
// public:
//     int a;
//     demo(int a){
//         this->a=a;
//     }
//     demo operator+(demo yy){ //doesnt necessarily have to be yy match cuz it's pass by value
//         demo cc(0);  //Assigned "0" so that it doesnt show garbage values
//         cc.a=a+yy.a;
//         return cc;
//     }
// };

// int main(void){
//     demo xx(2);
//     demo yy(2);
//     demo cc = xx + yy;
//     cout<<cc.a;

class demo{
public:
    int a;
    demo(int a){
        this->a=a;
    }
    demo operator+(demo yy){
        demo cc(0);
        cc.a=a+yy.a;
        return cc;
    }
};

int main(void){
    demo xx(2), yy(2);
    demo cc = xx + yy;
    cout<<cc.a;
}
