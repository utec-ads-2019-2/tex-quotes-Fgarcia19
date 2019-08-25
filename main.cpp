#include <iostream>
#include <vector>
#include <cstring>


using namespace std;



void change(vector<string>inputs){
int aux=0;
    for(auto it:inputs){
    for(int i=0;i<it.length();i++){
        if(it[i]=='\"'){
            switch(aux%2){
                case 0:cout<<"``";
                    break;
                case 1:cout<<"\'\'";
            }
            aux++;
        }
        else
            cout<<it[i];
    }
}


}

int main() {
    string input;
    vector<string>inputs;
   do{
        getline(cin,input);
        inputs.push_back(input);
    } while(input!="");
   change(inputs);


}