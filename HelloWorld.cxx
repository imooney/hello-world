#include <iostream>
#include "TH1.h"
#include "TH1F.h"
#include "TRandom.h"

using namespace std;

void HelloWorld () {
    cout << "Hello World!" << endl;
    
    TCanvas *c1 = new TCanvas("c1","A Simple Graph Example",200,10,700,500);
    Double_t x[100], y[100];
    Int_t n = 20;
    for (Int_t i=0;i<n;i++) {
        x[i] = i*0.1;
        y[i] = 10*sin(x[i]+0.2);
    }
    gr = new TGraph(n,x,y);
    gr->Draw("AC*");
    //here's some stuff
    return;
}
