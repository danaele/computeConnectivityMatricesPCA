#include <cstdio> 
#include <PCA-vnlCLP.h>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <iostream>
#include <math.h>
#include <cmath>
#include <Eigen/Dense>



std::vector< std::vector<float> > read_probtrackx2_matrix( std::string inputMatrixTextFile );
void print_matrix(std::vector< std::vector<float> > matrix);
void write_matrixFile(std::vector< std::vector<float> >  matrix , std::string filename);
std::string FloatToString ( float number );
int numberOfComponents( std::vector<float> eigenValues);
int numberOfComponentsEigen( Eigen::JacobiSVD<Eigen::MatrixXd> svd);

std::vector<float> matrixAsVector ( std::vector< std::vector<float> > matrix );
std::string DoubleToString ( double number );
std::vector< std::vector<float> >  normalized_matrix( std::vector< std::vector<float> > matrix );
