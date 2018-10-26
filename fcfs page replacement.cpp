#include <iostream>
using namespace std;
int main()
{	
	int p,f,i,j,n,k;
	int avail,count=0, hit=0;
    cout << "Enter the number of pages: ";
	cin >> p;
	int rs[p];
	cout << "Enter the page numbers: ";
    for(i=0;i<p;i++)
    cin >> rs[i];
    cout << "Enter the number of frames: ";
    cin >> f;
	int frame[f];
	for(i=0;i<f;i++)
        frame[i]= -1;
    
    cout<<"Page Frame initially contains: \n";
    for(i=0;i<f;i++)
    cout<<frame[i]<<"\t";
    
	j=0;
	cout <<"\n \nRef string\t  Page Frames\n";
    for(int i=0;i<p;i++) 
	{    
		cout << rs[i] <<"\t\t";
        avail=0;
    	for(int k=0;k<f;k++)
			if(frame[k]==rs[i])
            {
		    avail=1;
		    hit++;
		    }
        
		if (avail==0){
            frame[j]=rs[i];
            j=(j+1)%f;
            count++;
            for(int k=0;k<f;k++)
            cout << frame[k] << "\t";
		}
        cout << endl;
	}
	cout << "\nTotal Page Hit Is= " << hit<<"\n";
    cout << "Total Page Fault Is= " << count;
    return 0;
}
