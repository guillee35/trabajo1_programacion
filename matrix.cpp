#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "matrix.h"

using namespace std;

extern int **m_matrix;

Matrix::Matrix(int _exp){
  exp=_exp;
}


Matrix::~Matrix() {}



void Matrix::set_dimension(int m){
	N=m;
}


void Matrix::print_matrix()
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout <<*(*(m_matrix+i)+j)<< " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}

void Matrix::fill_matrix(){
	int m;
  int a[2][2]={{1,2},
               {3,4}};

  int b[3][3]={{1,2,3},
               {4,5,6},
               {7,8,9}};

	switch (exp){
		case 0: m=2;
			set_dimension(m);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					m_matrix[i][j] =a[i][j];
				}
			}
			break;
		case 1: m=3;
			set_dimension(m);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					m_matrix[i][j] =b[i][j];
				}
			}
			break;
		default:
			cout << "Matrix dimension: " << endl;
			cin >> m;
			set_dimension(m);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					m_matrix[i][j] = 0;
				}
			}
	}
}
