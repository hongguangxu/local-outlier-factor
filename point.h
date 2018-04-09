#ifndef POINT_H
#define POINT_H

#include <stdarg.h>
#include <vector>
#include<exception>

class CPoint
	/* nά�����
	*/
{ 
private:
	std::vector<double> coordinate;	//����ֵ
	int dimension;					//ά��
public:
	CPoint(int, ...);	// ����ֵ��ʼ��
	~CPoint();

	void SetValue(int, double);	//�޸�ָ���±��ֵ
	double GetValue(int);	//�õ�ָ���±��ֵ
	int GetDimension();		//�õ�ά��
	
};

bool IsSame(CPoint, CPoint);	//�ж��Ƿ���ͬ

double DistEuclidean(CPoint, CPoint);

#endif