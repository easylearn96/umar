#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void arrangeArrival(int num, int mat[]) {
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            if (mat[j] > mat[j + 1]) {
                swap(&mat[j], &mat[j + 1]);
            }
        }
    }
}

int main() {
    // int num = 5; // Number of processes 
    int burst_time;
    
    int n;
    cout<< "write number of processes : ";
    cin>>n;
     // Burst times
	{
			int i;
    	int burst_time[n]={i}; 
			for(int i =1 ; i<=n ; i++){
    			cout<<"write burst time : \n";
				cin>>i;
			}
			
			for(int i =1 ; i<=n ; i++){
	  			cout<<"the burst time :\n ";
				cout<<i<<"\n";
			}	
	}
	
	
	 
	// Arrival times
int arrival_time;
		int j;
int	arrival_time[n] = {j}; 
			for(int j=1 ; j<=n ; j++){
				cout<<"write arrival time : \n";
				cin>>j;
			}
			
			for(int i =1 ; i<=n ; i++){
	  			cout<<"the burst time :\n ";
				cout<<i<<"\n";
			}

	
	

    arrangeArrival(n, arrival_time);

    cout << "Process\tBurst Time\tArrival Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << burst_time[i] << "\t\t" << arrival_time[i] << endl;
    }

    // Implement SJF logic here

    return 0;
}
