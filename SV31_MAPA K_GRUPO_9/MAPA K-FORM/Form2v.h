#pragma once
#include "Funcion.h"
#include "Bolsa.h"
#include "Busqueda.h" 
namespace MAPAKFORM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2v
	/// </summary>
	public ref class Form2v : public System::Windows::Forms::Form
	{
	public:
		Form2v(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dgvTablaV->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvMapaK->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
			dgvTablaV->RowCount = 4;
			for (int i = 0; i < 4; i++) {
				dgvTablaV->Rows[i]->HeaderCell->Value = i.ToString();
			}

			dgvTablaV->Rows[0]->Cells[0]->Value = "0";
			dgvTablaV->Rows[1]->Cells[0]->Value = "0";
			dgvTablaV->Rows[2]->Cells[0]->Value = "1";
			dgvTablaV->Rows[3]->Cells[0]->Value = "1";

			dgvTablaV->Rows[0]->Cells[1]->Value = "0";
			dgvTablaV->Rows[1]->Cells[1]->Value = "1";
			dgvTablaV->Rows[2]->Cells[1]->Value = "0";
			dgvTablaV->Rows[3]->Cells[1]->Value = "1";
			dgvTablaV->Columns[0]->DefaultCellStyle->BackColor = System::Drawing::Color::Coral;
			dgvTablaV->Columns[1]->DefaultCellStyle->BackColor = System::Drawing::Color::Coral;

			dgvTablaV->Rows[0]->Cells[2]->Value = "0";
			dgvTablaV->Rows[1]->Cells[2]->Value = "0";
			dgvTablaV->Rows[2]->Cells[2]->Value = "0";
			dgvTablaV->Rows[3]->Cells[2]->Value = "0";

			dgvMapaK->RowCount = 2;
			dgvMapaK->Rows[0]->HeaderCell->Value = "0";
			dgvMapaK->Rows[1]->HeaderCell->Value = "1";

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2v()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dgvTablaV;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dgvMapaK;


	private: System::Windows::Forms::GroupBox^ groupBox3;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ labelSuma;



	private: System::Windows::Forms::Button^ btnAgrupar;
	private: System::Windows::Forms::Button^ btnResolver;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Busqueda* obj_busca;
		bolsa** bolsa1;
		bolsa** bolsa2;
		bolsa** bolsa4;
		funcion** matriz;
		bool btnvalidated;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label9;

private: System::Windows::Forms::Label^ labelGrupo;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2v::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dgvTablaV = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dgvMapaK = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->labelGrupo = (gcnew System::Windows::Forms::Label());
			this->btnAgrupar = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->btnResolver = (gcnew System::Windows::Forms::Button());
			this->labelSuma = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablaV))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMapaK))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Sienna;
			this->groupBox1->Controls->Add(this->dgvTablaV);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Location = System::Drawing::Point(65, 39);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(193, 251);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"TABLA DE VERDAD";
			// 
			// dgvTablaV
			// 
			this->dgvTablaV->AllowUserToAddRows = false;
			this->dgvTablaV->AllowUserToResizeColumns = false;
			this->dgvTablaV->AllowUserToResizeRows = false;
			this->dgvTablaV->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvTablaV->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvTablaV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTablaV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1, this->Column2,
					this->Column3
			});
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvTablaV->DefaultCellStyle = dataGridViewCellStyle7;
			this->dgvTablaV->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnF2;
			this->dgvTablaV->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dgvTablaV->Location = System::Drawing::Point(9, 21);
			this->dgvTablaV->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvTablaV->Name = L"dgvTablaV";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvTablaV->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dgvTablaV->RowHeadersVisible = false;
			this->dgvTablaV->RowHeadersWidth = 51;
			this->dgvTablaV->RowTemplate->Height = 24;
			this->dgvTablaV->Size = System::Drawing::Size(179, 220);
			this->dgvTablaV->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"X";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Y";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"f";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Sienna;
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->dgvMapaK);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox2->Location = System::Drawing::Point(324, 98);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(339, 191);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"MAPA DE KARNAUGH";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(308, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(179, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(308, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(16, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(179, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(235, 11);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Crear";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2v::button1_Click);
			// 
			// dgvMapaK
			// 
			this->dgvMapaK->AllowUserToAddRows = false;
			this->dgvMapaK->AllowUserToDeleteRows = false;
			this->dgvMapaK->AllowUserToResizeColumns = false;
			this->dgvMapaK->AllowUserToResizeRows = false;
			this->dgvMapaK->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvMapaK->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dgvMapaK->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMapaK->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column4, this->Column5 });
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvMapaK->DefaultCellStyle = dataGridViewCellStyle10;
			this->dgvMapaK->Location = System::Drawing::Point(5, 47);
			this->dgvMapaK->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dgvMapaK->Name = L"dgvMapaK";
			this->dgvMapaK->ReadOnly = true;
			this->dgvMapaK->RowHeadersWidth = 51;
			this->dgvMapaK->RowTemplate->Height = 24;
			this->dgvMapaK->Size = System::Drawing::Size(327, 130);
			this->dgvMapaK->TabIndex = 1;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"0";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"1";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Sienna;
			this->groupBox3->Controls->Add(this->labelGrupo);
			this->groupBox3->Controls->Add(this->btnAgrupar);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox3->Location = System::Drawing::Point(12, 343);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(697, 183);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"AGRUPACIONES";
			// 
			// labelGrupo
			// 
			this->labelGrupo->AutoSize = true;
			this->labelGrupo->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelGrupo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelGrupo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelGrupo->Location = System::Drawing::Point(5, 57);
			this->labelGrupo->MinimumSize = System::Drawing::Size(680, 110);
			this->labelGrupo->Name = L"labelGrupo";
			this->labelGrupo->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->labelGrupo->Size = System::Drawing::Size(680, 110);
			this->labelGrupo->TabIndex = 0;
			// 
			// btnAgrupar
			// 
			this->btnAgrupar->BackColor = System::Drawing::Color::White;
			this->btnAgrupar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnAgrupar->Location = System::Drawing::Point(588, 21);
			this->btnAgrupar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnAgrupar->Name = L"btnAgrupar";
			this->btnAgrupar->Size = System::Drawing::Size(99, 30);
			this->btnAgrupar->TabIndex = 4;
			this->btnAgrupar->Text = L"Agrupar";
			this->btnAgrupar->UseVisualStyleBackColor = false;
			this->btnAgrupar->Click += gcnew System::EventHandler(this, &Form2v::btnAgrupar_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Sienna;
			this->groupBox4->Controls->Add(this->btnResolver);
			this->groupBox4->Controls->Add(this->labelSuma);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox4->Location = System::Drawing::Point(12, 594);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(697, 190);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"SUMA DE PRODUCTOS";
			// 
			// btnResolver
			// 
			this->btnResolver->BackColor = System::Drawing::Color::White;
			this->btnResolver->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnResolver->Location = System::Drawing::Point(588, 21);
			this->btnResolver->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnResolver->Name = L"btnResolver";
			this->btnResolver->Size = System::Drawing::Size(99, 30);
			this->btnResolver->TabIndex = 5;
			this->btnResolver->Text = L"Resolver";
			this->btnResolver->UseVisualStyleBackColor = false;
			this->btnResolver->Click += gcnew System::EventHandler(this, &Form2v::btnResolver_Click);
			// 
			// labelSuma
			// 
			this->labelSuma->AutoSize = true;
			this->labelSuma->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelSuma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSuma->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->labelSuma->Location = System::Drawing::Point(5, 65);
			this->labelSuma->MinimumSize = System::Drawing::Size(680, 110);
			this->labelSuma->Name = L"labelSuma";
			this->labelSuma->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->labelSuma->Size = System::Drawing::Size(680, 110);
			this->labelSuma->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -251);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(725, 1169);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form2v::pictureBox1_Click);
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(20, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(40, 18);
			this->label9->TabIndex = 16;
			this->label9->Text = L"X\\Y";
			// 
			// Form2v
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(723, 825);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form2v";
			this->Text = L"Form2v";
			this->Load += gcnew System::EventHandler(this, &Form2v::Form2v_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTablaV))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMapaK))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		void DosVariables() {

			matriz = new funcion * [2];
			for (int i = 0; i < 2; i++)
				matriz[i] = new funcion[2];

			bolsa4 = new bolsa * [1];
			for (int i = 0; i < 1; i++)
				bolsa4[i] = new bolsa[4];

			bolsa2 = new bolsa * [4];
			for (int i = 0; i < 4; i++)
				bolsa2[i] = new bolsa[2];

			bolsa1 = new bolsa * [2];
			for (int i = 0; i < 2; i++)
				bolsa1[i] = new bolsa[2];

			int auxX = 0;
			int auxY = 0;
			int nr = 1;
			// Numero de referencia
			for (int i = 0; i < 2; i++) {
				for (int j = 0; j < 2; j++) {

					matriz[i][j].setX(auxX);
					matriz[i][j].setY(auxY);
					matriz[i][j].setR(nr);
					nr++;
					auxY++;
				}
				auxY = 0;
				auxX++;
			}

			matriz[0][0].setF(Convert::ToInt32(dgvTablaV->Rows[0]->Cells[2]->Value));
			matriz[0][1].setF(Convert::ToInt32(dgvTablaV->Rows[1]->Cells[2]->Value));
			matriz[1][0].setF(Convert::ToInt32(dgvTablaV->Rows[2]->Cells[2]->Value));
			matriz[1][1].setF(Convert::ToInt32(dgvTablaV->Rows[3]->Cells[2]->Value));
		}
		void Busqueda() {
				//BUSQUEDA
				obj_busca->BuscarGrupos4(bolsa4, matriz);
				obj_busca->BuscarGrupos2(bolsa2, matriz);
				obj_busca->BuscarGrupos1(bolsa1, matriz);
				int aux = 1;

				for (int i = 0; i < 1; i++) {
					if (bolsa4[i][0].getN() > 0 && bolsa4[i][0].getN() < 10) {
						labelGrupo->Text = labelGrupo->Text + "Grupo " + aux + ": " + bolsa4[i][0].getN() + ", " + bolsa4[i][1].getN() + ", " + bolsa4[i][2].getN() + " y " + bolsa4[i][3].getN() + "\n";
						aux++;
					}
				}
				for (int i = 0; i < 4; i++) {
					if (bolsa2[i][0].getN() > 0 && bolsa2[i][0].getN() < 10) {
						labelGrupo->Text = labelGrupo->Text + "Grupo " + aux + ": " + bolsa2[i][0].getN() + " y " + bolsa2[i][1].getN() + "\n";
						aux++;
					}

				}
				for (int i = 0; i < 2; i++) {
					if (bolsa1[i][0].getN() > 0 && bolsa1[i][0].getN() < 10) {
						labelGrupo->Text = labelGrupo->Text + "Grupo " + aux + ": " + bolsa1[i][0].getN() + "\n";
						aux++;
					}
				}
				if (bolsa4[0][0].getCf() == bolsa2[0][0].getCf() == bolsa1[0][0].getCf() == false)
					labelGrupo->Text = "0";
		}
			//SUMA DE PRODUCTOS
		void Suma_productos() {
			if (bolsa4[0][0].getCf() == true)
			{
				for (int i = 0; i < 1; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa4[i][0].getS().c_str());
				}
				if (bolsa2[0][0].getCf() == true) 
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa2[0][0].getCf() == true)
			{
				for (int i = 0; i < 4; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa2[i][0].getS().c_str());
					if (i != 3) {
						if (bolsa2[i + 1][0].getCf() == true) 
							labelSuma->Text = labelSuma->Text + " + ";
					}
				}
				if (bolsa1[0][0].getCf() == true) 
					labelSuma->Text = labelSuma->Text + " + ";
			}
			if (bolsa1[0][0].getCf() == true)
			{
				for (int i = 0; i < 2; i++) {
					labelSuma->Text = labelSuma->Text + gcnew String(bolsa1[i][0].getS().c_str()) + gcnew String (bolsa1[i][1].getS().c_str());
					if (i != 1) {
						if (bolsa1[i + 1][0].getCf() == true)
							labelSuma->Text = labelSuma->Text + " + ";
					}
				}
			}
			if (bolsa4[0][0].getCf() == bolsa2[0][0].getCf() == bolsa1[0][0].getCf() == false)
				labelSuma->Text = "0";
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dgvMapaK->Rows[0]->Cells[0]->Value = dgvTablaV->Rows[0]->Cells[2]->Value;
		dgvMapaK->Rows[0]->Cells[1]->Value = dgvTablaV->Rows[1]->Cells[2]->Value;
		dgvMapaK->Rows[1]->Cells[0]->Value = dgvTablaV->Rows[2]->Cells[2]->Value;
		dgvMapaK->Rows[1]->Cells[1]->Value = dgvTablaV->Rows[3]->Cells[2]->Value;
		DosVariables();
		btnvalidated = true;
	}
private: System::Void btnAgrupar_Click(System::Object^ sender, System::EventArgs^ e) {
	labelGrupo->Text = "";
	if(btnvalidated)
	Busqueda();
}
private: System::Void btnResolver_Click(System::Object^ sender, System::EventArgs^ e) {
	labelSuma->Text = "";
	if (btnvalidated) {
		Suma_productos();
		btnvalidated = false;
	}
}
private: System::Void Form2v_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
