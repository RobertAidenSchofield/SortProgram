#include "Robert_SchofieldRandomInput.h"

void Robert_SchofieldRandomInput (){
    ofstream rFile[10];
    //creates array to set up txt files
    rFile[0].open("1000random.txt",ios::out); //creates file and opens in write mode
    rFile[1].open("4000random.txt",ios::out);
    rFile[2].open("8000random.txt",ios::out);
    rFile[3].open("10000random.txt",ios::out);
    rFile[4].open("40000random.txt",ios::out);
    rFile[5].open("80000random.txt",ios::out);
    rFile[6].open("100000random.txt",ios::out);
    rFile[7].open("400000random.txt",ios::out);
    rFile[8].open("800000random.txt",ios::out);
    rFile[9].open("1000000random.txt",ios::out);
    random_device rd;
    mt19937 z(rd());
    int sizes[] = {1000,4000,8000,10000,40000,80000,100000,400000,800000,1000000};

    vector<int> a(sizes[0]);// creates vectors
    vector<int> b(sizes[1]);
    vector<int> c(sizes[2]);
    vector<int> d(sizes[3]);
    vector<int> e(sizes[4]);
    vector<int> f(sizes[5]);
    vector<int> g(sizes[6]);
    vector<int> h(sizes[7]);
    vector<int> i(sizes[8]);
    vector<int> j(sizes[9]);
    // code block to  fill vector and randomize
    iota(a.begin(), a.end(), 1);// fills vector from start to end using std library iota
    shuffle(a.begin(), a.end(),z);// 
    copy(a.begin(), a.end(),ostream_iterator<int>(rFile[0],","));// copy to file
    iota(b.begin(), b.end(), 1);// fills vector from start to end using std library iota
    shuffle(b.begin(), b.end(),z);// reverse vector from start to end
    copy(b.begin(), b.end(),ostream_iterator<int>(rFile[1],","));// copy to file
    iota(c.begin(),c.end(), 1);// fills vector from start to end using std library iota
    shuffle(c.begin(), c.end(),z);// reverse vector from start to end
    copy(c.begin(), c.end(),ostream_iterator<int>(rFile[2],","));// copy to file
    iota(d.begin(), d.end(), 1);// fills vector from start to end using std library iota
    shuffle(d.begin(), d.end(),z);// reverse vector from start to end
    copy(d.begin(), d.end(),ostream_iterator<int>(rFile[3],","));// copy to file
    iota(e.begin(), e.end(), 1);// fills vector from start to end using std library iota
    shuffle(e.begin(), e.end(),z);// reverse vector from start to end
    copy(e.begin(), e.end(),ostream_iterator<int>(rFile[4],","));// copy to file
    iota(f.begin(), f.end(), 1);// fills vector from start to end using std library iota
    shuffle(f.begin(), f.end(),z);// shuffle vector from start to end
    copy(f.begin(), f.end(),ostream_iterator<int>(rFile[5],","));// copy to file
    iota(g.begin(), g.end(), 1);// fills vector from start to end using std library iota
    shuffle(g.begin(), g.end(),z);// shuffle vector from start to end
    copy(g.begin(), g.end(),ostream_iterator<int>(rFile[6],","));// copy to file
    iota(h.begin(), h.end(), 1);// fills vector from start to end using std library iota
    shuffle(h.begin(), h.end(),z);// shuffle vector from start to end
    copy(h.begin(), h.end(),ostream_iterator<int>(rFile[7],","));// copy to file
    iota(i.begin(), i.end(), 1);// fills vector from start to end using std library iota
    shuffle(i.begin(), i.end(),z);// shuffle vector from start to end
    copy(i.begin(), i.end(),ostream_iterator<int>(rFile[8],","));// copy to file
    iota(j.begin(), j.end(), 1);// fills vector from start to end using std library iota
    shuffle(j.begin(), j.end(),z);// shuffle vector from start to end
    copy(j.begin(), j.end(),ostream_iterator<int>(rFile[9],","));// copy to file

    cout<<"The random data has been successfully written into the files \n";

}