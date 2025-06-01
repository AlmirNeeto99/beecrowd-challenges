#include <bits/stdc++.h>
 
 
 using namespace std;
 
int main() {
    
    double pi =  3.141592654;
    double angle, distance, elfHeight, treeHeight;
    double oppositeCathetus, hyp, angleRadians;
    
    while (cin >> angle >> distance >> elfHeight) {
        angleRadians = angle * ((double)pi / 180);
        hyp = distance / cos(angleRadians);
        oppositeCathetus = (double)sin(angleRadians) * hyp;
        treeHeight = oppositeCathetus + elfHeight;
        cout << fixed << setprecision(2) << treeHeight * 5 << endl;
    }
 
    return 0;
}
