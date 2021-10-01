// Code By Preetam Singh
// Multiply two strings
// Question Link -> https://practice.geeksforgeeks.org/problems/multiply-two-strings/1


class Solution{
  public:
    /*You are required to complete below function */
  string Multiply(string s1,string s2){
        int ss1=s1.size();
       int ss2=s2.size();
       if(ss1==0 || ss2==0){
           return "0";
       }
       vector<int>v(ss1+ss2,0);
       int ci1=0,ci2=0;
      
       for(int i=ss1-1;i>=0;i--){
           int n1=s1[i]-'0';
           ci2=0;
          int carry=0;
           for(int j=ss2-1;j>=0;j--){
               int n2=s2[j]-'0';
               int sum=n1*n2+v[ci1+ci2]+carry;
               carry=sum/10;
               v[ci1+ci2]=sum%10;
               ci2++;
           }
           if(carry>0){
                v[ci1+ci2]+=carry;
           }
           ci1++;
       }
       
       int vsize=v.size()-1;
      while(vsize>0 && v[vsize]==0){
          vsize--;
      }
      if(vsize==-1){
          return "0";
      }
      string s="";
      while(vsize>=0){
          s+=to_string(v[vsize--]);
         
      }
       return s;
       
    }
    
    string multiplyStrings(string s1, string s2) {
       string res1="";
       if((s1.at(0) == '-' || s2.at(0) == '-') && 
        (s1.at(0) != '-' || s2.at(0) != '-' ))
        res1+='-';


    if(s1.at(0) == '-')
        s1 = s1.substr(1);
  
    if(s2.at(0) == '-')
        s2 = s2.substr(1);

    string res2= Multiply(s1, s2);
    if(res2.size()==1 && res2[0]=='0'){
        return res2;
    }
    string res3=res1+res2;
    return res3;
    }

};
