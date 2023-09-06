#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> colors = {"red", "blue", "yellow", "pink", "purple"}; 
    string colorBuscar = "purple";
    string colorReemplazar = "green";
    bool encontrado = false;
    int i;
    int size = colors.size();

    cout<<"Lista inicial: "<<endl;
    for (string x : colors)
        cout<<x<<" ";

    cout<<endl;
    
    for (i = 0; i < size ; i++)
    {
        if(colors[i] == colorBuscar){
            colors[i] = colorReemplazar;
            encontrado = true;
        }
    }
    
    if(encontrado){
        cout<<"Color encontrado y reemplazado"<<endl;
    }else{
        cout<<"Color no encontrado"<<endl;
    }

    for (string x : colors)
        cout<<x<<" ";
    
}