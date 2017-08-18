class CloseNumber {
public:
    vector<int> getCloseNumber(int x) {
        // write code here
     vector <int> result;
     int c01=0;//拖尾0的个数
     int c11=0;//拖尾0左方全为1的个数
      
     int c1=0;//拖尾1的个数
     int c0=0;//拖尾1左方全为0的位个数
     int c = x,d=x;//临时变量
//分别求取
     while(((c & 1) == 0) && (c!=0)){
         c01 ++;
         c >>= 1;
     }
     while((c & 1)==1){
         c11 ++;
         c >>= 1;
     }
     while((d & 1)==1){
         c1 ++;
         d >>= 1;
     }
     while(((d & 1) == 0) && (d!=0)){
         c0 ++;
         d >>= 1;
     }
    
  
     result.push_back((x - (1<<(c1))-(1<<(c0-1)) +1));
     result.push_back((x + (1<<(c11-1)) + (1<<c01) -1));
     return result;
    }
};
