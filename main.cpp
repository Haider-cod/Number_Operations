#include<iostream>
using namespace std;
class Number{
	
	private:
	int m, n;
	
	public:
		Number(int n1=0, int n2=0) : m(n1), n(n2) { }
		
// Unary operators

   //Prefix increment
Number operator ++(){
		++m;
		++n;
		return Number(m,n);
	}
	
	//Postfix increment
Number operator ++(int){
	 Number result(m, n);
		m++;
		n++;
		return result;
	}
	
	//Prefix decrement
Number operator --(){
	    --m;
		--n;
    return Number(m, n);
	}
	
	//postfix decrement
Number operator --(int){
	Number result(m, n);
	    m--;
	    n--;
	return result;
	   
	}
	//Binary Operators
	
    //Arthemetic
    
    //Addition
Number operator +(const Number &result){
		return Number(m + result.m, n + result.n);
	}
	
	//subtraction
Number operator -(const Number &result){
		return Number(m- result.m, n - result.n);
	}
	
	//multiply
Number operator *(const Number &result){
	    return Number(m * result.m, n * result.n);
	}
	
	//divison
Number operator /(const Number &result){
        return Number(m / result.m, n / result.n);
	}
	
//Relational opertor

// Equal to 
bool operator == (const Number &result) {
	   return (m == result.m && n == result.n);
}

//Not Eqaul to
bool operator!=(const Number &result) {
       return (m !=  result.m || n != result.n);
}

//Less than
bool operator <(const Number &result) {
       return (m <  result.m && n < result.n);
}

//Greater than
bool operator >(const Number &result) {
     return (m >  result.m && n > result.n);
}

//less than or Equal to
bool operator <=(const Number &result) {
    return (m <=  result.m && n <= result.n);
}

//Greater than or Equal to
bool operator >=(const Number &result) {
   return  (m >=  result.m && n >= result.n);
}


//Compound assignment operator
Number operator += (const Number &result){
	return Number(m += result.m , n += result.n);
	
}

Number operator -= (const Number &result){
	return Number(m -= result.m , n -= result.n);
	
}

Number operator *= (const Number &result){
	return Number(m *= result.m , n *= result.n);
	
}

Number operator /= (const Number &result){
    	return Number(m /= result.m , n /= result.n);
	
}

//stream extraction
friend istream &operator >> (istream &in,Number &get);

//stream insertion
friend ostream &operator << (ostream &out,const Number &display);	
};

istream &operator >> (istream &in,Number &get){
	cout<<"Enter First value :";
	in>>get.m;
	cout<<"Enter Second value :";
	in>>get.n;
	cout<<endl;
	return in;
}

ostream &operator << (ostream &out,const Number &display){
	out<<"\tvalue1 = "<<display.m<<endl;
	out<<"\tvalue2 = "<<display.n<<endl;
	
	return out;
}
int main(){
	
	Number n1 = Number(23,40), n2 = Number(70,20);
	Number n3;
		
cout<<"\tFirst Object value: \n";
        cin>>n1; 
cout<<"\tSecond Object value: \n";
        cin>>n2;
        
//Unary operator 

cout<<"\t\t===========Unary Operator===========\n\n";
   ++n1;
   --n2;
 cout<<" \t++ Obj1 : \n"<<n1<<endl;
 cout<<" \t-- Obj2 : \n"<<n2<<endl;
 
   n1++;
   n2--;
 cout<<" \tObj1 ++ : \n"<<n1<<endl;
 cout<<" \tObj2 --: \n"<<n2<<endl;
 
 
 //Binary operator
 cout<<"\t\t===========Arthmetic Operator===========\n\n";
	n3 = n1 + n2;
	cout << "\tObj1 + Obj2  \n"<<n3<<endl;

    n3 = n1 - n2;
	cout << "\tObj1 - Obj2  \n"<<n3<<endl;

    n3 = n1 * n2;
	cout << "\tObj1 * Obj2  \n"<<n3<<endl;

	n3 = n1 / n2;
	cout << "\tObj1 / Obj2  \n"<<n3<<endl;

//Relational operator

   cout<<"\t\t===========Relational Operator===========\n\n";
	cout << "\tComparison: Obj1 == Obj2: ";
	if(n1 == n2)
	   cout<<"Yes"<<endl;
	else
	   cout<<"No"<<endl;
	   
	cout << "\tComparison: Obj1 != Obj2: ";
	if(n1 != n2)
	    cout<<"Yes"<<endl;
	else
	   cout<<"No"<<endl;
	   
	cout << "\tComparison: Obj1 < Obj2: ";
	if(n1 < n2)
	   cout<<"YES"<<endl;
	else
	   cout<<"No"<<endl;
	   
	cout << "\tComparison: Obj1 > Obj2: ";
	if(n1 > n2)
	   cout<<"Yes"<<endl;
	else
	   cout<<"No"<<endl;
	   
	cout << "\tComparison: Obj1 <= Obj2: "; 
	if(n1 <= n2)
	   cout<<"Yes"<<endl;
	else
	   cout<<"No"<<endl;
	   
	cout << "\tComparison: Obj1 >= Obj2: ";
	if(n1 >= n2)
       cout<<"Yes"<<endl;
	else
	   cout<<"No"<<endl;
	   

//Compound assignment

cout<<"\t\t\n===========Compound assignment Operator===========\n\n";
	n1 += n2;
	cout << "\n\tObj1 += Obj2:" << endl;
	cout << n1 << endl;

	n1 -= n2;
	cout << "\tObj1 -= Obj2:" << endl;
	cout << n1 << endl;

	n1 *= n2;
	cout << "\tObj1 *= Obj2:" << endl;
	cout << n1 << endl;

	n1 /= n2;
	cout << "\tObj1 /= Obj2:" << endl;
	cout << n1 << endl;

	return 0;
	
}
