#ifndef TOOLS_H_
#define TOOLS_H_
#include <vector>
#include "Eigen/Dense"
#include <math.h>

using Eigen::MatrixXd;
using Eigen::VectorXd;
using namespace std;

constexpr double TWO_PI = 2 * M_PI;

class Tools {
public:
  /**
  * Constructor.
  */
  Tools();

  /**
  * Destructor.
  */
  virtual ~Tools();

  /**
  * A helper method to calculate RMSE.
  */
  VectorXd CalculateRMSE(const vector<VectorXd> &estimations, const vector<VectorXd> &ground_truth);

  /**
  * A helper method to calculate Jacobians.
  */
  MatrixXd CalculateJacobian(const VectorXd& x_state);

  /**
   * A helper method to convert Cartesian coordinates to polar coordinates.  
   */
  VectorXd ConvertToPolar(VectorXd& x);

  /**
   * Normalize theata in a polar vector with rho, theata and rho_dot.
   **/
  void NormalizePolar(VectorXd& polar);
};

#endif /* TOOLS_H_ */
