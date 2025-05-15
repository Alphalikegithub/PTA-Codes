/*
  @pintia psid=994805260223102976 pid=994805325918486528 compiler=GXX
  ProblemSet: PAT (Basic Level) Practice （中文）
  Title: 害死人不偿命的(3n+1)猜想
  https://pintia.cn/problem-sets/994805260223102976/exam/problems/type/7?problemSetProblemId=994805325918486528
*/
// @pintia code=start
#include <iostream>



int main()
{
    int n = 0,num;
    std::cin >> num;
    while(num != 1)
    {
        n++;
        if(num % 2 == 1)
        {
            num = (num*3 + 1) /2;
        }
        else{
            num /= 2;
        }
    }
    std::cout << n;
    return 0;
}
// @pintia code=end