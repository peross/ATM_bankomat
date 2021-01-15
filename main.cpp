/*
Napisati program koji simulira rad bankomata tako da sa što manje novčanica isplati traženu
sumu. Dozvoljeni apoeni su 1, 5, 10, 50.
 */

#include <iostream>

using namespace std;

int main() {
    int SumaNovca, ap50, ap10, ap5, ap1;

    cout << "Unesite sumu:";
    cin >> SumaNovca;

    ap50 = SumaNovca / 50;
    SumaNovca = SumaNovca % 50;
    if (ap50 == 0) { cout << ""; }
    else {
        cout << "Ap50=" << ap50 <<endl;
    }
    ap10 = SumaNovca / 10;
    SumaNovca = SumaNovca % 10;
    if (ap10 == 0) { cout << ""; }
    else {
        cout << "Ap10=" << ap10 <<endl;
    }
    ap5 = SumaNovca / 5;
    SumaNovca = SumaNovca % 5;
    if (ap5 == 0) { cout << ""; }
    else {
        cout << "Ap5=" << ap5 <<endl;
    }
    ap1 = SumaNovca % 5;
    if (ap1 == 0) { cout << ""; }
    else {
        cout << "Ap1=" << ap1 <<endl;
    }
    return 0;
}
