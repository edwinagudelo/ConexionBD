#pragma once
#include "conexion.h"
#include "libpq-fe.h"

class CConnPG :	public CConexion
{
private:

	PGconn *conexion;
public:
	CConnPG(void);
	~CConnPG(void);

	int conectarse();
};
