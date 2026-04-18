#include<iostream>
using namespace std;

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
    // public:
    //     int a;
    //     Substract(){
        //         cin>>a;
        //     }
        //     void operator-(Substract bb){
            //         a-=bb.a;
//     }
// };
// class Multiply{
// public:
//     int a;
//     Multiply(){
    //         cin>>a;
    //     }
//     void operator*(Multiply kk){
    //         a*=kk.a;
    //     }
    // };
// class Divide{
    // public:
    //     int a;
    //     Divide(){
        //         cin>>a;
        //     }
        //     void operator/(Divide nn){
            //         a/=nn.a;
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
    // public:
    //     int a;
//     Assign(){
    //         cin>>a;
    //     }
    //     void operator=(Assign nn){
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

//
class PrefixIncrement{
    public:
    int a;
    PrefixIncrement(){
        cin>>a;
    }
    void operator++(){
        ++a;
    }
};
class PostfixIncrement{
    public:
    int a;
    PostfixIncrement(){
        cin>>a;
    }
    void operator++(int){
        a++;
    }
};
int main(void){
    PrefixIncrement xx;
    ++xx;
    cout<<"XX object after assigning: "<<xx.a<<endl;
    
    PostfixIncrement yy;
    yy++;
    cout<<"YY object after assigning: "<<yy.a<<endl;
}