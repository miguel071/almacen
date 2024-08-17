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
	/// Resumen de electronicos
	/// </summary>
	public ref class electronicos : public System::Windows::Forms::Form
	{
	public:
		electronicos(void)
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
		~electronicos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtprecven;
	protected:

	private: System::Windows::Forms::TextBox^ txtprecos;
	protected:

	private: System::Windows::Forms::TextBox^ txtmodelo;

	private: System::Windows::Forms::TextBox^ txtmarca;

	private: System::Windows::Forms::TextBox^ txtdescripcion;

	private: System::Windows::Forms::TextBox^ txtcantidad;

	private: System::Windows::Forms::TextBox^ txtcodproducto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListView^ listAccesorios;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(electronicos::typeid));
			this->txtprecven = (gcnew System::Windows::Forms::TextBox());
			this->txtprecos = (gcnew System::Windows::Forms::TextBox());
			this->txtmodelo = (gcnew System::Windows::Forms::TextBox());
			this->txtmarca = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listAccesorios = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtprecven
			// 
			this->txtprecven->Location = System::Drawing::Point(183, 484);
			this->txtprecven->Name = L"txtprecven";
			this->txtprecven->Size = System::Drawing::Size(282, 20);
			this->txtprecven->TabIndex = 51;
			// 
			// txtprecos
			// 
			this->txtprecos->Location = System::Drawing::Point(183, 443);
			this->txtprecos->Name = L"txtprecos";
			this->txtprecos->Size = System::Drawing::Size(282, 20);
			this->txtprecos->TabIndex = 50;
			// 
			// txtmodelo
			// 
			this->txtmodelo->Location = System::Drawing::Point(183, 402);
			this->txtmodelo->Name = L"txtmodelo";
			this->txtmodelo->Size = System::Drawing::Size(282, 20);
			this->txtmodelo->TabIndex = 49;
			// 
			// txtmarca
			// 
			this->txtmarca->Location = System::Drawing::Point(183, 362);
			this->txtmarca->Name = L"txtmarca";
			this->txtmarca->Size = System::Drawing::Size(282, 20);
			this->txtmarca->TabIndex = 48;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(183, 320);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(282, 20);
			this->txtdescripcion->TabIndex = 47;
			// 
			// txtcantidad
			// 
			this->txtcantidad->Location = System::Drawing::Point(183, 281);
			this->txtcantidad->Name = L"txtcantidad";
			this->txtcantidad->Size = System::Drawing::Size(282, 20);
			this->txtcantidad->TabIndex = 46;
			// 
			// txtcodproducto
			// 
			this->txtcodproducto->Location = System::Drawing::Point(183, 245);
			this->txtcodproducto->Name = L"txtcodproducto";
			this->txtcodproducto->Size = System::Drawing::Size(282, 20);
			this->txtcodproducto->TabIndex = 45;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(12, 486);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 18);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Precio Venta:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(12, 445);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 18);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Precio Costo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(12, 404);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 18);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Modelo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 364);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Marca:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 18);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Descripción:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Cantidad:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 18);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Código de Producto:";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(313, 540);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(110, 35);
			this->button5->TabIndex = 53;
			this->button5->Text = L"Consultar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &electronicos::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(183, 540);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(110, 35);
			this->button4->TabIndex = 52;
			this->button4->Text = L"Actualizar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &electronicos::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(560, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(179, 32);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Electrónicos";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir4.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1178, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 74;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &electronicos::pictureBox1_Click);
			// 
			// listAccesorios
			// 
			this->listAccesorios->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listAccesorios.BackgroundImage")));
			this->listAccesorios->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listAccesorios->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listAccesorios->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->listAccesorios->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listAccesorios->ForeColor = System::Drawing::Color::White;
			this->listAccesorios->HideSelection = false;
			this->listAccesorios->Location = System::Drawing::Point(481, 147);
			this->listAccesorios->Name = L"listAccesorios";
			this->listAccesorios->Size = System::Drawing::Size(751, 393);
			this->listAccesorios->TabIndex = 75;
			this->listAccesorios->UseCompatibleStateImageBehavior = false;
			this->listAccesorios->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"CodProducto";
			this->columnHeader1->Width = 84;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Cantidad";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 65;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Descripción";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 229;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Marca";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 85;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Modelo";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 100;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"PrecioCosto";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 87;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"PrecioVenta";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 80;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(717, 562);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(302, 35);
			this->button1->TabIndex = 76;
			this->button1->Text = L"Limpiar ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &electronicos::button1_Click_1);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(50, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 35);
			this->button2->TabIndex = 77;
			this->button2->Text = L"Ingresar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &electronicos::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\ProProgra\\gestiondatos\\imagenes\\general\\electro.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(102, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(304, 235);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 80;
			this->pictureBox2->TabStop = false;
			// 
			// electronicos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1244, 618);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listAccesorios);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->txtprecven);
			this->Controls->Add(this->txtprecos);
			this->Controls->Add(this->txtmodelo);
			this->Controls->Add(this->txtmarca);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtcantidad);
			this->Controls->Add(this->txtcodproducto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"electronicos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"electronicos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;

	if (txtcodproducto->Text == "") {
		MessageBox::Show("Debe ingresar el Código del Producto para actualizar");

	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		int cantidad; String^ descripcion; String^ marca; String^ modelo; int precos; int precven;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update ELECTRONICOS set cantidad=@cantidad, descripcion=@descripcion, marca=@marca, modelo=@modelo, precos=@precos, precven=@precven where cod_producto01=@cod_producto01";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@cod_producto01", Convert::ToInt64(txtcodproducto->Text));
		ejecutar->Parameters->AddWithValue("@cantidad", Convert::ToInt64(txtcantidad->Text));
		ejecutar->Parameters->AddWithValue("@descripcion", txtdescripcion->Text);
		ejecutar->Parameters->AddWithValue("@marca", txtmarca->Text);
		ejecutar->Parameters->AddWithValue("@modelo", txtmodelo->Text);
		ejecutar->Parameters->AddWithValue("@precos", Convert::ToInt64(txtprecos->Text));
		ejecutar->Parameters->AddWithValue("@precven", Convert::ToInt64(txtprecven->Text));
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();

		MessageBox::Show("Registro actualizado exitosamente");

		//Limpiar textbox
		txtcodproducto->Text = "";
		txtcantidad->Text = "";
		txtdescripcion->Text = "";
		txtmarca->Text = "";
		txtmodelo->Text = "";
		txtprecos->Text = "";
		txtprecven->Text = "";
	}	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ cod_producto01; String^ cantidad; String^ descripcion; String^ marca; String^ modelo; String^ precos; String^ precven;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "gestiondatos";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Pro = gcnew ListView();
	String^ sentencia = "SELECT * FROM ELECTRONICOS";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		cod_producto01 = (reader["cod_producto01"]->ToString());
		cantidad = (reader["cantidad"]->ToString());
		descripcion = (reader["descripcion"]->ToString());
		marca = (reader["marca"]->ToString());
		modelo = (reader["modelo"]->ToString());
		precos = (reader["precos"]->ToString());
		precven = (reader["precven"]->ToString());
		String^ srtNew1 = gcnew String(cod_producto01);
		String^ srtNew2 = gcnew String(cantidad);
		String^ srtNew3 = gcnew String(descripcion);
		String^ srtNew4 = gcnew String(marca);
		String^ srtNew5 = gcnew String(modelo);
		String^ srtNew6 = gcnew String(precos);
		String^ srtNew7 = gcnew String(precven);
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		listView1->SubItems->Add(srtNew5);
		listView1->SubItems->Add(srtNew6);
		listView1->SubItems->Add(srtNew7);
		this->listAccesorios->Items->Add(listView1);

	}
	cn->Close();
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->listAccesorios->Items->Clear();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertar01(Convert::ToInt64(txtcodproducto->Text),
		Convert::ToInt64(txtcantidad->Text),
		txtdescripcion->Text,
		txtmarca->Text,
		txtmodelo->Text,
		Convert::ToInt64(txtprecos->Text),
		Convert::ToInt64(txtprecven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtcodproducto->Text = "";
	txtcantidad->Text = "";
	txtdescripcion->Text = "";
	txtmarca->Text = "";
	txtmodelo->Text = "";
	txtprecos->Text = "";
	txtprecven->Text = "";
}
};
}
