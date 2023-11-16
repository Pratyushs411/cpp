#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if(num<2)
    {
        return false;
    }
    for(int i = 2;i <= sqrt(num);++i)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
bool isPalindrome(int num)
{
    int a = num;
    int b = 0;
    while(num>0)
    {
        int z = num%10;
        b = b*10 + z;
        num = num/10;
    }
    return a == b;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countEven = 0;
        int countOdd = 0;
        int a = 0;
        while(n>0)
        {
           ++a;
           if(isPrime(a) && isPalindrome(a))
           {
               int count = 0;
               int count1 = a;
                while(count1>0)
                {
                   count1 = count1/10;
                   count++;
                }
                if(count%2==0)
                {
                    countEven++;
                }
                else{
                    countOdd++;
                }
                n--;
           }
        }
        cout<<countEven<<" "<<countOdd<<endl;
    }
	return 0;
}

