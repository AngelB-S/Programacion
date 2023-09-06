//Create and send a list of colors in English using an array, 
//check if the color purple exists.
//Now you need to change the value to green and display the result."	
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> colors = {"red", "blue", "yellow", "pink", "purple"}; 
    string colorToSearch = "purple";
    string colorToReplace = "green";
    bool find = false;
    int i;
    int size = colors.size();

    cout<<"Inicial list: "<<endl;
    for (string x : colors)
        cout<<x<<" ";

    cout<<endl;
    
    for (i = 0; i < size ; i++)
    {
        if(colors[i] == colorToSearch){
            colors[i] = colorToReplace;
            find = true;
        }
    }
    
    if(find){
        cout<<"Color finded and replaced"<<endl;
    }else{
        cout<<"Color not finded"<<endl;
    }

    for (string x : colors)
        cout<<x<<" ";
    
}