#include<iostream>
using namespace std;
class lecture
{
	public:
		int id;
		string name;
		string sub;
		
		void inputdata()
		{
			cout<<"Enter the id ===";
			cin>>id;
			cout<<"Enter the name === ";
			cin>>name;
			cout<<"Enter the sub === ";
			cin>>sub;
		} 
		void outputdata()
		{
			cout<<"print id === "<<id<<endl;
			cout<<"print name === "<<name<<endl;
			cout<<"print subject === "<<sub<<endl;
		}
};
main()
{
	int arrsize=3;
	lecture lectarr[arrsize];
	int i;
	for(i=0;i<arrsize;i++)
	{
		cout<<"Enter lecture detail == "<<i+1<<" == "<<endl;
		lectarr[i].inputdata();
	}
	for(i=0;i<arrsize;i++)
	{
		cout<<"printf lecture detail == "<<i+1<<" == "<<endl;
		lectarr[i].outputdata();
	}
	
}
