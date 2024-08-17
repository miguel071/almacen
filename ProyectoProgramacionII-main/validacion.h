#pragma once
#include "conexion.h"

namespace gestiondatos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Data;
	using namespace Data::SqlClient;

	/// <summary>
	/// Resumen de validacion
	/// </summary>
	public ref class validacion : public System::Windows::Forms::Form
	{
	public:
		validacion(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~validacion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtcontraseña;
	protected:

	private: System::Windows::Forms::TextBox^ txtusuario;
	protected:

	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;













	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListView^ ListViewDatos;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ListView^ ListViewUsuarios;

	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::TextBox^ txtdpi;
	private: System::Windows::Forms::Label^ label1;












	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(validacion::typeid));
			this->txtcontraseña = (gcnew System::Windows::Forms::TextBox());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->ListViewDatos = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ListViewUsuarios = (gcnew System::Windows::Forms::ListView());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->txtdpi = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtcontraseña
			// 
			this->txtcontraseña->Location = System::Drawing::Point(138, 413);
			this->txtcontraseña->Name = L"txtcontraseña";
			this->txtcontraseña->Size = System::Drawing::Size(218, 20);
			this->txtcontraseña->TabIndex = 110;
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(138, 376);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(218, 20);
			this->txtusuario->TabIndex = 109;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(25, 378);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 18);
			this->label7->TabIndex = 108;
			this->label7->Text = L"Usuario:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(25, 415);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 18);
			this->label3->TabIndex = 106;
			this->label3->Text = L"Contraseña:";
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(96, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 40);
			this->button1->TabIndex = 125;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &validacion::button1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir4.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(749, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 126;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &validacion::pictureBox2_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(68, 262);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(410, 35);
			this->button2->TabIndex = 127;
			this->button2->Text = L"Consultar Datos de Clientes";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &validacion::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(378, 478);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(225, 35);
			this->button3->TabIndex = 128;
			this->button3->Text = L"Consultar Usuarios Creados";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &validacion::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(282, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 32);
			this->label2->TabIndex = 131;
			this->label2->Text = L"Creación de Usuarios";
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(202, 453);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 40);
			this->button4->TabIndex = 132;
			this->button4->Text = L"Cambiar Contraseña";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &validacion::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(497, 262);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 35);
			this->button5->TabIndex = 133;
			this->button5->Text = L"Limpiar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &validacion::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(609, 478);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(137, 35);
			this->button6->TabIndex = 134;
			this->button6->Text = L"Limpiar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &validacion::button6_Click);
			// 
			// ListViewDatos
			// 
			this->ListViewDatos->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ListViewDatos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader11
			});
			this->ListViewDatos->ForeColor = System::Drawing::Color::White;
			this->ListViewDatos->HideSelection = false;
			this->ListViewDatos->Location = System::Drawing::Point(28, 52);
			this->ListViewDatos->Name = L"ListViewDatos";
			this->ListViewDatos->Size = System::Drawing::Size(744, 204);
			this->ListViewDatos->TabIndex = 136;
			this->ListViewDatos->UseCompatibleStateImageBehavior = false;
			this->ListViewDatos->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"DPI";
			this->columnHeader1->Width = 91;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombre1";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 86;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Nombre2";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 81;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Apellido1";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 83;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Apellido2";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 85;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Edad";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 41;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Correo";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 157;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Contraseña";
			this->columnHeader11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader11->Width = 112;
			// 
			// ListViewUsuarios
			// 
			this->ListViewUsuarios->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->ListViewUsuarios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader8,
					this->columnHeader9, this->columnHeader10
			});
			this->ListViewUsuarios->ForeColor = System::Drawing::Color::White;
			this->ListViewUsuarios->HideSelection = false;
			this->ListViewUsuarios->Location = System::Drawing::Point(362, 315);
			this->ListViewUsuarios->Name = L"ListViewUsuarios";
			this->ListViewUsuarios->Size = System::Drawing::Size(410, 157);
			this->ListViewUsuarios->TabIndex = 137;
			this->ListViewUsuarios->UseCompatibleStateImageBehavior = false;
			this->ListViewUsuarios->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"DPI";
			this->columnHeader8->Width = 102;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Usuario";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 187;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Contraseña";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 117;
			// 
			// txtdpi
			// 
			this->txtdpi->Location = System::Drawing::Point(138, 337);
			this->txtdpi->Name = L"txtdpi";
			this->txtdpi->Size = System::Drawing::Size(218, 20);
			this->txtdpi->TabIndex = 138;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(25, 339);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 18);
			this->label1->TabIndex = 139;
			this->label1->Text = L"DPI:";
			// 
			// validacion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(799, 544);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtdpi);
			this->Controls->Add(this->ListViewUsuarios);
			this->Controls->Add(this->ListViewDatos);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtcontraseña);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"validacion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"validacion";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ dpi; String^ nombre1; String^ nombre2; String^ apellido1; String^ apellido2; String^ edad; String^ correo; String^ contraseña;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Pro = gcnew ListView();
		String^ sentencia = "SELECT * FROM CREAR";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			dpi = (reader["dpi"]->ToString());
			nombre1 = (reader["nombre1"]->ToString());
			nombre2 = (reader["nombre2"]->ToString());
			apellido1 = (reader["apellido1"]->ToString());
			apellido2 = (reader["apellido2"]->ToString());
			edad = (reader["edad"]->ToString());
			correo = (reader["correo"]->ToString());
			contraseña = (reader["contraseña"]->ToString());
			String^ srtNew1 = gcnew String(dpi);
			String^ srtNew2 = gcnew String(nombre1);
			String^ srtNew3 = gcnew String(nombre2);
			String^ srtNew4 = gcnew String(apellido1);
			String^ srtNew5 = gcnew String(apellido2);
			String^ srtNew6 = gcnew String(edad);
			String^ srtNew7 = gcnew String(correo);
			String^ srtNew8 = gcnew String(contraseña);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			listView1->SubItems->Add(srtNew7);
			listView1->SubItems->Add(srtNew8);
			this->ListViewDatos->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ListViewDatos->Items->Clear();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Crearusuario(Convert::ToInt64(txtdpi->Text),
			txtusuario->Text,
			txtcontraseña->Text);

		MessageBox::Show("Usuario Creado Exitosamente");

		//Limpiar textbox
		txtdpi->Text = "";
		txtusuario->Text = "";
		txtcontraseña->Text = "";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;

		if (txtusuario->Text == "") {
			MessageBox::Show("Debe ingresar el Usuario para Cambiar la Contraseña");
		}
		else {
			SqlConnection^ cn;
			SqlConnectionStringBuilder^ st;
			String^ correo;	String^ contraseña;
			st = gcnew SqlConnectionStringBuilder();
			st->DataSource = "localhost\\SQLEXPRESS";
			st->InitialCatalog = "gestiondatos";
			st->IntegratedSecurity = true;
			cn = gcnew SqlConnection(Convert::ToString(st));

			String^ sentencia = "update SESION set  contraseña=@contraseña where correo = @correo";
			//,
			//dpi = @dpi
			SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
			ejecutar->Parameters->AddWithValue("@correo", txtusuario->Text);
			ejecutar->Parameters->AddWithValue("@contraseña", txtcontraseña->Text);
			cn->Open();
			ejecutar->ExecuteNonQuery();
			cn->Close();

			MessageBox::Show("Contraseña cambiada Exitosamente");

			//Limpiar textbox
			txtusuario->Text = "";
			txtcontraseña->Text = "";
		}
	};
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ dpi; String^ correo; String^ contraseña;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Pro = gcnew ListView();
		String^ sentencia = "SELECT * FROM SESION";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			dpi = (reader["dpi"]->ToString());
			correo = (reader["correo"]->ToString());
			contraseña = (reader["contraseña"]->ToString());
			String^ srtNew1 = gcnew String(dpi);
			String^ srtNew2 = gcnew String(correo);
			String^ srtNew3 = gcnew String(contraseña);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			this->ListViewUsuarios->Items->Add(listView1);
		}
		cn->Close();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ListViewUsuarios->Items->Clear();
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
