#pragma once
#include "conexion.h"
#include "cliente.h"
#include "cocina.h"

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
	/// Resumen de ventas03
	/// </summary>
	public ref class ventas03 : public System::Windows::Forms::Form
	{
	public:
		ventas03(void)
		{
			InitializeComponent();
			PanelFecha->Hide();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ventas03()
		{
			if (components)
			{
				delete components;
			}
		}












	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txttotalven;
	private: System::Windows::Forms::TextBox^ txtfecha;
	private: System::Windows::Forms::TextBox^ txtdpi;
	private: System::Windows::Forms::TextBox^ txtdescripcion;
	private: System::Windows::Forms::TextBox^ txtcantidadven;
	private: System::Windows::Forms::TextBox^ txtcodproducto03;







	private: System::Windows::Forms::TextBox^ txtcategoria;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtidventa;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listVentas03;

	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtidfecha;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtdia;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtmes;
	private: System::Windows::Forms::TextBox^ txtaño;
	private: System::Windows::Forms::Panel^ PanelFecha;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::ListView^ listViewFecha;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::ColumnHeader^ columnHeader10;
	private: System::Windows::Forms::ColumnHeader^ columnHeader11;
	private: System::Windows::Forms::ColumnHeader^ columnHeader12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ventas03::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txttotalven = (gcnew System::Windows::Forms::TextBox());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->txtdpi = (gcnew System::Windows::Forms::TextBox());
			this->txtdescripcion = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidadven = (gcnew System::Windows::Forms::TextBox());
			this->txtcodproducto03 = (gcnew System::Windows::Forms::TextBox());
			this->txtcategoria = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtidventa = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listVentas03 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->PanelFecha = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->listViewFecha = (gcnew System::Windows::Forms::ListView());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtidfecha = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtdia = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtmes = (gcnew System::Windows::Forms::TextBox());
			this->txtaño = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->PanelFecha->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(568, 573);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 33);
			this->button2->TabIndex = 231;
			this->button2->Text = L"Actualizar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ventas03::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(381, 573);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 33);
			this->button1->TabIndex = 230;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ventas03::button1_Click);
			// 
			// txttotalven
			// 
			this->txttotalven->Location = System::Drawing::Point(943, 513);
			this->txttotalven->Name = L"txttotalven";
			this->txttotalven->Size = System::Drawing::Size(218, 20);
			this->txttotalven->TabIndex = 229;
			// 
			// txtfecha
			// 
			this->txtfecha->Location = System::Drawing::Point(943, 480);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(218, 20);
			this->txtfecha->TabIndex = 228;
			// 
			// txtdpi
			// 
			this->txtdpi->Location = System::Drawing::Point(943, 447);
			this->txtdpi->Name = L"txtdpi";
			this->txtdpi->Size = System::Drawing::Size(218, 20);
			this->txtdpi->TabIndex = 227;
			// 
			// txtdescripcion
			// 
			this->txtdescripcion->Location = System::Drawing::Point(943, 413);
			this->txtdescripcion->Name = L"txtdescripcion";
			this->txtdescripcion->Size = System::Drawing::Size(218, 20);
			this->txtdescripcion->TabIndex = 226;
			// 
			// txtcantidadven
			// 
			this->txtcantidadven->Location = System::Drawing::Point(508, 520);
			this->txtcantidadven->Name = L"txtcantidadven";
			this->txtcantidadven->Size = System::Drawing::Size(218, 20);
			this->txtcantidadven->TabIndex = 225;
			// 
			// txtcodproducto03
			// 
			this->txtcodproducto03->Location = System::Drawing::Point(508, 487);
			this->txtcodproducto03->Name = L"txtcodproducto03";
			this->txtcodproducto03->Size = System::Drawing::Size(218, 20);
			this->txtcodproducto03->TabIndex = 224;
			// 
			// txtcategoria
			// 
			this->txtcategoria->Location = System::Drawing::Point(508, 450);
			this->txtcategoria->Name = L"txtcategoria";
			this->txtcategoria->Size = System::Drawing::Size(218, 20);
			this->txtcategoria->TabIndex = 223;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(775, 482);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 18);
			this->label11->TabIndex = 222;
			this->label11->Text = L"ID Fecha:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(775, 449);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 18);
			this->label10->TabIndex = 221;
			this->label10->Text = L"DPI:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(775, 415);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 18);
			this->label9->TabIndex = 220;
			this->label9->Text = L"Descripción:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(340, 522);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 18);
			this->label8->TabIndex = 219;
			this->label8->Text = L"Cantidad Vendida:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(340, 452);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 18);
			this->label7->TabIndex = 218;
			this->label7->Text = L"Categoría:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(775, 515);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 18);
			this->label5->TabIndex = 217;
			this->label5->Text = L"Total Venta:";
			// 
			// txtidventa
			// 
			this->txtidventa->Location = System::Drawing::Point(508, 413);
			this->txtidventa->Name = L"txtidventa";
			this->txtidventa->Size = System::Drawing::Size(218, 20);
			this->txtidventa->TabIndex = 216;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(340, 489);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(171, 18);
			this->label3->TabIndex = 215;
			this->label3->Text = L"Código Producto 03:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(340, 415);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 18);
			this->label1->TabIndex = 214;
			this->label1->Text = L"ID Venta:";
			// 
			// listVentas03
			// 
			this->listVentas03->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->listVentas03->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listVentas03->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
					this->columnHeader8
			});
			this->listVentas03->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->listVentas03->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listVentas03->ForeColor = System::Drawing::Color::White;
			this->listVentas03->HideSelection = false;
			this->listVentas03->Location = System::Drawing::Point(329, 60);
			this->listVentas03->Name = L"listVentas03";
			this->listVentas03->Size = System::Drawing::Size(890, 269);
			this->listVentas03->TabIndex = 213;
			this->listVentas03->UseCompatibleStateImageBehavior = false;
			this->listVentas03->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"NumVenta";
			this->columnHeader1->Width = 69;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Categoría";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 106;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"CodPro01";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 70;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"CantVen";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 70;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Descripción";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 211;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"DPI";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader6->Width = 163;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"IDFecha";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 87;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"TotalVenta";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 113;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(802, 338);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(359, 35);
			this->button4->TabIndex = 212;
			this->button4->Text = L"Limpiar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ventas03::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(378, 338);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(359, 35);
			this->button3->TabIndex = 211;
			this->button3->Text = L"Consultar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ventas03::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir4.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(1189, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 233;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ventas03::pictureBox1_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(624, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(241, 37);
			this->label13->TabIndex = 232;
			this->label13->Text = L"Ventas Cocina";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->PanelFecha);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->txtidfecha);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->txtdia);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->txtmes);
			this->panel1->Controls->Add(this->txtaño);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(302, 618);
			this->panel1->TabIndex = 234;
			// 
			// PanelFecha
			// 
			this->PanelFecha->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PanelFecha.BackgroundImage")));
			this->PanelFecha->Controls->Add(this->button9);
			this->PanelFecha->Controls->Add(this->button8);
			this->PanelFecha->Controls->Add(this->pictureBox3);
			this->PanelFecha->Controls->Add(this->listViewFecha);
			this->PanelFecha->Controls->Add(this->button7);
			this->PanelFecha->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelFecha->Location = System::Drawing::Point(0, 0);
			this->PanelFecha->Name = L"PanelFecha";
			this->PanelFecha->Size = System::Drawing::Size(302, 618);
			this->PanelFecha->TabIndex = 174;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(175, 509);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(119, 33);
			this->button9->TabIndex = 193;
			this->button9->Text = L"Limpiar";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ventas03::button9_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(12, 509);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(119, 33);
			this->button8->TabIndex = 192;
			this->button8->Text = L"Consultar";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ventas03::button8_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\calendario.png";
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(91, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(144, 105);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 173;
			this->pictureBox3->TabStop = false;
			// 
			// listViewFecha
			// 
			this->listViewFecha->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listViewFecha.BackgroundImage")));
			this->listViewFecha->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader9,
					this->columnHeader10, this->columnHeader11, this->columnHeader12
			});
			this->listViewFecha->Font = (gcnew System::Drawing::Font(L"Arial", 9));
			this->listViewFecha->ForeColor = System::Drawing::Color::White;
			this->listViewFecha->HideSelection = false;
			this->listViewFecha->Location = System::Drawing::Point(10, 143);
			this->listViewFecha->Name = L"listViewFecha";
			this->listViewFecha->Size = System::Drawing::Size(282, 351);
			this->listViewFecha->TabIndex = 191;
			this->listViewFecha->UseCompatibleStateImageBehavior = false;
			this->listViewFecha->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"IDFecha";
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Día";
			this->columnHeader10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader10->Width = 71;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Mes";
			this->columnHeader11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader11->Width = 79;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Año";
			this->columnHeader12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(91, 573);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 33);
			this->button7->TabIndex = 190;
			this->button7->Text = L"Salir";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ventas03::button7_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(98, 573);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 33);
			this->button6->TabIndex = 173;
			this->button6->Text = L"Consultar Fechas";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ventas03::button6_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\calendario.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(57, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(189, 154);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 172;
			this->pictureBox2->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(19, 251);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(247, 24);
			this->label14->TabIndex = 171;
			this->label14->Text = L"Ingrese Fecha de Venta";
			// 
			// txtidfecha
			// 
			this->txtidfecha->Location = System::Drawing::Point(109, 311);
			this->txtidfecha->Name = L"txtidfecha";
			this->txtidfecha->Size = System::Drawing::Size(185, 20);
			this->txtidfecha->TabIndex = 143;
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(98, 509);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 33);
			this->button5->TabIndex = 169;
			this->button5->Text = L"Guardar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ventas03::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 18);
			this->label6->TabIndex = 140;
			this->label6->Text = L"ID Fecha:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(20, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 18);
			this->label4->TabIndex = 141;
			this->label4->Text = L"Día:";
			// 
			// txtdia
			// 
			this->txtdia->Location = System::Drawing::Point(109, 358);
			this->txtdia->Name = L"txtdia";
			this->txtdia->Size = System::Drawing::Size(185, 20);
			this->txtdia->TabIndex = 144;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 406);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 18);
			this->label2->TabIndex = 142;
			this->label2->Text = L"Mes:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(20, 449);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 18);
			this->label12->TabIndex = 139;
			this->label12->Text = L"Año:";
			// 
			// txtmes
			// 
			this->txtmes->Location = System::Drawing::Point(109, 404);
			this->txtmes->Name = L"txtmes";
			this->txtmes->Size = System::Drawing::Size(185, 20);
			this->txtmes->TabIndex = 145;
			// 
			// txtaño
			// 
			this->txtaño->Location = System::Drawing::Point(109, 447);
			this->txtaño->Name = L"txtaño";
			this->txtaño->Size = System::Drawing::Size(185, 20);
			this->txtaño->TabIndex = 146;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(939, 552);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(166, 18);
			this->label15->TabIndex = 237;
			this->label15->Text = L"Consultar Datos de:";
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(1042, 573);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(119, 33);
			this->button10->TabIndex = 236;
			this->button10->Text = L"Clientes";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ventas03::button10_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(875, 573);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(119, 33);
			this->button11->TabIndex = 235;
			this->button11->Text = L"Productos";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ventas03::button11_Click);
			// 
			// ventas03
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(1244, 618);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txttotalven);
			this->Controls->Add(this->txtfecha);
			this->Controls->Add(this->txtdpi);
			this->Controls->Add(this->txtdescripcion);
			this->Controls->Add(this->txtcantidadven);
			this->Controls->Add(this->txtcodproducto03);
			this->Controls->Add(this->txtcategoria);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtidventa);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listVentas03);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ventas03";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ventas03";
			this->Load += gcnew System::EventHandler(this, &ventas03::ventas03_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->PanelFecha->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ventas03_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertarfecha03(Convert::ToInt64(txtidfecha->Text),
		txtdia->Text,
		txtmes->Text,
		Convert::ToInt64(txtaño->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtidfecha->Text = "";
	txtdia->Text = "";
	txtmes->Text = "";
	txtaño->Text = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelFecha->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	PanelFecha->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ id_fecha; String^ dia; String^ mes; String^ año;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "gestiondatos";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Pro = gcnew ListView();
	String^ sentencia = "SELECT * FROM FECHA03";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		id_fecha = (reader["id_fecha"]->ToString());
		dia = (reader["dia"]->ToString());
		mes = (reader["mes"]->ToString());
		año = (reader["año"]->ToString());
		String^ srtNew1 = gcnew String(id_fecha);
		String^ srtNew2 = gcnew String(dia);
		String^ srtNew3 = gcnew String(mes);
		String^ srtNew4 = gcnew String(año);
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		this->listViewFecha->Items->Add(listView1);
	}
	cn->Close();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listViewFecha->Items->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;
	cldatos.Insertarventas03(Convert::ToInt64(txtidventa->Text),
		txtcategoria->Text,
		Convert::ToInt64(txtcodproducto03->Text),
		Convert::ToInt64(txtcantidadven->Text),
		txtdescripcion->Text,
		Convert::ToInt64(txtdpi->Text),
		Convert::ToInt64(txtfecha->Text),
		Convert::ToInt64(txttotalven->Text));

	MessageBox::Show("Registro guardado exitosamente");

	//Limpiar textbox
	txtidventa->Text = "";
	txtcategoria->Text = "";
	txtcodproducto03->Text = "";
	txtcantidadven->Text = "";
	txtdescripcion->Text = "";
	txtdpi->Text = "";
	txtfecha->Text = "";
	txttotalven->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Conexion cldatos;

	if (txtidventa->Text == "") {
		MessageBox::Show("Debe ingresar el Número de Venta para actualizar");

	}
	else {
		SqlConnection^ cn;
		SqlConnectionStringBuilder^ st;
		String^ categoria; int cod_producto03; int cantidadven; String^ descripcion; int long long dpi; int id_fecha; int totalven;
		st = gcnew SqlConnectionStringBuilder();
		st->DataSource = "localhost\\SQLEXPRESS";
		st->InitialCatalog = "gestiondatos";
		st->IntegratedSecurity = true;
		cn = gcnew SqlConnection(Convert::ToString(st));

		String^ sentencia = "update VENTAS03 set categoria=@categoria, cod_producto03=@cod_producto03, cantidadven=@cantidadven, descripcion=@descripcion, dpi=@dpi, id_fecha=@id_fecha, totalven=@totalven where id_venta=@id_venta";

		SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
		ejecutar->Parameters->AddWithValue("@id_venta", Convert::ToInt64(txtidventa->Text));
		ejecutar->Parameters->AddWithValue("@categoria", txtcategoria->Text);
		ejecutar->Parameters->AddWithValue("@cod_producto03", Convert::ToInt64(txtcodproducto03->Text));
		ejecutar->Parameters->AddWithValue("@cantidadven", Convert::ToInt64(txtcantidadven->Text));
		ejecutar->Parameters->AddWithValue("@descripcion", txtdescripcion->Text);
		ejecutar->Parameters->AddWithValue("@dpi", Convert::ToInt64(txtdpi->Text));
		ejecutar->Parameters->AddWithValue("@id_fecha", Convert::ToInt64(txtfecha->Text));
		ejecutar->Parameters->AddWithValue("@totalven", Convert::ToInt64(txttotalven->Text));
		cn->Open();
		ejecutar->ExecuteNonQuery();
		cn->Close();

		MessageBox::Show("Registro actualizado exitosamente");

		//Limpiar textbox
		txtidventa->Text = "";
		txtcategoria->Text = "";
		txtcodproducto03->Text = "";
		txtcantidadven->Text = "";
		txtdescripcion->Text = "";
		txtdpi->Text = "";
		txtfecha->Text = "";
		txttotalven->Text = "";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ cn;
	SqlConnectionStringBuilder^ st;
	String^ id_venta; String^ categoria; String^ cod_producto03; String^ cantidadven; String^ descripcion; String^ dpi; String^ id_fecha; String^ totalven;
	st = gcnew SqlConnectionStringBuilder();
	st->DataSource = "localhost\\SQLEXPRESS";
	st->InitialCatalog = "gestiondatos";
	st->IntegratedSecurity = true;
	cn = gcnew SqlConnection(Convert::ToString(st));
	ListView^ Pro = gcnew ListView();
	String^ sentencia = "SELECT * FROM VENTAS03";
	SqlCommand^ ejecutar = gcnew SqlCommand(sentencia, cn);
	cn->Open();
	SqlDataReader^ reader = ejecutar->ExecuteReader();
	while (reader->Read())
	{
		id_venta = (reader["id_venta"]->ToString());
		categoria = (reader["categoria"]->ToString());
		cod_producto03 = (reader["cod_producto03"]->ToString());
		cantidadven = (reader["cantidadven"]->ToString());
		descripcion = (reader["descripcion"]->ToString());
		dpi = (reader["dpi"]->ToString());
		id_fecha = (reader["id_fecha"]->ToString());
		totalven = (reader["totalven"]->ToString());
		String^ srtNew1 = gcnew String(id_venta);
		String^ srtNew2 = gcnew String(categoria);
		String^ srtNew3 = gcnew String(cod_producto03);
		String^ srtNew4 = gcnew String(cantidadven);
		String^ srtNew5 = gcnew String(descripcion);
		String^ srtNew6 = gcnew String(dpi);
		String^ srtNew7 = gcnew String(id_fecha);
		String^ srtNew8 = gcnew String(totalven);
		ListViewItem^ listView1 = gcnew Windows::Forms::ListViewItem(srtNew1);
		listView1->SubItems->Add(srtNew2);
		listView1->SubItems->Add(srtNew3);
		listView1->SubItems->Add(srtNew4);
		listView1->SubItems->Add(srtNew5);
		listView1->SubItems->Add(srtNew6);
		listView1->SubItems->Add(srtNew7);
		listView1->SubItems->Add(srtNew8);
		this->listVentas03->Items->Add(listView1);
	}
	cn->Close();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listVentas03->Items->Clear();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::cliente^ comp = gcnew gestiondatos::cliente();
	comp->Show();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	gestiondatos::cocina^ comp = gcnew gestiondatos::cocina();
	comp->Show();
}
};
}
