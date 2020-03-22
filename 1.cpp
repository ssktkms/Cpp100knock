#include<iostream>

int main(){
    
    std::cout << "入力された数値までの３または５で割り切れる正の整数の総和を計算" << std::endl;
    int number;
    int total = 0;
    std::cin >> number;

    for(auto i = 1 ; i < number + 1 ; i++){
        if((i % 3)==0 || (i % 5)==0){
            total += i;
        }
    }

    std::cout << "総和は" << total << "です。" << std::endl;

    return 0;
}