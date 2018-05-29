#include "MatrixHandler.h"
#include "Graphs.h"
#include <boost/algorithm/string.hpp>

#pragma once

namespace Bakalarka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: 
			 System::Windows::Forms::Label^  label1;
			 bool controller = false;
			 System::Windows::Forms::TextBox^  field;
			 System::Windows::Forms::TextBox^  myText;
			 System::Windows::Forms::Label^  myLabel;
			 System::Windows::Forms::Label^  mat_a_label;
			 System::Windows::Forms::Label^  label_underx;
			 System::Windows::Forms::Label^  label_upperx;
			 System::Windows::Forms::Label^  matrix_a_label;
			 System::Windows::Forms::Label^  vect_unx_label;
			 System::Windows::Forms::Label^  vector_underx_label;
			 System::Windows::Forms::Label^  vect_upx_label;
			 System::Windows::Forms::Label^  vector_upperx_label;
			 System::Windows::Forms::PictureBox^  pic1;
			 array<array<DataGridViewTextBoxColumn^, 1>^>^ field_upperx;
			 array<array<DataGridViewTextBoxColumn^, 1>^>^ field_underx;
			 array<array<DataGridViewTextBoxColumn^, 1>^>^ field_matrix;
			 System::Collections::Generic::List<PictureBox^>^ brackets = gcnew System::Collections::Generic::List<PictureBox^>();
			 System::Collections::Generic::List<Label^>^ labels = gcnew System::Collections::Generic::List<Label^>();
			 System::Windows::Forms::Label^  label2;
			 System::Windows::Forms::PictureBox^  pictureBox;
			 System::Windows::Forms::TabPage^  tabPage;
			 System::Windows::Forms::GroupBox^  groupBox1;
			 System::Windows::Forms::DataGridView^  dataGridView1;
			 System::Windows::Forms::GroupBox^  groupBox2;
			 System::Windows::Forms::GroupBox^  groupBox3;
			 System::Windows::Forms::DataGridView^  dataGridView2;
			 System::Windows::Forms::TextBox^  textBox1;
			 System::Windows::Forms::Label^  label3;
			 System::Windows::Forms::GroupBox^  groupBox4;
			 System::Windows::Forms::DataGridView^  dataGridView3;
			 DevComponents::DotNetBar::ButtonX^  buttonX1;
			 System::Windows::Forms::GroupBox^  groupBox5;
			 System::Windows::Forms::Panel^  panel1;
			 System::Windows::Forms::TabControl^  tabControl2;
			 System::Windows::Forms::TabControl^  tabControl1;
			 System::Windows::Forms::TabControl^  tabControl;
			 System::Windows::Forms::Panel^  panel2;
			 System::Windows::Forms::Panel^  panel;
			 System::Windows::Forms::Panel^  panelis;

			 System::Windows::Forms::CheckBox^  checkBox1;
			 int fieldIndex = 0;
			 int posx_a = 0;
			 int posy_a = 0;
			 int posx_x = 0;
			 int posy_x = 0;
			 int generation = 0;
			 System::Int32 minimum;
			 System::Int32 maximum;
			 array<float>^ invariantUpperbound;
			 array<float>^ eigenVector;
			 array<float>^ undervector;
			 array<float>^ underbound1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label7;
	private: DevComponents::DotNetBar::ButtonX^  buttonX2;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label12;
	private: DevComponents::DotNetBar::ButtonX^  buttonX3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::Panel^  panel5;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->field = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonX2 = (gcnew DevComponents::DotNetBar::ButtonX());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonX1 = (gcnew DevComponents::DotNetBar::ButtonX());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonX3 = (gcnew DevComponents::DotNetBar::ButtonX());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(156, 212);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 1;
			// 
			// field
			// 
			this->field->Location = System::Drawing::Point(175, 40);
			this->field->Name = L"field";
			this->field->Size = System::Drawing::Size(133, 20);
			this->field->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(24, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Rozmer matice: ";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->field);
			this->groupBox1->Location = System::Drawing::Point(34, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(394, 239);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Vstup:";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(27, 214);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(104, 17);
			this->checkBox2->TabIndex = 17;
			this->checkBox2->Text = L"Náhodná matica";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label11->Location = System::Drawing::Point(243, 138);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"do";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(172, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 17);
			this->label10->TabIndex = 15;
			this->label10->Text = L"od";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(273, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(35, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(202, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(35, 20);
			this->textBox2->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label7->Location = System::Drawing::Point(24, 138);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(47, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Škála:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->checkBox1->Location = System::Drawing::Point(27, 188);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(292, 19);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Výpočet vlastného vektora v neohraničenom tvare";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(175, 88);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(133, 20);
			this->textBox1->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label3->Location = System::Drawing::Point(24, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Názov matice:";
			// 
			// buttonX2
			// 
			this->buttonX2->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->buttonX2->ColorTable = DevComponents::DotNetBar::eButtonColor::OrangeWithBackground;
			this->buttonX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->buttonX2->Location = System::Drawing::Point(1128, 296);
			this->buttonX2->Name = L"buttonX2";
			this->buttonX2->Size = System::Drawing::Size(181, 60);
			this->buttonX2->Style = DevComponents::DotNetBar::eDotNetBarStyle::OfficeMobile2014;
			this->buttonX2->TabIndex = 3;
			this->buttonX2->Text = L"Generovanie matice";
			this->buttonX2->Click += gcnew System::EventHandler(this, &MyForm::generateButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->Location = System::Drawing::Point(15, 20);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(222, 205);
			this->dataGridView1->TabIndex = 12;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->groupBox2->Location = System::Drawing::Point(451, 39);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(252, 239);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Matica";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Location = System::Drawing::Point(727, 39);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(73, 239);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dolný vec:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Menu;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView2->Location = System::Drawing::Point(26, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(45, 205);
			this->dataGridView2->TabIndex = 12;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Controls->Add(this->dataGridView3);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->groupBox4->Location = System::Drawing::Point(821, 39);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(73, 239);
			this->groupBox4->TabIndex = 15;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Horný vec:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCellsExceptHeader;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCellsExceptHeaders;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::Desktop;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView3->Location = System::Drawing::Point(26, 19);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(45, 205);
			this->dataGridView3->TabIndex = 12;
			// 
			// buttonX1
			// 
			this->buttonX1->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->buttonX1->ColorTable = DevComponents::DotNetBar::eButtonColor::OrangeWithBackground;
			this->buttonX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonX1->Location = System::Drawing::Point(1128, 367);
			this->buttonX1->Name = L"buttonX1";
			this->buttonX1->Size = System::Drawing::Size(181, 46);
			this->buttonX1->Style = DevComponents::DotNetBar::eDotNetBarStyle::StyleManagerControlled;
			this->buttonX1->TabIndex = 16;
			this->buttonX1->Text = L"Výpočet";
			this->buttonX1->Click += gcnew System::EventHandler(this, &MyForm::calculateButton_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->panel1);
			this->groupBox5->Location = System::Drawing::Point(915, 39);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(394, 239);
			this->groupBox5->TabIndex = 17;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Náhľad:";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoScrollMargin = System::Drawing::Size(40, 0);
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Location = System::Drawing::Point(6, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(382, 214);
			this->panel1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 20, 3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(583, 382);
			this->tabControl1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tabControl1);
			this->panel2->Location = System::Drawing::Point(34, 296);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(586, 382);
			this->panel2->TabIndex = 18;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label16->Location = System::Drawing::Point(112, 332);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 29);
			this->label16->TabIndex = 29;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label15->Location = System::Drawing::Point(156, 332);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 25);
			this->label15->TabIndex = 28;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(27, 282);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(0, 20);
			this->label14->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(27, 162);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 20);
			this->label13->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(27, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 25;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(32, 89);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 23);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label12->Location = System::Drawing::Point(112, 212);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 29);
			this->label12->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label6->Location = System::Drawing::Point(156, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 25);
			this->label6->TabIndex = 21;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label5->Location = System::Drawing::Point(58, 86);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 29);
			this->label5->TabIndex = 20;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1331, 24);
			this->menuStrip1->TabIndex = 22;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem3 });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(50, 20);
			this->toolStripMenuItem1->Text = L"Menu";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(110, 22);
			this->toolStripMenuItem3->Text = L"Koniec";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem4 });
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(57, 20);
			this->toolStripMenuItem2->Text = L"Pomoc";
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(138, 22);
			this->toolStripMenuItem4->Text = L"O programe";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->panel5);
			this->groupBox6->Location = System::Drawing::Point(640, 296);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(446, 382);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Výstup:";
			// 
			// panel5
			// 
			this->panel5->AutoScroll = true;
			this->panel5->Controls->Add(this->label16);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->pictureBox2);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(6, 12);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(434, 364);
			this->panel5->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(1128, 475);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(181, 203);
			this->panel3->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(69, 166);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"© 2016";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 146);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(106, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Vyrobil: Róbert Halas";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"logo-tuke.png";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(38, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(108, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// buttonX3
			// 
			this->buttonX3->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->buttonX3->ColorTable = DevComponents::DotNetBar::eButtonColor::OrangeWithBackground;
			this->buttonX3->Enabled = false;
			this->buttonX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonX3->Location = System::Drawing::Point(1128, 423);
			this->buttonX3->Name = L"buttonX3";
			this->buttonX3->Size = System::Drawing::Size(181, 46);
			this->buttonX3->Style = DevComponents::DotNetBar::eDotNetBarStyle::StyleManagerControlled;
			this->buttonX3->TabIndex = 25;
			this->buttonX3->Text = L"Zobrazenie výstupu";
			this->buttonX3->Click += gcnew System::EventHandler(this, &MyForm::buttonX3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(1331, 692);
			this->Controls->Add(this->buttonX3);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->buttonX2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->buttonX1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Výpočet najväčšieho X-vlastného vektora";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
	System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) {	
		this->buttonX3->Enabled = false;

		System::Int32::TryParse(this->textBox2->Text, minimum);
		System::Int32::TryParse(this->textBox3->Text, maximum);

		if (minimum > maximum) {
			MessageBox::Show("Zadal si zlú škálu!",
				"Výpočet", MessageBoxButtons::OK);
			return;
		}

		if (this->textBox1->Text->Length != 0 && this->field->Text->Length != 0)
		{
			int posx_label = 0;
			int posy_label = 0;
			fieldIndex = System::Convert::ToInt32(field->Text);

			ublas::matrix<float> matrix_a(fieldIndex, fieldIndex);
			for (int i = 0; i < fieldIndex; i++)
			{
				for (int j = 0; j < fieldIndex; j++)
				{
					if (this->dataGridView1->Rows[j]->Cells[i]->Value)
					{
						System::Int32 number;
						System::Int32::TryParse(this->dataGridView1->Rows[j]->Cells[i]->Value->ToString(), number);
						if (number < minimum || number > maximum) {
							MessageBox::Show("Číslo v matici nie je v škále!",
								"Výpočet", MessageBoxButtons::OK);
							return;
						}
						matrix_a(j, i) = number;
						matrix_a_label = gcnew Label();
						posx_label = 75 + 20 * i;
						posy_label = posy_x + 20 * j + 50;
						this->matrix_a_label->Location = System::Drawing::Point(posx_label, posy_label);
						this->matrix_a_label->AutoSize = true;
						this->matrix_a_label->Text = number.ToString();
						labels->Add(matrix_a_label);
						this->panel1->Controls->Add(matrix_a_label);
					}
					else {
						MessageBox::Show("Zadaj čísla do riadka a stľpca!",
							"Výpočet", MessageBoxButtons::OK);
						return;
					}
				}
			}

			mat_a_label = gcnew Label();
			this->mat_a_label->Location = System::Drawing::Point(35, posy_label - fieldIndex * 10 + 8);
			this->mat_a_label->Size = System::Drawing::Size(27, 13);
			this->mat_a_label->Text = textBox1->Text + "=";
			labels->Add(mat_a_label);
			this->panel1->Controls->Add(mat_a_label);

			addBracket(65, posy_x, fieldIndex, true);

			std::vector<float> under_x;
			for (int i = 0; i < 1; i++)
			{
				for (int j = 0; j < fieldIndex; j++)
				{
					if (this->dataGridView2->Rows[j]->Cells[i]->Value)
					{
						int spacex = 100;
						int spacey = 50;
						System::Int32 number;
						System::Int32::TryParse(this->dataGridView2->Rows[j]->Cells[i]->Value->ToString(), number);
						if (number < minimum || number > maximum) {
							MessageBox::Show("Číslo v matici nie je v škále!",
								"Výpočet", MessageBoxButtons::OK);
							return;
						}
						under_x.push_back(number);
						vector_underx_label = gcnew Label();
						this->vector_underx_label->Location = System::Drawing::Point(posx_label + spacex, posy_x + 20 * j + spacey);
						this->vector_underx_label->AutoSize = true;
						this->vector_underx_label->Text = number.ToString();
						labels->Add(vector_underx_label);
						this->panel1->Controls->Add(vector_underx_label);
					}
					else {
						MessageBox::Show("Zadaj čísla do dolného vektora!",
							"Výpočet", MessageBoxButtons::OK);
						return;
					}
				}
			}
			vect_unx_label = gcnew Label();
			this->vect_unx_label->Location = System::Drawing::Point(posx_label + 55, posy_label - fieldIndex * 10 + 8);
			this->vect_unx_label->Size = System::Drawing::Size(27, 26);
			this->vect_unx_label->Text = L"x̲ = ";
			this->panel1->Controls->Add(vect_unx_label);
			labels->Add(vect_unx_label);

			addBracket(posx_label + 90, posy_x, fieldIndex, false);

			std::vector<float> upper_x;
			for (int i = 0; i < 1; i++)
			{
				for (int j = 0; j < fieldIndex; j++)
				{
					if (this->dataGridView3->Rows[j]->Cells[i]->Value)
					{
						int spacey = 50;
						int spacex = 200;
						System::Int32 number;
						System::Int32::TryParse(this->dataGridView3->Rows[j]->Cells[i]->Value->ToString(), number);
						if (number < minimum || number > maximum) {
							MessageBox::Show("Číslo v matici nie je v škále!",
								"Výpočet", MessageBoxButtons::OK);
							return;
						}
						upper_x.push_back(number);
						vector_upperx_label = gcnew Label();
						this->vector_upperx_label->Location = System::Drawing::Point(posx_label + spacex, posy_x + 20 * j + spacey);
						this->vector_upperx_label->Size = System::Drawing::Size(13, 13);
						this->vector_upperx_label->Text = number.ToString();
						this->panel1->Controls->Add(vector_upperx_label);
						labels->Add(vector_upperx_label);
					}
					else {
						MessageBox::Show("Zadaj čísla do horného vektora!",
							"Výpočet", MessageBoxButtons::OK);
						return;
					}
				}
			}

			Matrix matrix(matrix_a, under_x, upper_x);
			this->pictureBox2->Load(L"x-1.png");
			if (this->checkBox1->Checked) {
				this->label14->Text = L"Invariantná dolná hranica:";
				this->label4->Text = L"Najväčší vlastný vektor:";
				this->label13->Text = L"Invariantná horná hranica:";
				this->label5->Text = L" (" + textBox1->Text + L") =";
				this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
				this->label15->Location = System::Drawing::Point(32, 332);
				this->label15->Text = L"V neohraničenom prípade vektor x̲ nepočítame";
				this->label15->ForeColor = System::Drawing::Color::Red;
				this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
				this->label1->Location = System::Drawing::Point(32, 212);
				this->label1->Text = L"V neohraničenom prípade vektor x͂ nepočítame";
				this->label1->ForeColor = System::Drawing::Color::Red;
				upper_x = matrix.GetUpper();
				std::vector<float> eigen = matrix.CalcEigenVector(true);
				std::vector<float> underbound = matrix.InvariantUnderbound();
				std::wstring value = this->getString(eigen);
				std::wstring value1 = this->getString(underbound);
				if (value == L"no")
				{
					controller = true;
					this->label6->Text = L"{  } - neexistuje";
					this->label6->ForeColor = System::Drawing::Color::Red;
				}
				else
				{
					controller = false;
					eigenVector = gcnew array<float>(eigen.size());
					for (int i = 0; i < eigen.size(); i++)
					{
						eigenVector[eigen.size() - i - 1] = eigen[i];
					}
					this->buttonX3->Enabled = true;
					this->label6->Location = System::Drawing::Point(122, 86);
					this->label6->Text = gcnew String(value.c_str());
					this->label6->ForeColor = System::Drawing::Color::Green;
				}
			}
			else {
				std::vector<float> invUpperbound = matrix.ChangeUpper();
				std::vector<float> invUnderbound = matrix.InvariantUnderbound();
				std::wstring value = this->getString(invUpperbound);
				this->label14->Text = L"Invariantná dolná hranica:";
				this->label4->Text = L"Najväčší vlastný vektor:";
				this->label13->Text = L"Invariantná horná hranica:";
				this->label12->Text = L"x͂ =";
				this->label16->Text = L"x̲ =";
				this->label5->Text = L" (" + textBox1->Text + L", X) =";
				if (value == L"no")
				{
					controller = true;
					this->label1->Text = L"{  } - neexistuje";
					this->label1->ForeColor = System::Drawing::Color::Red;

					this->label6->Text = L"{  } - neexistuje";
					this->label6->ForeColor = System::Drawing::Color::Red;
					this->label15->Text = L"{  } - neexistuje";
					this->label15->ForeColor = System::Drawing::Color::Red;
				}
				else
				{
					controller = false;
					invariantUpperbound = gcnew array<float>(invUpperbound.size());

					for (int i = 0; i < invUpperbound.size(); i++)
					{
						invariantUpperbound[invUpperbound.size() - i - 1] = invUpperbound[i];
					}

					underbound1 = gcnew array<float>(invUnderbound.size());

					for (int i = 0; i < invUnderbound.size(); i++)
					{
						underbound1[invUnderbound.size() - i - 1] = invUnderbound[i];
					}

					this->label1->Text = gcnew String(value.c_str());
					this->label1->ForeColor = System::Drawing::Color::Green;

					std::vector<float> eigen = matrix.CalcEigenVector(false);
					std::wstring value = this->getString(eigen);
					std::vector<float> underbound = matrix.InvariantUnderbound();
					std::wstring value1 = this->getString(underbound);
					if (value == L"no")
					{
						controller = true;
						this->label6->Text = L"{  } - neexistuje";
						this->label6->ForeColor = System::Drawing::Color::Red;
						this->label15->Text = L"{  } - neexistuje";
						this->label15->ForeColor = System::Drawing::Color::Red;
					}
					else
					{
						controller = false;
						eigenVector = gcnew array<float>(eigen.size());

						for (int i = 0; i < eigen.size(); i++)
						{
							eigenVector[eigen.size() - i - 1] = eigen[i];
						}
						this->buttonX3->Enabled = true;
						this->label6->Text = gcnew String(value.c_str());
						this->label15->Text = gcnew String(value1.c_str());
						this->label15->ForeColor = System::Drawing::Color::Green;
						this->label6->ForeColor = System::Drawing::Color::Green;
					}
				}
			}

			vect_upx_label = gcnew Label();
			this->vect_upx_label->Location = System::Drawing::Point(posx_label + 160, posy_label - fieldIndex * 10 + 8);
			this->vect_upx_label->Size = System::Drawing::Size(27, 26);
			this->vect_upx_label->Text = L"x̅ = ";
			this->panel1->Controls->Add(vect_upx_label);
			labels->Add(vect_upx_label);

			addBracket(posx_label + 190, posy_x, fieldIndex, false);
			Graphs graphs(matrix_a, under_x, upper_x);
			std::vector<std::wstring> vectorImg = graphs.exportGraph(generation);

			if (vectorImg.size() > 0) {
				if (tabControl1->TabPages->Count > 0) {
					this->tabControl1->TabPages->Clear();
				}

				bool quit = true;
				if (controller) {
					quit = false;
					System::Windows::Forms::TabPage^ tabPage = gcnew System::Windows::Forms::TabPage();
					System::Windows::Forms::Label^ labl = gcnew System::Windows::Forms::Label();
					this->tabControl1->Controls->Add(tabPage);
					tabPage->Controls->Add(labl);
					tabPage->Location = System::Drawing::Point(4, 22);
					tabPage->Size = System::Drawing::Size(400, 400);
					tabPage->TabIndex = 0;
					tabPage->Text = "";
					labl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
					labl->Location = System::Drawing::Point(70, 135);
					labl->Size = System::Drawing::Size(500, 400);
					labl->ForeColor = System::Drawing::Color::Red;
					labl->Text = "Najväčší vlastný vektor neexistuje.\nNie je možné vykresliť príslušne digrafy.";

				}
				else {
					quit = true;
				}
				int i = 0;
				while (quit) {
					tabPage = gcnew System::Windows::Forms::TabPage();
					std::vector<std::wstring> splitted;
					split(splitted, vectorImg[i], boost::is_any_of(L"_"));

					int imageNumber = std::stoi(splitted[0]);

					std::wstringstream ss;
					ss << "Bod(k) = " << imageNumber;
					std::wstring text = ss.str();

					String^ str2 = gcnew String(text.c_str());

					this->tabPage->Location = System::Drawing::Point(4, 22);
					this->tabPage->Name = str2;
					this->tabPage->Padding = System::Windows::Forms::Padding(3);
					this->tabPage->AutoScroll = true;
					this->tabPage->Text = str2;
					this->tabPage->UseVisualStyleBackColor = false;
					this->tabControl1->Controls->Add(this->tabPage);


					bool create = true;

					while (quit) {
						std::vector<std::wstring> splitted;
						split(splitted, vectorImg[i], boost::is_any_of(L"_"));

						int tempNumber = std::stoi(splitted[0]);

						if (imageNumber != tempNumber) {
							break;
						}

						int imageType = std::stoi(splitted[1]);;
						if (create) {
							tabControl = gcnew System::Windows::Forms::TabControl();
							panel = gcnew System::Windows::Forms::Panel();
							this->panel->AutoSize = true;
							this->tabPage->Controls->Add(this->panel);
							this->tabControl->Size = System::Drawing::Size(572, 352);
							this->panel->Controls->Add(this->tabControl);
							create = false;
						}

						std::wstringstream ss;
						ss << "G( A(" << imageType << "), x(" << imageType << ") )";
						std::wstring text = ss.str();

						String^ str2 = gcnew String(text.c_str());

						tabPage = gcnew System::Windows::Forms::TabPage();
						this->tabPage->Location = System::Drawing::Point(4, 22);
						this->tabPage->Name = str2;
						this->tabPage->Padding = System::Windows::Forms::Padding(3);
						this->tabPage->AutoScroll = true;
						this->tabPage->Text = str2;
						this->tabPage->UseVisualStyleBackColor = false;
						this->tabControl->Controls->Add(this->tabPage);

						while (quit) {
							std::vector<std::wstring> splitted;
							split(splitted, vectorImg[i], boost::is_any_of(L"_"));

							int tempNumberFirst = std::stoi(splitted[0]);
							int tempNumber = std::stoi(splitted[1]);

							if (imageNumber != tempNumberFirst || imageType != tempNumber) {
								break;
							}

							int type = std::stoi(splitted[2]);
							if (type == 0) {
								tabControl2 = gcnew System::Windows::Forms::TabControl();
								panel = gcnew System::Windows::Forms::Panel();
								this->panel->AutoSize = true;
								this->tabPage->Controls->Add(this->panel);
								this->tabControl2->Size = System::Drawing::Size(560, 322);
								this->panel->Controls->Add(this->tabControl2);
								tabPage = gcnew System::Windows::Forms::TabPage();
								this->tabPage->Location = System::Drawing::Point(4, 22);
								this->tabPage->Name = L"Normálne";
								this->tabPage->Text = L"Normálne";
							}
							else {
								tabPage = gcnew System::Windows::Forms::TabPage();
								this->tabPage->Location = System::Drawing::Point(4, 22);
								this->tabPage->Name = L"Upravené";
								this->tabPage->Text = L"Upravené";
							}

							this->tabPage->Padding = System::Windows::Forms::Padding(3);
							this->tabPage->AutoScroll = true;
							this->tabPage->UseVisualStyleBackColor = false;
							this->tabControl2->Controls->Add(this->tabPage);

							pictureBox = gcnew System::Windows::Forms::PictureBox();
							this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
							this->pictureBox->Location = System::Drawing::Point(30, 30);

							std::wstringstream ss;
							ss << L"image" << generation << L"_" << vectorImg[i] << L".png";
							std::wstring text = ss.str();

							String^ str2 = gcnew String(text.c_str());
							this->pictureBox->Load(str2);
							this->tabPage->Controls->Add(this->pictureBox);
							i++;
							if (i >= vectorImg.size())
								quit = false;
						}
					}
				}
				generation++;
			}
		}
		else {
			MessageBox::Show("Zadajte názov a rozmer matice!",
				"Generovanie matice", MessageBoxButtons::OK);
		}
	}


	private: 
	System::Void generateButton_Click(System::Object^ sender, System::EventArgs^  e) {
		clearScreen();

		if (this->textBox1->Text->Length != 0 && this->field->Text->Length != 0)
		{
			this->groupBox2->Text = "Matica " + textBox1->Text + ":";
			System::Int32 fieldIndex;
			System::Int32::TryParse(field->Text, fieldIndex);
			if (fieldIndex != 0) {
				System::Int32::TryParse(this->textBox2->Text, minimum);
				System::Int32::TryParse(this->textBox3->Text, maximum);

				if (minimum > maximum) {
					MessageBox::Show("Zadal si zlú škálu!",
						"Výpočet", MessageBoxButtons::OK);
					return;
				}

				this->dataGridView1->ColumnCount = fieldIndex;
				this->dataGridView1->RowCount = fieldIndex;
				this->dataGridView2->RowCount = fieldIndex;
				this->dataGridView3->RowCount = fieldIndex;
				srand(time(NULL));
				if (this->checkBox2->Checked) {
					for (unsigned int i = 0; i < fieldIndex; i++) {
						int numbermin = rand() % (maximum - minimum + 1) + minimum;
						this->dataGridView2->Rows[i]->Cells[0]->Value = numbermin;
						int numbermax = 0;
						while (numbermax < numbermin)
						{
							numbermax = rand() % (maximum - minimum + 1) + minimum;
							
						}
						this->dataGridView3->Rows[i]->Cells[0]->Value = numbermax;
						for (unsigned int j = 0; j < fieldIndex; j++) {
							this->dataGridView1->Rows[j]->Cells[i]->Value = rand() % (maximum - minimum + 1) + minimum;
						}
					}
				}
				if (this->checkBox1->Checked) {
					for (unsigned int i = 0; i < fieldIndex; i++) {
						this->dataGridView2->Rows[i]->Cells[0]->Value = minimum;
						this->dataGridView2->Rows[i]->Cells[0]->ReadOnly = true;
						this->dataGridView3->Rows[i]->Cells[0]->Value = maximum;
						this->dataGridView3->Rows[i]->Cells[0]->ReadOnly = true;
					}
				}
			}
			else {
				MessageBox::Show("Rozmer matice musí byť celé číslo z intervalu <1;655> !",
					"Generovanie matice", MessageBoxButtons::OK);
			}
		}
		else {
			MessageBox::Show("Zadajte názov a rozmer matice!",
				"Generovanie matice", MessageBoxButtons::OK);
		}
	}

	void clearScreen() {
		this->label16->Text = L"";
		this->label15->Text = L"";
		this->label4->Text = L"";
		this->label14->Text = L"";
		this->label13->Text = L"";
		this->buttonX3->Enabled = false;
		pictureBox2->Image = nullptr;
		this->label5->Text = L"";
		this->label1->Text = L"";
		this->label1->Location = System::Drawing::Point(156, 212);
		this->label15->Location = System::Drawing::Point(156, 332);
		this->label6->Location = System::Drawing::Point(156, 86);
		this->label1->ForeColor = System::Drawing::Color::Black;
		this->label6->Text = L"";
		this->label6->ForeColor = System::Drawing::Color::Black;
		this->label12->Text = L"";

		if (tabControl1->TabPages->Count > 0) {
			this->tabControl1->TabPages->Clear();
		}

		for each(PictureBox^ box in brackets) {
			this->panel1->Controls->Remove(box);
		}
		
		this->dataGridView1->Rows->Clear();
		this->dataGridView2->Rows->Clear();
		this->dataGridView3->Rows->Clear();

		for each(Label^ label in labels) {
			this->panel1->Controls->Remove(label);
		}
		brackets->Clear();
		labels->Clear();
	}

	void addBracket(int base_x, int base_y, int multiplier, bool one_row) {
		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x, base_y + 50);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(1, multiplier*19);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);

		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x, base_y + 50);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(10, 1);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);

		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x, base_y + 50 + multiplier*19);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(10, 1);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);

		//second side

		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x + (one_row ? multiplier : 1) * 20.5f + 9, base_y + 50);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(1, multiplier*19);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);

		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x + (one_row ? multiplier : 1) * 20.5f, base_y + 50);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(10, 1);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);

		pic1 = gcnew PictureBox();
		this->pic1->Location = System::Drawing::Point(base_x + (one_row ? multiplier : 1) * 20.5f, base_y + 50 + multiplier*19);
		this->pic1->BackColor = System::Drawing::SystemColors::ControlText;
		this->pic1->Size = System::Drawing::Size(10, 1);
		this->panel1->Controls->Add(pic1);

		brackets->Add(pic1);
	}
private: std::wstring getString(std::vector<float> vector) {
	std::wstring stream1 = L")ᵀ";
	std::wstringstream ss;
	if (vector.size() == 0) {
		ss << "no";
	}
	else {
		ss << "(";
		for (unsigned int j = 0; j < vector.size() - 1; j++) {
			ss << vector.at(j) << ", ";
		}
		ss << vector.at(vector.size() - 1) << stream1;
	}
		
	return ss.str();
}
private: System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
private: System::Void buttonX3_Click(System::Object^  sender, System::EventArgs^  e) {
	Form^ graphx = gcnew Form();
	graphx->Text = L"Zobrazenie výstupu";

	graphx->AutoScroll = true;
	graphx->StartPosition = FormStartPosition::CenterScreen;
	graphx->AutoSize = true;

	std::vector<float> upper;
	std::vector<float> under;
	bool check = false;

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < fieldIndex; j++)
		{
			if (this->dataGridView2->Rows[j]->Cells[i]->Value)
			{
				System::Int32 number;
				System::Int32::TryParse(this->dataGridView2->Rows[j]->Cells[i]->Value->ToString(), number);
				under.push_back(number);
			}
		}
	}
	std::reverse(under.begin(), under.end());

	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < fieldIndex; j++)
		{
			if (this->dataGridView3->Rows[j]->Cells[i]->Value)
			{
				System::Int32 number;
				System::Int32::TryParse(this->dataGridView3->Rows[j]->Cells[i]->Value->ToString(), number);
				upper.push_back(number);
			}
		}
	}
	std::reverse(upper.begin(), upper.end());

	fieldIndex = System::Convert::ToInt32(field->Text);

	PictureBox^ pb = gcnew PictureBox();
	pb->Size = System::Drawing::Size((maximum - minimum + 2) * 50, (fieldIndex + 5) * 50);
	pb->Image = gcnew Bitmap(pb->Width, pb->Height);

	Graphics^ g = Graphics::FromImage(pb->Image);
	Pen^ myPen = gcnew Pen(Color::Black, 1);
	g->DrawLine(myPen, 50, 15, 50, (fieldIndex + 1) * 50);
	g->DrawLine(myPen, 25, (fieldIndex + 1) * 50 - 25, (maximum - minimum + 1) * 50, (fieldIndex + 1) * 50 - 25);
	for (int i = 0; i < (maximum - minimum + 1); i++) {

		Label^ labeln = gcnew Label();
		labeln->Location = System::Drawing::Point(50 * (i + 1) - ((i == 0) ? 15 : 5), (fieldIndex + 1) * 50 - 15);
		labeln->AutoSize = true;
		labeln->Text = (i).ToString();
		graphx->Controls->Add(labeln);

		g->DrawLine(myPen, 50 * (i + 1), (fieldIndex + 1) * 50 - 20, 50 * (i + 1), (fieldIndex + 1) * 50 - 30);
	}
	for (int i = 0; i < fieldIndex; i++) {

		Label^ labeln = gcnew Label();
		labeln->Location = System::Drawing::Point(25, (i + 1) * 50 - 30);
		labeln->AutoSize = true;
		labeln->Text = (fieldIndex - i).ToString();
		graphx->Controls->Add(labeln);

		g->DrawLine(myPen, 40, 50 * (i + 1) - 25, (maximum - minimum + 1) * 50, 50 * (i + 1) - 25);
	}

	myPen = gcnew Pen(Color::Red, 2);
	SolidBrush^ myBrush = gcnew SolidBrush(Color::Red);
	for (int i = 0; i < under.size(); i++) {
		if (i + 1 != under.size()) {
			g->DrawLine(myPen, (under[i] + 1) * 50, (i + 1)*50.f - 25, (under[i + 1] + 1) * 50, (i + 2)*50.f - 25);
		}
		g->FillEllipse(myBrush, (under[i] + 1) * 50 - 4, (i + 1)*50.f - 29, 8.f, 8.f);
	}

	myPen = gcnew Pen(Color::Blue, 2);
	myBrush = gcnew SolidBrush(Color::Blue);
	for (int i = 0; i < upper.size(); i++) {
		if (i + 1 != upper.size()) {
			g->DrawLine(myPen, (upper[i] + 1) * 50, (i + 1)*50.f - 25, (upper[i + 1] + 1) * 50, (i + 2)*50.f - 25);
		}
		g->FillEllipse(myBrush, (upper[i] + 1) * 50 - 4, (i + 1)*50.f - 29, 8.f, 8.f);
	}

	myPen = gcnew Pen(Color::Green, 2);
	myBrush = gcnew SolidBrush(Color::Green);
	for (int i = 0; i < eigenVector->Length; i++) {
		if (i + 1 != eigenVector->Length) {
			g->DrawLine(myPen, (eigenVector[i] + 1) * 50, (i + 1)*50.f - 25, (eigenVector[i + 1] + 1) * 50, (i + 2)*50.f - 25);
		}
		g->FillEllipse(myBrush, (eigenVector[i] + 1) * 50 - 4, (i + 1)*50.f - 29, 8.f, 8.f);
	}

	myPen = gcnew Pen(Color::Purple, 2);
	myBrush = gcnew SolidBrush(Color::Purple);
	if (this->checkBox1->Checked) {
		check = true;
	}
	else {
		for (int i = 0; i < invariantUpperbound->Length; i++) {
			if (i + 1 != invariantUpperbound->Length) {
				g->DrawLine(myPen, (invariantUpperbound[i] + 1) * 50, (i + 1)*50.f - 25, (invariantUpperbound[i + 1] + 1) * 50, (i + 2)*50.f - 25);
			}
			g->FillEllipse(myBrush, (invariantUpperbound[i] + 1) * 50 - 4, (i + 1)*50.f - 29, 8.f, 8.f);
		}
	}

	myPen = gcnew Pen(Color::Yellow, 2);
	myBrush = gcnew SolidBrush(Color::Yellow);
	if (this->checkBox1->Checked) {
		check = true;
	}
	else {
		for (int i = 0; i < underbound1->Length; i++) {
			if (i + 1 != underbound1->Length) {
				g->DrawLine(myPen, (underbound1[i] + 1) * 50, (i + 1)*50.f - 25, (underbound1[i + 1] + 1) * 50, (i + 2)*50.f - 25);
			}
			g->FillEllipse(myBrush, (underbound1[i] + 1) * 50 - 4, (i + 1)*50.f - 29, 8.f, 8.f);
		}
	}

	Label^ labeln = gcnew Label();
	labeln->Location = System::Drawing::Point(50, (fieldIndex + 2) * 50 - 15);
	labeln->AutoSize = true;
	labeln->Text = L"Legenda:";
	graphx->Controls->Add(labeln);

	myBrush = gcnew SolidBrush(Color::Red);
	g->FillRectangle(myBrush, 50, (fieldIndex + 2) * 50 + 10, 20, 10);
	labeln = gcnew Label();
	labeln->Location = System::Drawing::Point(75, (fieldIndex + 2) * 50 + 10);
	labeln->AutoSize = true;
	labeln->Text = L" - Dolný vektor";
	graphx->Controls->Add(labeln);

	myBrush = gcnew SolidBrush(Color::Blue);
	g->FillRectangle(myBrush, 50, (fieldIndex + 2) * 50 + 35, 20, 10);
	labeln = gcnew Label();
	labeln->Location = System::Drawing::Point(75, (fieldIndex + 2) * 50 + 35);
	labeln->AutoSize = true;
	labeln->Text = L" - Horný vektor";
	graphx->Controls->Add(labeln);

	myBrush = gcnew SolidBrush(Color::Green);
	g->FillRectangle(myBrush, 50, (fieldIndex + 2) * 50 + 60, 20, 10);
	labeln = gcnew Label();
	labeln->Location = System::Drawing::Point(75, (fieldIndex + 2) * 50 + 60);
	labeln->AutoSize = true;
	labeln->Text = L" - Najväčší vlastný vektor";
	graphx->Controls->Add(labeln);

	if (check == false)
	{
		myBrush = gcnew SolidBrush(Color::Purple);
		g->FillRectangle(myBrush, 50, (fieldIndex + 2) * 50 + 85, 20, 10);
		labeln = gcnew Label();
		labeln->Location = System::Drawing::Point(75, (fieldIndex + 2) * 50 + 85);
		labeln->AutoSize = true;
		labeln->Text = L" - Invariantná horná hranica";
		graphx->Controls->Add(labeln);

		myBrush = gcnew SolidBrush(Color::Yellow);
		g->FillRectangle(myBrush, 50, (fieldIndex + 2) * 50 + 110, 20, 10);
		labeln = gcnew Label();
		labeln->Location = System::Drawing::Point(75, (fieldIndex + 2) * 50 + 110);
		labeln->AutoSize = true;
		labeln->Text = L" - Invariantná dolná hranica";
		graphx->Controls->Add(labeln);
	}
	else
	{
		check = false;
	}

	graphx->Controls->Add(pb);
	graphx->ShowDialog();
}
};
}
