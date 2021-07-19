#include <iostream>

#include <vector>
using namespace std;
class implementation_Queue
{
private:
	std::vector<int> arr;
	int ms=-1;
	int cs=-1;
	int front = -1;
	int rear = -1;
public:
	implementation_Queue(int n){
       this->arr[n];
       this->front=0;
       this->ms=n;
       this->cs=0;
       this->rear=n-1;


	}
	bool isfull(){
      return cs==ms;
	}
	bool isempty(){
        return cs==0;
	}
	void push(int data){
        if(!isfull()){
          rear = (rear+1)%ms;
          arr.insert(arr.begin()+rear,data);
          cs+=1;
        }
        else{
        	cout<<"Queue is full"<<endl;
        }
	}
	void pop(){
       if(!isempty()){
       	front = (front+1)%ms;
       	cs-=1;
       }else{
       	cout<<"Queue is empty"<<endl;
       }
	}
	int get_front(){
		if(!isempty()){
			return arr.at(front);
		}else{
			return 0;
		}
	}
	int display(){
		int temp=0;
		int i=front;
		while(temp<cs){
			temp=temp+1;
			cout<<arr.at(i)<<endl;
			i=(i+1)%ms;
		}
	}

	
};

int  main(int argc, char const *argv[])
{
	
	implementation_Queue q(5);
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.display();
	q.push(60);
	q.pop();
	q.pop();
	q.display();
	return 0;
}