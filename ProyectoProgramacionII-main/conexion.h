#pragma once
#include "conexion.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace Data;
using namespace Data::SqlClient;

ref class Conexion
{
    SqlConnection^ cn;
    SqlConnectionStringBuilder^ st;

protected:
    void Conectar() {
        st = gcnew SqlConnectionStringBuilder();
        st->DataSource = "localhost\\SQLEXPRESS";
        st->InitialCatalog = "gestiondatos";
        st->IntegratedSecurity = true;
        cn = gcnew SqlConnection(Convert::ToString(st));
    }

public:
    void Insertar(int long long dpi, String^ nombre, String^ correo, String^ contraseña) {
        Conectar();
        String^ sentencia = "Insert into USUARIO values(@dpi, @nombre, @correo, @contraseña)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@nombre", nombre);
        ejecutar->Parameters->AddWithValue("@correo", correo);
        ejecutar->Parameters->AddWithValue("@contraseña", contraseña);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Crearusuario(int long long dpi, String^ correo, String^ contraseña) {
        Conectar();
        String^ sentencia = "Insert into SESION values(@dpi, @correo, @contraseña)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@correo", correo);
        ejecutar->Parameters->AddWithValue("@contraseña", contraseña);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar2(int long long dpi, String^ nombre1, String^ nombre2, String^ apellido1, String^ apellido2, int edad, String^ correo, String^ contraseña) {
        Conectar();
        String^ sentencia = "Insert into CREAR values(@dpi, @nombre1, @nombre2, @apellido1, @apellido2, @edad, @correo, @contraseña)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@nombre1", nombre1);
        ejecutar->Parameters->AddWithValue("@nombre2", nombre2);
        ejecutar->Parameters->AddWithValue("@apellido1", apellido1);
        ejecutar->Parameters->AddWithValue("@apellido2", apellido2);
        ejecutar->Parameters->AddWithValue("@edad", edad);
        ejecutar->Parameters->AddWithValue("@correo", correo);
        ejecutar->Parameters->AddWithValue("@contraseña", contraseña);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    
    //Insertar Productos
    void Insertar01(int cod_producto01, int cantidad, String^ descripcion, String^ marca, String^ modelo, int precos, int precven) {
        Conectar();
        String^ sentencia = "Insert into ELECTRONICOS values(@cod_producto01, @cantidad, @descripcion, @marca, @modelo, @precos, @precven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@cod_producto01", cod_producto01);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@modelo", modelo);
        ejecutar->Parameters->AddWithValue("@precos", precos);
        ejecutar->Parameters->AddWithValue("@precven", precven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar02(int cod_producto02, int cantidad, String^ descripcion, String^ marca, String^ modelo, int precos, int precven) {
        Conectar();
        String^ sentencia = "Insert into HOGAR values(@cod_producto02, @cantidad, @descripcion, @marca, @modelo, @precos, @precven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@cod_producto02", cod_producto02);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@modelo", modelo);
        ejecutar->Parameters->AddWithValue("@precos", precos);
        ejecutar->Parameters->AddWithValue("@precven", precven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar03(int cod_producto03, int cantidad, String^ descripcion, String^ marca, String^ modelo, int precos, int precven) {
        Conectar();
        String^ sentencia = "Insert into COCINA values(@cod_producto03, @cantidad, @descripcion, @marca, @modelo, @precos, @precven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@cod_producto03", cod_producto03);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@modelo", modelo);
        ejecutar->Parameters->AddWithValue("@precos", precos);
        ejecutar->Parameters->AddWithValue("@precven", precven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar04(int cod_producto04, int cantidad, String^ descripcion, String^ marca, String^ modelo, int precos, int precven) {
        Conectar();
        String^ sentencia = "Insert into ACCESORIOS values(@cod_producto04, @cantidad, @descripcion, @marca, @modelo, @precos, @precven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@cod_producto04", cod_producto04);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@modelo", modelo);
        ejecutar->Parameters->AddWithValue("@precos", precos);
        ejecutar->Parameters->AddWithValue("@precven", precven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertar05(int cod_producto05, int cantidad, String^ descripcion, String^ marca, String^ modelo, int precos, int precven) {
        Conectar();
        String^ sentencia = "Insert into HERRAMIENTAS values(@cod_producto05, @cantidad, @descripcion, @marca, @modelo, @precos, @precven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@cod_producto05", cod_producto05);
        ejecutar->Parameters->AddWithValue("@cantidad", cantidad);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@marca", marca);
        ejecutar->Parameters->AddWithValue("@modelo", modelo);
        ejecutar->Parameters->AddWithValue("@precos", precos);
        ejecutar->Parameters->AddWithValue("@precven", precven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    //Insertar Clientes
    void Insertarcliente(int long long dpi, String^ nombres, String^ apellidos, String^ direccion, int telefono, int NIT) {
        Conectar();
        String^ sentencia = "Insert into CLIENTE values(@dpi, @nombres, @apellidos, @direccion, @telefono, @NIT)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@nombres", nombres);
        ejecutar->Parameters->AddWithValue("@apellidos", apellidos);
        ejecutar->Parameters->AddWithValue("@direccion", direccion);
        ejecutar->Parameters->AddWithValue("@telefono", telefono);
        ejecutar->Parameters->AddWithValue("@NIT", NIT);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    //Insertar Fecha de Ventas
    void Insertarfecha01(int id_fecha, String^ dia, String^ mes, int año) {
        Conectar();
        String^ sentencia = "Insert into FECHA01 values(@id_fecha, @dia, @mes, @año)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@dia", dia);
        ejecutar->Parameters->AddWithValue("@mes", mes);
        ejecutar->Parameters->AddWithValue("@año", año);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarfecha02(int id_fecha, String^ dia, String^ mes, int año) {
        Conectar();
        String^ sentencia = "Insert into FECHA02 values(@id_fecha, @dia, @mes, @año)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@dia", dia);
        ejecutar->Parameters->AddWithValue("@mes", mes);
        ejecutar->Parameters->AddWithValue("@año", año);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarfecha03(int id_fecha, String^ dia, String^ mes, int año) {
        Conectar();
        String^ sentencia = "Insert into FECHA03 values(@id_fecha, @dia, @mes, @año)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@dia", dia);
        ejecutar->Parameters->AddWithValue("@mes", mes);
        ejecutar->Parameters->AddWithValue("@año", año);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarfecha04(int id_fecha, String^ dia, String^ mes, int año) {
        Conectar();
        String^ sentencia = "Insert into FECHA04 values(@id_fecha, @dia, @mes, @año)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@dia", dia);
        ejecutar->Parameters->AddWithValue("@mes", mes);
        ejecutar->Parameters->AddWithValue("@año", año);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarfecha05(int id_fecha, String^ dia, String^ mes, int año) {
        Conectar();
        String^ sentencia = "Insert into FECHA05 values(@id_fecha, @dia, @mes, @año)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@dia", dia);
        ejecutar->Parameters->AddWithValue("@mes", mes);
        ejecutar->Parameters->AddWithValue("@año", año);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

    //Insertar Ventas 
    void Insertarventas01(int id_venta, String^ categoria, int cod_producto01, int cantidadven, String^ descripcion, int long long dpi, int id_fecha, int totalven) {
        Conectar();
        String^ sentencia = "Insert into VENTAS01 values(@id_venta, @categoria, @cod_producto01, @cantidadven, @descripcion, @dpi, @id_fecha, @totalven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@categoria", categoria);
        ejecutar->Parameters->AddWithValue("@cod_producto01", cod_producto01);
        ejecutar->Parameters->AddWithValue("@cantidadven", cantidadven);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@totalven", totalven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarventas02(int id_venta, String^ categoria, int cod_producto02, int cantidadven, String^ descripcion, int long long dpi, int id_fecha, int totalven) {
        Conectar();
        String^ sentencia = "Insert into VENTAS02 values(@id_venta, @categoria, @cod_producto02, @cantidadven, @descripcion, @dpi, @id_fecha, @totalven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@categoria", categoria);
        ejecutar->Parameters->AddWithValue("@cod_producto02", cod_producto02);
        ejecutar->Parameters->AddWithValue("@cantidadven", cantidadven);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@totalven", totalven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarventas03(int id_venta, String^ categoria, int cod_producto03, int cantidadven, String^ descripcion, int long long dpi, int id_fecha, int totalven) {
        Conectar();
        String^ sentencia = "Insert into VENTAS03 values(@id_venta, @categoria, @cod_producto03, @cantidadven02, @descripcion, @dpi, @id_fecha, @totalven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@categoria", categoria);
        ejecutar->Parameters->AddWithValue("@cod_producto03", cod_producto03);
        ejecutar->Parameters->AddWithValue("@cantidadven02", cantidadven);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@totalven", totalven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarventas04(int id_venta, String^ categoria, int cod_producto04, int cantidadven, String^ descripcion, int long long dpi, int id_fecha, int totalven) {
        Conectar();
        String^ sentencia = "Insert into VENTAS04 values(@id_venta, @categoria, @cod_producto04, @cantidadven, @descripcion, @dpi, @id_fecha, @totalven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@categoria", categoria);
        ejecutar->Parameters->AddWithValue("@cod_producto04", cod_producto04);
        ejecutar->Parameters->AddWithValue("@cantidadven", cantidadven);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@totalven", totalven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }
    void Insertarventas05(int id_venta, String^ categoria, int cod_producto05, int cantidadven, String^ descripcion, int long long dpi, int id_fecha, int totalven) {
        Conectar();
        String^ sentencia = "Insert into VENTAS05 values(@id_venta, @categoria, @cod_producto05, @cantidadven, @descripcion, @dpi, @id_fecha, @totalven)";
        SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
        ejecutar->Parameters->AddWithValue("@id_venta", id_venta);
        ejecutar->Parameters->AddWithValue("@categoria", categoria);
        ejecutar->Parameters->AddWithValue("@cod_producto05", cod_producto05);
        ejecutar->Parameters->AddWithValue("@cantidadven", cantidadven);
        ejecutar->Parameters->AddWithValue("@descripcion", descripcion);
        ejecutar->Parameters->AddWithValue("@dpi", dpi);
        ejecutar->Parameters->AddWithValue("@id_fecha", id_fecha);
        ejecutar->Parameters->AddWithValue("@totalven", totalven);
        cn->Open();
        ejecutar->ExecuteNonQuery();
        cn->Close();
    }

};
