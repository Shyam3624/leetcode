class Solution {
public:
    string intToRoman(int num) {
        string s="";
        int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string rom[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int j=0;j<13;j++)
        {
            while(num>=arr[j])
            {
              s+=rom[j];
              num-=arr[j];
            }
        }
        return s;
    }
};