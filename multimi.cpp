#include <fstream>
#define NRMAX 30000
#define NRMIN 0
using namespace std;
int main()
{
    ifstream f("multimi.in");
    int n;
    f >> n;
    int xmax = NRMIN, ymin = NRMAX;
    while (n > 0)
    {
        int x, y;
        f >> x >> y;
        if (x > xmax) xmax = x;
        if (y < ymin) ymin = y;
        n--;
    }
    f.close();
    ofstream g("multimi.out");
    if (xmax > ymin)
        g << "multimea vida";
    else
        while (xmax <= ymin)
        {
            g << xmax << ' ';
            xmax++;
        }
    g.close();
    return 0;
}
