#include <iostream>
#include <fstream>
#include <limits>








int main(){
    std::cout<<"____1___|____2_____|___3____"<<std::endl;
    std::cout<<"____4___|____5_____|___6____"<<std::endl;
    std::cout<<"____7___|____8_____|___9____"<<std::endl;
    std::string player1;
    std::cout<<"Enter Player 1 name"<<std::endl;
    std::cin>>player1;
    int arr[9] = {'1', '2', '3','4','5','6','7','8','9'};
    int input1;
    std::cout<<player1<<" "<<"enter your input"<<std::endl;
    std::cin>>input1;
    while(std::cin.fail() || input1<0 ||input1>10){
        std::cout<<"Invalid Input!"<<std::endl;
        std::cout<<"Try Again!"<<std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cin>>input1;
    }
    if (input1 == 1){
        arr[1] = 'x';
    }
    else if(input1==2){
        arr[2] = 'x';
    }
    else if(input1==3){
        arr[2] = 'x';
    }
    else if(input1==4){
        arr[2] = 'x';
    }
    else if(input1==5){
        arr[2] = 'x';
    }
    else if(input1==6){
        arr[2] = 'x';
    }
    else if(input1==7){
        arr[2] = 'x';
    }
    else if(input1==8){
        arr[2] = 'x';
    }
    }
}