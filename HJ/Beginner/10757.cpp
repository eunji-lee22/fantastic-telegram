#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string num1, num2, result;
    cin >> num1 >> num2;
    
    int size1 = num1.size(), size2 = num2.size(), carry=0;
       
    for(int i=1; i<=size1 || i<=size2; i++)
    {
        int n1 = (i<=size1) ? num1[size1-i] - '0' : 0;
        int n2 = (i<=size2) ? num2[size2-i] - '0' : 0;
        int sum = n1 + n2 + carry;
        
        if(sum > 9)
        {
            sum -= 10;
            carry = 1;
        }
        else carry = 0;
        
        result = to_string(sum) + result;        
    }
    
    if(carry) result = "1" + result;
    cout << result << "\n";
    
    return 0;
}
