//Patient.h
#pragma once
class Patient{
public:


    int index;
    int priority;
    string nume;
    string prenume;
    int varsta;
    char sex;
public:Patient(int Index,int priorityInput,string numeInput, string prenumeInput,int varstaInput,char sexInput){
        index=Index;
        priority=priorityInput;
        nume=numeInput;
        prenume=prenumeInput;
        varsta=varstaInput;
        sex=sexInput;
    }
    bool operator< (const Patient &c1)const{
        if(priority<c1.priority||priority>c1.priority){
        return priority>c1.priority;}else if(priority==c1.priority){return index>c1.index;}

    }

};

//Priority Queue.h



#pragma once
template <class T, class Container = std::vector<T>,
        class Compare = std::less<T> >
class priority_queue {
protected:
    Container c;
    Compare comp;

public:
    explicit priority_queue(const Container& c_  = Container(),
                            const Compare& comp_ = Compare())
            : c(c_), comp(comp_)
    {
        std::make_heap(c.begin(), c.end(), comp);
    }

    bool empty()       const { return c.empty(); }
    std::size_t size() const { return c.size(); }

    const T& top()     const { return c.front(); }

    void push(const T& x)
    {
        c.push_back(x);
        std::push_heap(c.begin(), c.end(), comp);
    }

    void pop()
    {
        std::pop_heap(c.begin(), c.end(), comp);
        c.pop_back();
    }
};

//main.cpp

#include<vector>
#include<iostream>
#include <algorithm>

using namespace std;
#include"Patient.h"
#include"PriorityQueue.h"


int main(){
    priority_queue<Patient>pq1;



    char semn,sex;
    string nume,prenume;
    int varsta;
    int prioritate;
    int index=0;
    while(cin>>semn){
        if(semn=='+') {
            cin >> nume >> prenume >> varsta >> sex >> prioritate;
            index++;
            pq1.push({index,prioritate, nume, prenume, varsta, sex});

        }
        if(semn=='-'){

            cout<<pq1.top().nume<<' '<<pq1.top().prenume<<' '<<pq1.top().varsta<<' '<<pq1.top().sex<<endl;
            pq1.pop();

        }
        if(semn=='*'){
            return 0;
        }
    }



}

