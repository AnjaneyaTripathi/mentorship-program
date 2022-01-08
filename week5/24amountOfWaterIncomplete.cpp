#include <iostream>
#include <queue>
using namespace std;
struct elem
{
    int r, c;
    float amt;
};
int calculate(int r, int c, float amt)
{
    queue<elem> q;
    elem head;
    head->r = 1;
    head->c = 1;
    if (amt <= 1)
    {
        head->amt = amt;
    }
    else
    {
        head->amt = 1;
    }
    q.push(head);
amt--;
while(amt>0){
elem front =q.front();
q.pop();
elem left;
left->r=(front->r)+1;
left->c=(front->c);
 if (amt <= 1)
    {
        left->amt = amt;
    }
    else
    {
        left->amt = 1;
    }

}
}
int main()
{
    int r, c;
    cout << "Enter the row number and column number of glass:" << endl;
    cin >> r >> c;
    if (c > r)
    {
        cout << "Enter the correct row number and column number:" << endl;
        cin >> r >> c;
    }
    cout << "Enter the amount of water poured in first glass: " << endl;
    float water;
    cin >> water;
    calculate(r, c, water);
}