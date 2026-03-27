#include <iostream>
#include <cmath>

int main()
{
    int d2, r1, r2, x1, x2, y1, y2, halfRoundPlus, halfRoundDel;
    int T;
    std::cin >> T;
    
    while (T--)
    {
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d2 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        halfRoundPlus = (r1 + r2) * (r1 + r2);
        halfRoundDel = (r1 - r2) * (r1 - r2);

        if (x1 == x2 && y1 == y2)
        {
            if (r1 == r2)
            {
                std::cout << -1 << std::endl;
            }
            else
            {
                std::cout << 0 << std::endl;
            }
        }
        else
        {
            if (d2 > halfRoundPlus)
            {
                std::cout << 0 << std::endl;
            }
            else if (d2 == halfRoundPlus)
            {
                std::cout << 1 << std::endl;
            }
            else if (d2 < halfRoundDel)
            {
                std::cout << 0 << std::endl;
            }

            else if (d2 == halfRoundDel)
            {
                std::cout << 1 << std::endl;
            }
            else
            {
                std::cout << 2 << std::endl;
            }
        }
    }
    
    return 0;
} 