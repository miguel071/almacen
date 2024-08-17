#pragma once
#include "conexion.h"
#include "crear.h"

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
	/// Resumen de crear
	/// </summary>
	public ref class crear : public System::Windows::Forms::Form
	{
	public:
		crear(void)
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
		~crear()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtdpi;
	private: System::Windows::Forms::TextBox^ txtnombre1;
	private: System::Windows::Forms::TextBox^ txtnombre2;
	private: System::Windows::Forms::TextBox^ txtapellido1;
	private: System::Windows::Forms::TextBox^ txtapellido2;
	private: System::Windows::Forms::TextBox^ txtedad;
	private: System::Windows::Forms::TextBox^ txtcorreo;
	private: System::Windows::Forms::TextBox^ txtcontraseña;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(crear::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtdpi = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre1 = (gcnew System::Windows::Forms::TextBox());
			this->txtnombre2 = (gcnew System::Windows::Forms::TextBox());
			this->txtapellido1 = (gcnew System::Windows::Forms::TextBox());
			this->txtapellido2 = (gcnew System::Windows::Forms::TextBox());
			this->txtedad = (gcnew System::Windows::Forms::TextBox());
			this->txtcorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtcontraseña = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(205, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(416, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingreso de Datos de Usuario";
			this->label1->Click += gcnew System::EventHandler(this, &crear::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(73, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DPI";
			this->label2->Click += gcnew System::EventHandler(this, &crear::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(73, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Primer Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(72, 184);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Segundo Nombre";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(73, 225);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Primer Apellido";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(72, 266);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Segundo Apellido";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(73, 307);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 18);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Edad";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(73, 347);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 18);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Correo Electrónico";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(73, 388);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(102, 18);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Contraseña";
			// 
			// txtdpi
			// 
			this->txtdpi->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdpi->Location = System::Drawing::Point(239, 100);
			this->txtdpi->Name = L"txtdpi";
			this->txtdpi->Size = System::Drawing::Size(315, 22);
			this->txtdpi->TabIndex = 9;
			// 
			// txtnombre1
			// 
			this->txtnombre1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre1->Location = System::Drawing::Point(239, 142);
			this->txtnombre1->Name = L"txtnombre1";
			this->txtnombre1->Size = System::Drawing::Size(315, 22);
			this->txtnombre1->TabIndex = 10;
			// 
			// txtnombre2
			// 
			this->txtnombre2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnombre2->Location = System::Drawing::Point(239, 182);
			this->txtnombre2->Name = L"txtnombre2";
			this->txtnombre2->Size = System::Drawing::Size(315, 22);
			this->txtnombre2->TabIndex = 11;
			// 
			// txtapellido1
			// 
			this->txtapellido1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtapellido1->Location = System::Drawing::Point(239, 223);
			this->txtapellido1->Name = L"txtapellido1";
			this->txtapellido1->Size = System::Drawing::Size(315, 22);
			this->txtapellido1->TabIndex = 12;
			// 
			// txtapellido2
			// 
			this->txtapellido2->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtapellido2->Location = System::Drawing::Point(239, 264);
			this->txtapellido2->Name = L"txtapellido2";
			this->txtapellido2->Size = System::Drawing::Size(315, 22);
			this->txtapellido2->TabIndex = 13;
			// 
			// txtedad
			// 
			this->txtedad->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtedad->Location = System::Drawing::Point(239, 305);
			this->txtedad->Name = L"txtedad";
			this->txtedad->Size = System::Drawing::Size(315, 22);
			this->txtedad->TabIndex = 14;
			// 
			// txtcorreo
			// 
			this->txtcorreo->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcorreo->Location = System::Drawing::Point(239, 345);
			this->txtcorreo->Name = L"txtcorreo";
			this->txtcorreo->Size = System::Drawing::Size(315, 22);
			this->txtcorreo->TabIndex = 15;
			// 
			// txtcontraseña
			// 
			this->txtcontraseña->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcontraseña->Location = System::Drawing::Point(239, 386);
			this->txtcontraseña->Name = L"txtcontraseña";
			this->txtcontraseña->Size = System::Drawing::Size(315, 22);
			this->txtcontraseña->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Location = System::Drawing::Point(342, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 43);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &crear::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\10.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(577, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(198, 305);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.ErrorImage")));
			this->pictureBox2->ImageLocation = L"C:\\Cod_C++\\gestiondatos\\imagenes\\general\\salir4.png";
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(746, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &crear::pictureBox2_Click);
			// 
			// crear
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(799, 500);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtcontraseña);
			this->Controls->Add(this->txtcorreo);
			this->Controls->Add(this->txtedad);
			this->Controls->Add(this->txtapellido2);
			this->Controls->Add(this->txtapellido1);
			this->Controls->Add(this->txtnombre2);
			this->Controls->Add(this->txtnombre1);
			this->Controls->Add(this->txtdpi);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"crear";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"|";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Conexion cldatos;
		cldatos.Insertar2(Convert::ToInt64(txtdpi->Text),
			txtnombre1->Text,
			txtnombre2->Text,
			txtapellido1->Text,
			txtapellido2->Text,
			Convert::ToInt32(txtedad->Text),
			txtcorreo->Text,
			txtcontraseña->Text);

		MessageBox::Show("Registro guardado exitosamente");

		//Limpiar textbox
			txtdpi->Text = "";
			txtnombre1->Text = "";
			txtnombre2->Text = "";
			txtapellido1->Text = "";
			txtapellido2->Text = "";
			txtedad->Text = "";
			txtcorreo->Text = "";
			txtcontraseña->Text = "";

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
