#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{   int DD,MM,YYYY;
    cout<<"Enter your date of birth:"<<endl;
    cin>>DD>>MM>>YYYY;
    cout<<"Enter today's date"<<endl;
    int DDD,MMM,YYYY;
    cin>>DDD>>MMM>>YYYYY;
    
    if (MM==MMM && (DDD>=DD)){cout<<"age in years:"<<YYYYY-YYYY<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)<<endl;}
    else if(MM<MMM){cout<<"age in years: "<<YYYYY-YYYY-1<<endl;
    cout<<"Age in Months is:"<<((YYYYY-YYYY)*12)-MM+MMM<<endl;}
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}