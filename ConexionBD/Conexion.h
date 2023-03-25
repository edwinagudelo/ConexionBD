#pragma once

class CConexion
{
public:
	CConexion(void);
	~CConexion(void);
	virtual int conectarse() = 0;
};
