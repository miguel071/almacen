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
	/// Resumen de cliente
	/// </summary>
	public ref class cliente : public System::Windows::Forms::Form
	{
	public:
		cliente(void)
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
		~cliente()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ label10;


	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ txtdpi;
	private: System::Windows::Forms::TextBox^ txtnombres;
	private: System::Windows::Forms::TextBox^ txtapellidos;
	private: System::Windows::Forms::TextBox^ txtdireccion;
	private: System::Windows::Forms::TextBox^ txttelefono;
	private: System::Windows::Forms::TextBox^ txtnit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListView^ ListViewClientes;

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(cliente::typeid));
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtdpi = (gcnew System::Windows::Forms::TextBox());
			this->txtnombres = (gcnew System::Windows::Forms::TextBox());
			this->txtapellidos = (gcnew System::Windows::Forms::TextBox());
			this->txtdireccion = (gcnew System::Windows::Forms::TextBox());
			this->txttelefono = (gcnew System::Windows::Forms::TextBox());
			this->txtnit = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ListViewClientes = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(62, 466);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 18);
			this->label10->TabIndex = 108;
			this->label10->Text = L"NIT:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(62, 433);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 18);
			this->label9->TabIndex = 106;
			this->label9->Text = L"Teléfono:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(62, 399);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 18);
			this->label8->TabIndex = 104;
			this->label8->Text = L"Dirección:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(62, 328);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 18);
			this->label7->TabIndex = 102;
			this->label7->Text = L"Nombres:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(62, 365);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 18);
			this->label3->TabIndex = 99;
			this->label3->Text = L"Apellidos:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(62, 286);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 18);
			this->label1->TabIndex = 98;
			this->label1->Text = L"DPI:";
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(106, 533);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(110, 35);
			this->button6->TabIndex = 110;
			this->button6->Text = L"Guardar";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &cliente::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir4.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(1165, 1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 57);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 111;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &cliente::pictureBox2_Click);
			// 
			// txtdpi
			// 
			this->txtdpi->Location = System::Drawing::Point(150, 284);
			this->txtdpi->Name = L"txtdpi";
			this->txtdpi->Size = System::Drawing::Size(282, 20);
			this->txtdpi->TabIndex = 112;
			// 
			// txtnombres
			// 
			this->txtnombres->Location = System::Drawing::Point(150, 326);
			this->txtnombres->Name = L"txtnombres";
			this->txtnombres->Size = System::Drawing::Size(282, 20);
			this->txtnombres->TabIndex = 113;
			// 
			// txtapellidos
			// 
			this->txtapellidos->Location = System::Drawing::Point(150, 363);
			this->txtapellidos->Name = L"txtapellidos";
			this->txtapellidos->Size = System::Drawing::Size(282, 20);
			this->txtapellidos->TabIndex = 114;
			// 
			// txtdireccion
			// 
			this->txtdireccion->Location = System::Drawing::Point(150, 397);
			this->txtdireccion->Name = L"txtdireccion";
			this->txtdireccion->Size = System::Drawing::Size(282, 20);
			this->txtdireccion->TabIndex = 115;
			// 
			// txttelefono
			// 
			this->txttelefono->Location = System::Drawing::Point(150, 431);
			this->txttelefono->Name = L"txttelefono";
			this->txttelefono->Size = System::Drawing::Size(282, 20);
			this->txttelefono->TabIndex = 116;
			// 
			// txtnit
			// 
			this->txtnit->Location = System::Drawing::Point(150, 464);
			this->txtnit->Name = L"txtnit";
			this->txtnit->Size = System::Drawing::Size(282, 20);
			this->txtnit->TabIndex = 117;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(394, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(670, 32);
			this->label2->TabIndex = 118;
			this->label2->Text = L"Ingresar, Actualizar o Consultar Datos de Clientes";
			this->label2->Click += gcnew System::EventHandler(this, &cliente::label2_Click);
			// 
			// ListViewClientes
			// 
			this->ListViewClientes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ListViewClientes.BackgroundImage")));
			this->ListViewClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->ListViewClientes->ForeColor = System::Drawing::Color::White;
			this->ListViewClientes->HideSelection = false;
			this->ListViewClientes->Location = System::Drawing::Point(466, 136);
			this->ListViewClientes->Name = L"ListViewClientes";
			this->ListViewClientes->Size = System::Drawing::Size(750, 364);
			this->ListViewClientes->TabIndex = 119;
			this->ListViewClientes->UseCompatibleStateImageBehavior = false;
			this->ListViewClientes->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"DPI";
			this->columnHeader1->Width = 88;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Nombres";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 182;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Apellidos";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 183;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Dirección";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 129;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Teléfono";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 76;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"NIT";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 73;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(222, 533);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 35);
			this->button1->TabIndex = 120;
			this->button1->Text = L"Actualizar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cliente::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(338, 533);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 121;
			this->button2->Text = L"Consultar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cliente::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(734, 533);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(330, 35);
			this->button3->TabIndex = 122;
			this->button3->Text = L"Limpiar ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &cliente::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\ProProgra\\gestiondatos\\imagenes\\general\\client.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(150, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(261, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 123;
			this->pictureBox1->TabStop = false;
			// 
			// cliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1244, 618);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ListViewClientes);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtnit);
			this->Controls->Add(this->txttelefono);
			this->Controls->Add(this->txtdireccion);
			this->Controls->Add(this->txtapellidos);
			this->Controls->Add(this->txtnombres);
			this->Controls->Add(this->txtdpi);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"cliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"cliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertarcliente(Convert::ToInt64(txtdpi->Text),
			txtnombres->Text,
			txtapellidos->Text,
			txtdireccion->Text,
			Convert::ToInt64(txttelefono->Text),
			Convert::ToInt64(txtnit->Text));


		MessageBox::Show("Registro guardado exitosamente");

		//Limpiar textbox
		txtdpi->Text = "";
		txtnombres->Text = "";
		txtapellidos->Text = "";
		txtdireccion->Text = "";
		txttelefono->Text = "";
		txtnit->Text = "";
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;

	if (txtdpi->Text == "") {
		MessageBox::Show("Debe ingresar el DPI del Cliente para actualizar");

	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ nombres; String^ apellidos; String^ direccion; int telefono; int NIT;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update CLIENTE set nombres=@nombres, apellidos=@apellidos, direccion=@direccion, telefono=@telefono, NIT=@NIT where dpi=@dpi";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@dpi", Convert::ToInt64(txtdpi->Text));
		ejecutar->Parameters->AddWithValue("@nombres", txtnombres->Text);
		ejecutar->Parameters->AddWithValue("@apellidos", txtapellidos->Text);
		ejecutar->Parameters->AddWithValue("@direccion", txtdireccion->Text);
		ejecutar->Parameters->AddWithValue("@telefono", txttelefono->Text);
		ejecutar->Parameters->AddWithValue("@NIT", Convert::ToInt64(txtnit->Text));
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();

		MessageBox::Show("Registro actualizado exitosamente");

		//Limpiar textbox
		txtdpi->Text = "";
		txtnombres->Text = "";
		txtapellidos->Text = "";
		txtdireccion->Text = "";
		txttelefono->Text = "";
		txtnit->Text = "";
}
};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ dpi; String^ nombres; String^ apellidos; String^ direccion; String^ telefono; String^ NIT;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));
		ListView^ Pro = gcnew ListView();
		String^ sentencia = "SELECT * FROM CLIENTE";
		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		cn->Open();
		SqlDataReader^ reader = ejecutar->ExecuteReader();
		while (reader->Read())
		{
			dpi = (reader["dpi"]->ToString());
			nombres = (reader["nombres"]->ToString());
			apellidos = (reader["apellidos"]->ToString());
			direccion = (reader["direccion"]->ToString());
			telefono = (reader["telefono"]->ToString());
			NIT = (reader["NIT"]->ToString());
			String^ srtNew1 = gcnew String(dpi);
			String^ srtNew2 = gcnew String(nombres);
			String^ srtNew3 = gcnew String(apellidos);
			String^ srtNew4 = gcnew String(direccion);
			String^ srtNew5 = gcnew String(telefono);
			String^ srtNew6 = gcnew String(NIT);
			ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
			listView1->SubItems->Add(srtNew2);
			listView1->SubItems->Add(srtNew3);
			listView1->SubItems->Add(srtNew4);
			listView1->SubItems->Add(srtNew5);
			listView1->SubItems->Add(srtNew6);
			this->ListViewClientes->Items->Add(listView1);
		}
		cn->Close();
	};
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->ListViewClientes->Items->Clear();
}
};
}
