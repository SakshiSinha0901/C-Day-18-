// 1. Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

//Ques 1
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c || c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c || c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }
//Answer 1
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     } 
// }

//Ques 2 :Debug the code. It is trying to print the given pattern.
// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }
//question
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 2*n+1,gaps=(n-i-1),k=1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// //Answer

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 2*n-1,gaps=(n-i),k=1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps;
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;

// //question
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=1;j<n;j++){
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

// //answer
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){

        cout<<i;
        }
    cout<<endl;
    }
}
