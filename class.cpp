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
    demo()=default;
    demo(int a){
        this->a=a;
    }
    demo operator+(demo yy){
        demo cc;
        cc.a=a+yy.a;
        return cc;
    }
};

int main(void){
    demo xx(2), yy(2);
    demo cc = xx +yy;
    cout<<cc.a;
}

// //Arithmetic Operator Overloading
// class Add{
// public:
//     int a;
//     Add(){
//         cin>>a;
//     }
//     void operator+(Add yy){
//         a+=yy.a;
//     }
// };
// class Substract{
//     public:
//         int a;
//         Substract(){
//                 cin>>a;
//             }
//             void operator-(Substract bb){
//                     a-=bb.a;
//     }
// };
// class Multiply{
// public:
//     int a;
//     Multiply(){
//             cin>>a;
//         }
//     void operator*(Multiply kk){
//             a*=kk.a;
//         }
//     };
// class Divide{
//     public:
//         int a;
//         Divide(){
//                 cin>>a;
//             }
//             void operator/(Divide nn){
//                     a/=nn.a;
//     }
// };

// int main(void){
//     Add xx,yy;
//     xx+yy; cout<<"Addition: "<<xx.a<<endl;
//     Substract aa,bb;
//     aa-bb; cout<<"Substraction: "<<aa.a<<endl;
//     Multiply hh,kk;
//     hh*kk; cout<<"Multplication: "<<hh.a<<endl;
//     Divide mm,nn;
//     mm/nn; cout<<"Division: "<<mm.a<<endl;
// }

// //"=" Assignment Operator Overloading
// class Assign{
//     public:
//         int a;
//     Assign(){
//             cin>>a;
//         }
//         void operator=(Assign nn){
//         a=nn.a;
//     }
// };
// int main(void){
//     Assign xx,yy;
//     cout<<"XX object then: "<<xx.a<<endl;
//     xx=yy;
//     cout<<"XX object after assigning: "<<xx.a<<endl;
// }

// //"+=" Plus assignment operator overloading
// class AddAssign{
//     public:
//     int a;
//     AddAssign(){
//         cin>>a;
//     }
//     void operator+=(AddAssign yy){
//         a+=yy.a;
//     }
// };
// int main(void){
//     AddAssign xx,yy;
//     cout<<"XX object then: "<<xx.a<<endl;
//     cout<<"YY object then: "<<yy.a<<endl;
//     xx+=yy;
//     cout<<"XX object after assigning: "<<xx.a<<endl;
//     cout<<"YY object after assigning: "<<yy.a<<endl;
// }

// //PrefixPostfix Operator Overloading
// class PrefixIncrement{
//     public:
//     int a;
//     PrefixIncrement(){
//         cin>>a;
//     }
//     void operator++(){
//         ++a;
//     }
// };
// class PostfixIncrement{
//     public:
//     int a;
//     PostfixIncrement(){
//         cin>>a;
//     }
//     void operator++(int){
//         a++;
//     }
// };
// int main(void){
//     PrefixIncrement xx;
//     ++xx;
//     cout<<"XX object after assigning: "<<xx.a<<endl;

//     PostfixIncrement yy;
//     yy++;
//     cout<<"YY object after assigning: "<<yy.a<<endl;
// }

//== Equal to Operator Overloading
class EqualTo{
    public:
    int a;
    EqualTo(){
        cin>>a;
    }
    bool operator==(EqualTo yy){
        if(a==yy.a) return true;
        else return false;
    }
};
int main(void){
    EqualTo xx,yy;
    if (xx==yy) cout<<"They are Equal"<<endl;
    else cout<<"They are Not Equal"<<endl;
}
