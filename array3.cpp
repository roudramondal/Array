// #include <iostream>
// using namespace std;
// int countdistinct(int array[],int n)
// {
//     int count = 0;
//     bool isdistinct = true;
//     for (int i = 0;i < n; i++)
//     {
//         isdistinct = true;
//         for (int j= i-1; i >=0; j--)
//         {
//             if (array[i]==array[j])
//             {
//                 isdistinct = false;
//                 break;
//             }
//         }
//         if (isdistinct == true)
//         {
//             count ++;
//         }
      
//     }
//       return count ;
// }
// int main ()
// {
//     int n;
//     cout << "Enter any number = ";
//     cin >> n;
//     int array [n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     cout << countdistinct(array,n);
//     return 0;
// }
#include<bits/stdc++.h> 
using namespace std; 
int main () 
{ 
int i,n,j,temp; 
int bt[100],wt[100],tat[100],p[100]; 
float awt=0,atat=0; 
printf("Shortest Job First Scheduling Non-Primitive(Simultaneous Arrival)\n"); 
printf("Enter the No. of processes :\n"); 
scanf("%d",&n); 
for(i=0; i<n; i++) 
{ 

printf("Enter the burst time of %d process :\n",i+1); 
scanf("%d",&bt[i]); 
p[i]=i+1; 
} 
/*Sorting According to Burst Time*/ 
for(i=0; i<n; i++) 
{ 
for(j=i+1; j<n; j++) 
{ 
if(bt[i]>bt[j]) 
{ 
temp=bt[j]; 
bt[j]=bt[i]; 
bt[i]=temp; 
temp=p[j]; 
p[j]=p[i]; 
p[i]=temp; 
} 
} 
} 
/*waiting time & turnaround time calculation of every process*/ 
wt[0]=0; 
tat[0]=bt[0]; 
for(i=1; i<n; i++) 
{ 
wt[i]=bt[i-1]+wt[i-1]; 
awt+=wt[i]; 
tat[i]=tat[i-1]+bt[i]; 
atat+=tat[i]; 
} 
atat+=tat[0]; 
atat/=n; 
awt/=n; 
printf("Process.\tB.T.\tW.T.\tT.A.T.\n"); 
for(i=0; i<n; i++) 
{ 
printf("P[%d]\t         %3d\t%3d\t%4d\n",p[i],bt[i],wt[i],tat[i]); 
} 
printf("Average Waiting Time: %0.3f\nAverage Turn Around Time:%0.3f",awt,atat);

return 0;
}