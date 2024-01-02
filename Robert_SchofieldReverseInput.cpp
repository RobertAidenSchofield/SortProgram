#include "Robert_SchofieldReverseInput.h"
void  Robert_SchofieldReverseInput(){
    ofstream bFile[10];
    bFile[0].open("1000reversed.txt",ios::out); //creates file and opens in write mode
    bFile[1].open("4000reversed.txt",ios::out);
    bFile[2].open("8000reversed.txt",ios::out);
    bFile[3].open("10000reversed.txt",ios::out);
    bFile[4].open("40000reversed.txt",ios::out);
    bFile[5].open("80000reversed.txt",ios::out);
    bFile[6].open("100000reversed.txt",ios::out);
    bFile[7].open("400000reversed.txt",ios::out);
    bFile[8].open("800000reversed.txt",ios::out);
    bFile[9].open("1000000reversed.txt",ios::out);
    int sizes[] = {1000,4000,8000,10000,40000,80000,100000,400000,800000,1000000};

    vector<int> a(sizes[0]); // creates vectors
    vector<int> f(sizes[1]);
    vector<int> g(sizes[2]);
    vector<int> h(sizes[3]);
    vector<int> j(sizes[4]);
    vector<int> k(sizes[5]);
    vector<int> b(sizes[6]);
    vector<int> c(sizes[7]);
    vector<int> d(sizes[8]);
    vector<int> e(sizes[9]);

    // fills and reverses vectors

    iota(a.begin(), a.end(), 1);// fills vector from start to end using std library iota
    reverse(a.begin(), a.end());// reverse vector from start to end
    copy(a.begin(), a.end(),ostream_iterator<int>(bFile[0],","));// copy to file

    iota(f.begin(), f.end(), 1);
    reverse(f.begin(), f.end());
    copy(f.begin(), f.end(),ostream_iterator<int>(bFile[1],","));

    iota(g.begin(), g.end(), 1);
    reverse(g.begin(), g.end());
    copy(g.begin(), g.end(),ostream_iterator<int>(bFile[2],","));

    iota(h.begin(), h.end(), 1);
    reverse(h.begin(), h.end());
    copy(h.begin(), h.end(),ostream_iterator<int>(bFile[3],","));

    iota(j.begin(), j.end(), 1);
    reverse(j.begin(), j.end());
    copy(j.begin(), j.end(),ostream_iterator<int>(bFile[4],","));

    iota(k.begin(), k.end(), 1);
    reverse(k.begin(), k.end());
    copy(k.begin(), k.end(),ostream_iterator<int>(bFile[5],","));

    iota(b.begin(), b.end(), 1);
    reverse(b.begin(), b.end());
    copy(b.begin(), b.end(),ostream_iterator<int>(bFile[6],","));

    iota(c.begin(), c.end(), 1);
    reverse(c.begin(), c.end());
    copy(c.begin(), c.end(),ostream_iterator<int>(bFile[7],","));

    iota(d.begin(), d.end(), 1);
    reverse(d.begin(), d.end());
    copy(d.begin(), d.end(),ostream_iterator<int>(bFile[8],","));

    iota(e.begin(), e.end(), 1);
    reverse(e.begin(), e.end());
    copy(e.begin(), e.end(),ostream_iterator<int>(bFile[9],","));


    cout<<"The reversed data has been successfully written into the files\n";
}