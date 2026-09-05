#include <iostream>

#include <limits>

void outputp1(int i, char (&arr)[9]){
    arr[i-1] = 'x';
    std::cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
}
void outputp2(int l, char (&arr)[9]){
    arr[l-1] = '0';
    std::cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
}






int main(){
    std::cout<<"____1___|____2_____|___3____"<<std::endl;
    std::cout<<"____4___|____5_____|___6____"<<std::endl;
    std::cout<<"____7___|____8_____|___9____"<<std::endl;
    std::string player1;
    std::cout<<"Enter Player 1 name"<<std::endl;
    std::cin>>player1;
    char arr[9] = {'1', '2', '3','4','5','6','7','8','9'};
    for(int i = 0; i<9; i++){ int input1;
    std::cout<<player1<<" "<<"enter your input"<<std::endl;
    std::cin>>input1;
    while(std::cin.fail() || input1<0 ||input1>10){
        std::cout<<"Invalid Input!"<<std::endl;
        std::cout<<"Try Again!"<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cin>>input1;
    }
    outputp1(input1, arr);

   
    std::string player2;
    std::cout<<"Enter Player 2 name"<<std::endl;
    std::cin>>player2;
    int input2;
    std::cout<<player2<<" "<<"enter your input"<<std::endl;
    while(true){
        std::cin>> input2;
        if (std::cin.fail() || input2<1 || input2>9){
            std::cout<<"Invalid input"<<std::endl;
            std::cout<<"Try Again!"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else if(arr[input2 - 1] == 'x'){
            std::cout<<"Box is occupied"<<std::endl;
            std::cout<<"Try Again!"<<std::endl;
        }
        
        else{
            break;
        }
    }
    outputp2(input2, arr);
}
   /**/ int input3;
    std::cout<<player1<<" "<<"enter your input"<<std::endl;
   
    while(true){
        std::cin>>input3;
        if(std::cin.fail()){
            std::cout<<"Invalid Input"<<std::endl;
            std::cout<<"Try Again"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        }
        else if(arr[input3 -1] == '0' || arr[input3 -1] == 'x'){
            std::cout<<"Box is occupied"<<std::endl;
        }
        else{
            break;
        }

    }
    outputp1(input3, arr);
    int input4;
    std::cout<<player2<<" "<<"enter your input"<<std::endl;
    while(true){
        std::cin>>input4;
        if(std::cin.fail()){
            std::cout<<"Invalid Input"<<std::endl;
            std::cout<<"Try Again"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else if(arr[input4 - 1] == 'x' || arr[input4 - 1] == '0' || arr[input4 - 1] == 'x'){
            std::cout<<"Box is occupied"<<std::endl;
            std::cout<<"Try Again"<<std::endl;
        }
        else{
            break;
        }
    }
    outputp2(input4, arr);
    int input5;
    std::cout<<player1<<" "<<"enter your input"<<std::endl;
    while(true){
        std::cin>>input5;
        if(std::cin.fail()){
            std::cout<<"Invalid Input"<<std::endl;
            std::cout<<"Try Again"<<std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
        else if(arr[input5 - 1] == 'x' || arr[input5 - 1] == '0' || arr[input5 - 1] == 'x' || arr[input5 - 1]== '0'){
            std::cout<<"Box is occupied"<<std::endl;
        }
        else{
            break;
        }
        
    }
outputp1(input5, arr);
int input6;
std::cout<<player2<<" "<<"enter your input"<<std::endl;
while(true){
    if(std::cin.fail()){
        std::cout<<"Invalid Input"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else if(arr[input6 - 1] == 'x' || arr[input6 - 1] == '0' || arr[input6 - 1] == 'x' || arr[input6 - 1] == '0' || arr[input6 - 1] == 'x'){
        std::cout<<"Box is occupied"<<std::endl;
    }
    else{
        break;
    }
}
outputp2(input6, arr);
int input7;
std::cout<<player1<<" "<<"enter your input"<<std::endl;
while(true){
    std::cin>>input7;
    if(std::cin.fail()){
        std::cout<<"Invalid Input"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }
    else if(arr[input7 - 1] == 'x' || arr[input7 - 1] == '0' || arr[input7 - 1] == 'x' || arr[input7 - 1] == '0' || arr[input7 - 1] == 'x' || arr[input7 - 1] == '0'){
        std::cout<<"Box is occupied"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
    }
    else{
        break;
    }
}
outputp1(input7, arr);
int input8;
std::cout<<player2<<" "<<"enter your input"<<std::endl;
while(true){
    std::cin>>input8;
    if(std::cin.fail()){
        std::cout<<"Invalid Input"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
    }
    else if(arr[input8 -1] == 'x' || arr[input8 - 1] == '0' || arr[input8 - 1] == 'x' || arr[input8 - 1] == '0' || arr[input8 - 1] == 'x' || arr[input8 - 1] == '0' || arr[input8 - 1] == 'x'){
        std::cout<<"Box is occupied"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
    }
    else{
        break;
    }
}
outputp2(input8, arr);
int input9;
std::cout<<player1<<" "<<"enter your input"<<std::endl;
while(true){
    std::cin>>input9;
    if(std::cin.fail()){
        std::cout<<"Invalid Input"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
    }
    else if(arr[input9 -1] == 'x' || arr[input9 - 1] == '0' || arr[input9 - 1] == 'x' || arr[input9 - 1] == '0' || arr[input9 - 1] == 'x' || arr[input9 - 1] == '0' || arr[input9 - 1] == 'x' || arr[input9 - 1] == '0'){
        std::cout<<"Box is occupied"<<std::endl;
        std::cout<<"Try Again"<<std::endl;
    }
    else{
        break;
    }
}
outputp1(input9, arr);
if(arr[0]==arr[1]==arr[2]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[0]==arr[3]==arr[6]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[0]==arr[4]==arr[8]=='x'){
    std::cout<<player1<<"wins!"<<std::endl;
}
else if(arr[2]==arr[4]==arr[6]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[2]==arr[5]==arr[8]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[8]==arr[7]==arr[6]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[8]==arr[7]==arr[6]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[1]==arr[4]==arr[7]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else if(arr[3]==arr[4]==arr[5]=='x'){
    std::cout<<player1<<" "<<"wins!"<<std::endl;
}
else{
    std::cout<<player2<<" "<<"wins!"<<std::endl;
}


}