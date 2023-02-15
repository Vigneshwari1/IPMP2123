

// Write your Student class here
class Student{
    int score[5];
    public:
       void input(){
           for(int j=0;j<5;j++){
               cin>>score[j];
           }
       }
       int calculateTotalScore(){
           int sum =0;
           for(int j=0;j<5;j++){
               sum = sum + score[j];
           }
           return sum;
       }
};

