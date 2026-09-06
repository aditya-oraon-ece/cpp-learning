#include <iostream>
#include <limits>
void outputp1(int i, char (&arr)[9]){
    arr[i-1] = 'X';
    std::cout<<arr[0]<<" | "<<arr[1]<<" | "<<arr[2]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[3]<<" | "<<arr[4]<<" | "<<arr[5]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
    std::cout<<arr[6]<<" | "<<arr[7]<<" | "<<arr[8]<<" | "<<std::endl;
    std::cout<<"_____________"<<std::endl;
}
void outputp2(int l, char (&arr)[9]){
    arr[l-1] = 'O';
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
    std::string player2;
    std::cout<<"Enter Player 2 name"<<std::endl;
    std::cin>>player2;
    char arr[9] = {'1', '2', '3','4','5','6','7','8','9'};
    for(int i = 0; i<9; i++){ 
        if(i%2 == 0){
            int input1;
            std::cout<<player1<<" "<<"enter your input"<<std::endl;
            while(true){
                std::cin>>input1;
                if(std::cin.fail() || input1<1 ||input1>9){
                std::cout<<"Invalid Input!"<<std::endl;
                std::cout<<"Try Again!"<<std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                }
                else if(arr[input1-1]=='O' || arr[input1 - 1]== 'X'){
                    std::cout<<"Box is occupied"<<std::endl;
                    std::cout<<"Try Again"<<std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                }
                else{
                    break;
                }
            }
            outputp1(input1, arr);
        }
        else{
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
                else if(arr[input2 - 1] == 'X' || arr[input2 -1] == 'O'){
                    std::cout<<"Box is occupied"<<std::endl;
                    std::cout<<"Try Again!"<<std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                }
                
                else{
                    break;
                }
            }
            outputp2(input2, arr);
        }
        if(arr[0]== 'X' && arr[1]== 'X' && arr[2]=='X'){
        std::cout<<player1<<" "<<"wins!"<<std::endl;
        return 0;
        }
        else if(arr[0]== 'X' && arr[3]== 'X' && arr[6]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[0]== 'X' && arr[4]== 'X' && arr[8]=='X'){
            std::cout<<player1<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[2]== 'X' && arr[4]== 'X' && arr[6]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[2]== 'X' && arr[5]== 'X' && arr[8]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[8]== 'X' && arr[7]== 'X' && arr[6]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
        return 0;        }
        else if(arr[1]== 'X' && arr[4]== 'X' && arr[7]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[3]== 'X' && arr[4]== 'X' && arr[5]=='X'){
            std::cout<<player1<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[0]== 'O' && arr[1]== 'O' && arr[2]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[0]== 'O' && arr[3]== 'O' && arr[6]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[0]== 'O' && arr[4]=='O' && arr[8]=='O'){
            std::cout<<player2<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[2]== 'O' && arr[4]=='O' && arr[6]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[2]== 'O' && arr[5]=='O' && arr[8]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[8]== 'O' && arr[7]=='O' && arr[6]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[1]== 'O' && arr[4]== 'O' && arr[7]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
        else if(arr[3]== 'O' && arr[4]== 'O' && arr[5]=='O'){
            std::cout<<player2<<" "<<"wins!"<<std::endl;
            return 0;
        }
    }
    std::cout<<"Draw!"<<std::endl;
    return 0;

}

