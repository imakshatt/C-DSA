// Try out each combination of access modifiers in inharitance (9 combinations)
// BaseClass-public    InhertitanceMode-public  result=public
// BaseClass-public    InhertitanceMode-protected  result=protected
// BaseClass-public    InhertitanceMode-private  result=private
// BaseClass-protected    InhertitanceMode-public  result=protected
// BaseClass-protected    InhertitanceMode-protected  result=protecteed
// BaseClass-protected    InhertitanceMode-private  result=private
// BaseClass-private    InhertitanceMode-public  result=NA
// BaseClass-private   InhertitanceMode-protected  result=NA
// BaseClass-private    InhertitanceMode-private  result=NA

//try different combination in this
#include<bits/stdc++.h>
using namespace std;

//baseclass
class Human {
    public:
        int height;
    public:
        int weight;
    private:
        int Age;
};

class Male:private Human{
    public:
        string color;
    
        void sleep(){
            cout << "Function calling" << endl;
        }

        int getHeight(){
            return this->height;
        }
        void setHeight(int height){
            this->height = height;
        }
};

int main(){
    Male m1;
    cout << m1.getHeight() << endl;
    return 0;
}