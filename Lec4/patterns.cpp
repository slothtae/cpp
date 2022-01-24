#include<iostream>

using std::cout;
using std::endl;
using std::cin;
int main(){
  int n,i=1,j;
  cin>>n;
  while(i<=n){
    j=1;
    while(j<=n){
      cout<<j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i=1;
  while(i<n){
    j=2;
    while(j<=n){
      cout<<(n-j+1)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  int count = 1;
  i = 1;
  while(i<n){
    j = 1;
    while(j<n){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<=i){
      cout<<"* ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while(i<=n){
    j = 1;
    while(j<=i){
      cout<<i<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  count = 1;
  while(i<n){
    j = 0;
    while(j<=i){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1 ;
  while(i<=n){
    j = 0 ; 
    while(j<i){
      cout<<i+j<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while(i<n){
    j = 0;
    while(j<i){
      cout<<i-j<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  char ch = 65;
  i = 0;
  while(i<n){
    j = 0;
    while(j<n){
     cout<<char(ch+i)<<" ";
     j++;
    }

    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<n){
      cout<<char(ch+j)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  count = 0;
  while(i<n){
    j = 0;
    while(j<n){
      cout<<char(ch+count)<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<n){
      cout<<char(ch+i+j)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<=i){
      cout<<char(ch+i)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  count = 0;
  while(i<n){
   j = 0;
   while(j<=i){
     cout<<char(ch+count)<<" ";
     count++;
     j++;
   }
   cout<<endl;
   i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<=i){
      cout<<char(ch+i+j)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<=i){
      cout<<char(ch+n-1-i+j)<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = n;
  while(i--){
    j = 0;
    while(j < i){
      cout<<"  ";
      j++;
    }
    while(j<n){
      cout<<"* ";
      j++;
    }
    cout<<endl;
  }
  cout<<endl;
  i = n;
  while(i--){
    j = 0;
    while(j <= i){
      cout<<"* ";
      j++;
    }
    cout<<endl;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<i){
      cout<<"  ";
      j++;
    }
    while(j<n){
      cout<<"* ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j<i){
      cout<<"  ";
      j++;
    }
    while(j<n){
      cout<<i+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 0;
  while(i<n){
    j = 0;
    while(j < n-i-1){
      cout<<"  ";
      j++;
    }
    while(j<n){
      cout<<i+1<<" ";
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while(i<=n){
   j = 1;
   while(j < i){
     cout<<"  ";
     j++;
   }
   while(j <= n){
     cout<<j<<" ";
     j++;
   }
   cout<<endl;
   i++;
  }
  cout<<endl;
  i = 1;
  count = 1;
  while(i <= n){
    j = 1;
    while(j <= n - i){
      cout<<"  ";
      j++;
    } 
    while(j<=n){
      cout<<count<<" ";
      count++;
      j++;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while(i <= n){
    j = 1;
    while(j <= n-i){
      cout<<"  ";
      j++;
    }
    while(j<=n){
      cout<<i+j-n<<" ";
      j++;
    }
    j = i-1;
    while(j){
      cout<<j<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  i = 1;
  while(i<=n){
    j = 1;
    while(j <= n-i+1){
      cout<<j<<" ";
      j++;
    }
    while(j<=n){
      cout<<"* ";
      j++;
    }
    j = n;
    while(j > n-i+1){
      cout<<"* ";
      j--;
    }
    while(j){
      cout<<j<<" ";
      j--;
    }
    cout<<endl;
    i++;
  }
  cout<<endl;
  return 0;
}
