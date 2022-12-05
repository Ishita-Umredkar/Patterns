#include <iostream>
using namespace std;
int x=41;
int y=30;

int main() {
    
    for(int i=1;i<=y;i++){
        for(int j=1;j<=x;j++){
            if(j<=x/4 && i<=y/3){
                if(i==-j+y/3){
                    cout<<"# ";
                }else{
                    cout<<". ";
                }
            }else{
                if(j<=x/2 && i<=y/3){
                    if(i==+j-y/3){
                        cout<<"# ";
                    }else{
                        cout<<". ";
                    }                                        
                }else{
                    if(j<= 3*x/4 && i<=y/3){
                        if(i==-j+y){
                            cout<<"# ";        
                        }else{
                            cout<<". ";                            
                        }
                    }else{
                        if(i<=y/3){
                            if(i==j-y){
                                cout<<"# ";                            
                            }else{
                                cout<<". ";
                            }
                        }else{
                            if(j<=x/2){
                                if(i==j+y/3){
                                    cout<<"# ";
                                }else{
                                    cout<<". ";
                                }
                            }else{
                                if(i==-j+(5*y)/3){
                                    cout<<"# ";
                                }else{
                                    cout<<". ";
                                }
                            }
                        }
                    }
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}