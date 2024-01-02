#include "Robert_SchofieldSortedInput.h"
void Robert_SchofieldSortedInput(){
    ofstream sFile[10];
    //creates array to set up txt files
    sFile[0].open("1000sorted.txt",ios::out); //creates file and opens in write mode
    sFile[1].open("4000sorted.txt",ios::out);
    sFile[2].open("8000sorted.txt",ios::out);
    sFile[3].open("10000sorted.txt",ios::out);
    sFile[4].open("40000sorted.txt",ios::out);
    sFile[5].open("80000sorted.txt",ios::out);
    sFile[6].open("100000sorted.txt",ios::out);
    sFile[7].open("400000sorted.txt",ios::out);
    sFile[8].open("800000sorted.txt",ios::out);
    sFile[9].open("1000000sorted.txt",ios::out);

    for(int i=1;i<=1000;i++)
    {
        int number = i;

        if (number!=1000){
            sFile[0]<<number<<",";// writes to array and adds comma
        }
        else{
            sFile[0]<<number;// if number is eof dont add comma
        }
    }
    sFile[0].close();

    for(int i=1;i<=4000;i++)
    {
        int number = i;

        if (number!=4000){
            sFile[1]<<number<<",";// writes to array and adds comma
        }
        else{
            sFile[1]<<number;// if number is eof dont add comma
        }
    }
    sFile[1].close();

    for(int i=1;i<=8000;i++)
    {
        int number = i;

        if (number!=8000){
            sFile[2]<<number<<",";// writes to array and adds comma
        }
        else{
            sFile[2]<<number;// if number is eof dont add comma
        }
    }
    sFile[2].close();

    for(int i=1;i<=10000;i++)
    {
        int number = i;

        if (number!=10000){
            sFile[3]<<number<<",";// writes to array and adds comma
        }
        else{
            sFile[3]<<number;// writes to array and adds comma
        }
    }
    sFile[3].close();

    for(int i=1;i<=40000;i++)
    {
        int number = i;

        if (number!=40000){
            sFile[4]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[4]<<number; // if number is eof dont add comma
        }

    }
    sFile[4].close();

    for(int i=1;i<=80000;i++)
    {
        int number = i;

        if (number!=80000){
            sFile[5]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[5]<<number; // if number is eof dont add comma
        }

    }
    sFile[5].close();

    for(int i=1;i<=100000;i++)
    {
        int number = i;

        if (number!=100000){
            sFile[6]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[6]<<number; // if number is eof dont add comma
        }
    }
    sFile[6].close();

    for(int i=1;i<=400000;i++)
    {
        int number = i;

        if (number!=400000){
            sFile[7]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[7]<<number; // if number is eof dont add comma
        }
    }
    sFile[7].close();

    for(int i=1;i<=800000;i++)
    {
        int number = i;

        if (number!=800000){
            sFile[8]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[8]<<number; // if number is eof dont add comma
        }
    }
    sFile[8].close();

    for(int i=1;i<=1000000;i++)
    {
        int number = i;

        if (number!=1000000){
            sFile[9]<<number<<","; // writes to array and adds comma
        }
        else{
            sFile[9]<<number; // if number is eof dont add comma
        }
    }
    sFile[9].close();

    cout<<"The sorted data has been successfully written into the files\n ";


}