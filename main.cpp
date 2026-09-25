#include <iostream>

int getSquareSum(int n){
    int res{0};
    while(n>0){
        res += (n%10)*(n%10);
        n/=10;
    }
    return res;
}

bool isHappy(int n) {
    int first{n}, second{n};
    do {
        first = getSquareSum(first);
        second = getSquareSum(getSquareSum(second));
    } while(first!=second && first != 1 && second != 1);
    std::cout << first << " " << second;
    return first == 1 || second == 1;
}

int main()
{
    int n; std::cin >> n;
    std::cout << isHappy(n) << std::endl;
    return 0;
}
