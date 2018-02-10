#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;


using namespace std;	


int main(){
	MatrixXd A(3,3);
   A<<1,2,3,4,5,6,7,8,9;
   MatrixXd b(3,3);
   b = (A.array() * A.array()).matrix();
   cout<<b<<endl;

	return 0;
}
