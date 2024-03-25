using namespace std;
namespace mp = boost::multiprecision;
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        mp::cpp_int prod = 1;
        bool ans = false;
        for(long i = 0;i<n;i++){
            cin>>arr[i];
            prod*=arr[i];
            if(prod%k==0){
                ans = true;
            }
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
