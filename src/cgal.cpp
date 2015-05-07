//#include <iostream>
#include </usr/include/CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include </usr/include/CGAL/convex_hull_2.h>
typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef K::Point_2 Point_2;

#include <Rcpp.h>
using namespace Rcpp;

//' CGAL test
//'
//' test CGAL
//' @export
// [[Rcpp::export]]
IntegerVector cgaltest()
{
  Point_2 points[5] = { Point_2(0,0), Point_2(10,0), Point_2(10,10), Point_2(6,5), Point_2(4,1) };
  Point_2 result[5];
  //Point_2 *ptr = CGAL::convex_hull_2( points, points+5, result );
  // std::cout <<  ptr - result << " points on the convex hull:" << std::endl;
  //  for(int i = 0; i < ptr - result; i++){
  //    std::cout << result[i] << std::endl;
  //  }
  IntegerVector xnumber(1);
  return xnumber;
}

/*** R
cgaltest()
*/



