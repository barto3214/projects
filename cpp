#include <cmath>
#include <iostream>
using namespace std;
int main()

{
    srand(time(NULL));
    int tablica[50];
    for(int i;i<50;i++){
        tablica[i]=rand()%100 + 1;
    }
    for(int j;j<50;j++){
        cout<<tablica[j]<<endl;
        
    }
    for(int k;k>50;k++){
    while(sqrt(k)==((int(k))*(int(k)))){
    cout<<tablica[k];
        
    }
    }
    return 0;
}
