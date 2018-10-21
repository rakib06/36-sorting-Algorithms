#include <iostream>

using namespace std;
/*
int add(int a, int b){
    return a+b;
}
//override
float add(float a, float b ){
    return a+b;
}
*/
//we can make this more simple
template <typename T>
T add (T a, T b){
    return a+b;
}

//class  Normal way
/*

    class something{
    public:
        int a[2];
        int add();
        something();
    };
//constructor
something::something(){
    cin>>a[0]>>a[1];

}
int something::add(){
    return a[0]+a[1];

}

*/
//------------ END of normal Class -----------------------//


//----------------Template Class --------------------------//
template <class T >
class something{
    public:
        T a[2];
        T add();
        something();

};
template <class T>
something<T>::something(){
    cin>>a[0]>>a[1];

}
template <class T>
T something<T>::add(){
        return a[0]+a[1];
}

int main()
{
    int x= 10;
    int y=20;
    float a=20.20;
    float b =10.20;

    //-----------------Template Function ------------------//
    /*
    cout<<add<int>(x,y)<<endl;
    cout<<add<float>(a,b)<<endl;
    */
    //-----------------End of Template Function ------------------//



    //-----------------Normal Class Call ----------------------//
    /*
    something intsomething;
    cout<<intsomething.add();
    */
    //-----------------END of Normal Class Call ----------------------//

    //--------------------Template Class Call---------------//
    something<float> floatsomething;
    cout<<floatsomething.add();


    return 0;
}
