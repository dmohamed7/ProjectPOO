#pragma once
#include<math.h>
#include<iostream>

using namespace System::Data::SqlClient;

namespace gestion {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ retour;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		MyForm4(Form^ r)
		{
			retour = r;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox18;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox19;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(224, 233);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 73);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Lancer La Commande";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(791, 589);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 63);
			this->button2->TabIndex = 1;
			this->button2->Text = L"modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(222, 576);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ajouter au panier";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1150, 589);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 63);
			this->button4->TabIndex = 3;
			this->button4->Text = L"spprimer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm4::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 226);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 279);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(92, 530);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(92, 493);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(10, 367);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(10, 441);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 22);
			this->textBox6->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 203);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 22);
			this->label1->TabIndex = 10;
			this->label1->Text = L"date livraison";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 256);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"date emission";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm4::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 530);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"total article";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 496);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"nom article";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 332);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(179, 22);
			this->label5->TabIndex = 14;
			this->label5->Text = L"date de payement ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 403);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(198, 22);
			this->label6->TabIndex = 15;
			this->label6->Text = L"moyen de payement ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm4::label6_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(15, 118);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(188, 22);
			this->textBox7->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(16, 95);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 22);
			this->label7->TabIndex = 17;
			this->label7->Text = L"nom client";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(88, 175);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(132, 22);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(15, 171);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(188, 22);
			this->textBox9->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 148);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(140, 22);
			this->label8->TabIndex = 20;
			this->label8->Text = L"prenom client ";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(135, 196);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(132, 22);
			this->textBox10->TabIndex = 21;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(88, 36);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(132, 22);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(42, 32);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(44, 22);
			this->textBox12->TabIndex = 23;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(965, 589);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 63);
			this->button6->TabIndex = 25;
			this->button6->Text = L"afficher";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm4::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(325, 2);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(312, 32);
			this->label11->TabIndex = 65;
			this->label11->Text = L"Gestion du Commande";
			// 
			// button8
			// 
			this->button8->AccessibleName = L"tesxtBox10";
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(472, 57);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(331, 28);
			this->button8->TabIndex = 66;
			this->button8->Text = L"Afficher la liste des articles";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm4::button8_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(840, 15);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(188, 22);
			this->textBox13->TabIndex = 68;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox13_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(676, 18);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(151, 17);
			this->label9->TabIndex = 69;
			this->label9->Text = L"Refference commande";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AccessibleName = L"datagridview1";
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(650, 93);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(680, 390);
			this->dataGridView2->TabIndex = 71;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm4::dataGridView2_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AccessibleName = L"datagridview2";
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(650, 93);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(686, 390);
			this->dataGridView4->TabIndex = 72;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(51, 91);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(135, 22);
			this->textBox14->TabIndex = 73;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm4::textBox14_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Location = System::Drawing::Point(410, 118);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(49, 32);
			this->groupBox1->TabIndex = 74;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm4::groupBox1_Enter);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(88, 146);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(132, 22);
			this->textBox15->TabIndex = 75;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(88, 114);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(132, 22);
			this->textBox17->TabIndex = 77;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(51, 62);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(132, 22);
			this->textBox16->TabIndex = 76;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(218, 92);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 22);
			this->label10->TabIndex = 75;
			this->label10->Text = L"id client";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(233, 128);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(69, 22);
			this->textBox18->TabIndex = 76;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(259, 419);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(98, 44);
			this->button10->TabIndex = 77;
			this->button10->Text = L"payer";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm4::button10_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(233, 332);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(138, 22);
			this->label12->TabIndex = 78;
			this->label12->Text = L"date de solde ";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(224, 367);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(188, 22);
			this->textBox19->TabIndex = 79;
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1331, 700);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm4";
			this->Text = L"MyForm4";
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm4_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm4_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source = DESKTOP - 2RBCNA4;Initial Catalog = poo;Integrated Security = True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);


		String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
		String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ moyenPayement = textBox6->Text;
		int id = Int32::Parse(textBox18->Text);
		String^ prenomclient = textBox9->Text;
		String^ nomclient = textBox7-> Text;

		//////////////////// recuperer la ville du client //////////////////////

		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Add_Livraison FROM Adresse WHERE ID_Client = '" + id + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader1 = cmdDataBase3->ExecuteReader();


		while (myReader1->Read()) {

			textBox10->Text = myReader1->GetString(0);

		}

		myReader1->Close();
		condatabase->Close();


		String^ adresse = textBox10->Text;

		///////////////////////////////////////////////////////////////////////////


		SqlConnection^ condatabase2 = gcnew SqlConnection(constring);
		SqlCommand^ cmdDataBase5 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Referance,12,LEN(Referance) - 11) AS int)),0) FROM Commande", condatabase2);
		condatabase2->Open();
		SqlDataReader^ myReader6 = cmdDataBase5->ExecuteReader();

		while (myReader6->Read()) {
			textBox12->Text = Convert::ToString(myReader6->GetInt32(0));
		}
		myReader6->Close();

		///////////////////     chiffer incrementiel    ///////////////////////////

		int chiffre = 1;
		chiffre = Int32::Parse(textBox12->Text);

		chiffre++;

		String^ chf = Convert::ToString(chiffre);

		/////////////////////////////////////////////////////////////////////

		String^ reference = nomclient->Substring(0, 2) + prenomclient->Substring(0, 2) + date->Substring(2, 4) + adresse->Substring(0, 3) + chf;


		textBox11->Text = reference;
		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Commande (Reference, Date_d_emission , Date_Livraison ,Date_Payment,ID_Client ) values('" + reference + "','" + date + "','" + date2 + "',(SELECT ID_Client FROM Client where Nom_C = '" + id + "' ) );", condatabase);
		
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande  enregistré :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();
	}


		   //PAYER//
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source = DESKTOP - 2RBCNA4;Initial Catalog = poo;Integrated Security = True";
	SqlConnection^ condatabase = gcnew SqlConnection(constring);

	String^ datep = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox19->Text).ToString("yyyy-MM-dd");
	String^ moyP = textBox6->Text;
	String^ nomclient = textBox7->Text;
	int id = Int32::Parse(textBox18->Text);
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Paiement (Date_Paiement, Date_ReglementSolde , Moyen_Paiement ,ID_Client,ID_Commande ) values('" + datep + "','" + date2 + "',(SELECT ID_Client FROM Client where Nom_C = '" + nomclient + "' ),(SELECT ID_Commande FROM Commande where ID_Client = " +id+"));", condatabase);
	
	SqlDataReader^ myReader;
	try {
		condatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Commande  enregistré :'D");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

	condatabase->Close();
}







	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);

		String^ reference = textBox13->Text;
		String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
		String^ date3 = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
		String^ moyenPayement = textBox6->Text;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("UPDATE Commande SET  Date_Livraison = '" + date + "', Date_Emision ='" + date2 + "' , Date_Payment = '" + date3 + "' ,Moyen_Payment = '" + moyenPayement + "' WHERE Referance = '" + reference + "' ", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Commande modifié :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}




	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);

		String^ nomclient = textBox7->Text;
		String^ nomArticle = textBox4->Text;
		String^ var = textBox3->Text;
		String^ ref = textBox11->Text;

		//////////////////////recuperation prix ttc de article ////////////////////
		SqlCommand^ cmdDataBase11 = gcnew SqlCommand("SELECT * FROM Article WHERE Nom_Article = '" + nomArticle + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader7 = cmdDataBase11->ExecuteReader();

		double prixttc;

		while (myReader7->Read()) {

			prixttc = myReader7->GetDouble(5);

		}

		myReader7->Close();
		condatabase->Close();

		////////////////////////////////recupiration date anniv et premier achat/////////////////////

		SqlCommand^ cmdDataBase12 = gcnew SqlCommand("SELECT * FROM client WHERE Nom_c = '" + nomclient + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader8 = cmdDataBase12->ExecuteReader();

		String^ dateanniv;
		String^ datepremierachat;
		while (myReader8->Read()) {

			textBox16->Text = Convert::ToString(myReader8->GetDateTime(3).ToString("yyyy-MM-dd"));
			textBox17->Text = Convert::ToString(myReader8->GetDateTime(4).ToString("yyyy-MM-dd"));

		}
		dateanniv = textBox16->Text;
		datepremierachat = textBox17->Text;
		myReader8->Close();
		condatabase->Close();

		/////////////////////////////recuperation prix total ttc de commande ///////////////////////33


		SqlCommand^ cmdDataBase10 = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + ref + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader6 = cmdDataBase10->ExecuteReader();

		double prixttctotale;

		while (myReader6->Read()) {

			prixttctotale = myReader6->GetDouble(5);

		}

		myReader6->Close();
		condatabase->Close();

		/////////////////////////////////////////recuperation  total article de commande //////////////////////



		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + ref + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader3 = cmdDataBase2->ExecuteReader();


		while (myReader3->Read()) {

			textBox8->Text = Convert::ToString(myReader3->GetInt32(3));

		}

		myReader3->Close();
		int q = Int32::Parse(var);
		int iInt = Int32::Parse(var);
		int fint = Int32::Parse(textBox8->Text);
		iInt = iInt + fint;






		condatabase->Close();

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  contient (Referance,ReferenceArticle,QuantiteArticle ) values('" + ref + "',(SELECT ReferenceArticle FROM Article where Nom_Article = '" + nomArticle + "' ),'" + q + "');", condatabase);
		SqlDataReader^ myReader;
		try {
			condatabase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show(" article ajouter :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		condatabase->Close();
		String^ dateemmisiion = Convert::ToString(textBox2->Text);







		double remise;


		if (dateemmisiion == dateanniv && dateemmisiion == datepremierachat)
		{
			remise = 25;
		}
		else if (dateemmisiion == dateanniv)
		{
			remise = 15;
		}
		else if (dateemmisiion == datepremierachat)
		{
			remise = 10;
		}
		else
		{
			remise = 0;
		}


		prixttctotale = prixttctotale + (prixttc * q);
		double prixttctotal = prixttctotale;
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("UPDATE Commande SET Total_Articles = " + iInt + " , Montant_TotalTTC = " + prixttctotal + " , Remise = " + remise + " where Referance = '" + ref + "'  ", condatabase);
		SqlDataReader^ myReader1;
		try {
			condatabase->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			MessageBox::Show("  total article modifier  :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}


	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		retour->Show();
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commande", conDataBase);
		DataTable^ data = gcnew DataTable();
		dataGridView2->Hide();
		dataGridView4->Show();
		adapter->Fill(data);
		bindingSource2->DataSource = data;
		dataGridView4->DataSource = bindingSource2;
	}
	
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("تtes vous sûr de vouloir continuer ?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
			SqlConnection^ conDataBase = gcnew SqlConnection(constring);


			String^ reference = textBox13->Text;
			SqlCommand^ cmdDataBase = gcnew SqlCommand("DELETE FROM contient WHERE Referance = '" + reference + "' ", conDataBase);
			SqlCommand^ cmdDataBase1 = gcnew SqlCommand("DELETE FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);


			conDataBase->Open();
			SqlDataReader^ myReader = cmdDataBase->ExecuteReader();
			conDataBase->Close();

			conDataBase->Open();
			SqlDataReader^ myReader1 = cmdDataBase1->ExecuteReader();
			MessageBox::Show("Article supprimé :'D");
			conDataBase->Close();
		}
		else {};
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reference = textBox13->Text;
		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);



		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commande WHERE Referance = '" + reference + "' ", conDataBase);
		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		dataGridView4->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {
			textBox6->Text = myReader->GetString(7);
			textBox1->Text = Convert::ToString(myReader->GetDateTime(1).ToString("yyyy - MM - dd"));
			textBox2->Text = Convert::ToString(myReader->GetDateTime(2).ToString("yyyy - MM - dd"));
			textBox5->Text = Convert::ToString(myReader->GetDateTime(4).ToString("yyyy - MM - dd"));
			textBox14->Text = Convert::ToString(myReader->GetInt32(8));
		}
		int numc = Int32::Parse(textBox14->Text);

		SqlConnection^ conDataBase11 = gcnew SqlConnection(constring);
		conDataBase11->Open();

		SqlCommand^ cmdDataBase3 = gcnew SqlCommand("SELECT Nom_c,Prenom_c FROM client WHERE Num_c ='" + numc + "' ", conDataBase11);
		SqlDataReader^ myReader11 = cmdDataBase3->ExecuteReader();
		while (myReader11->Read()) {

			textBox7->Text = myReader11->GetString(0);
			textBox9->Text = myReader11->GetString(1);
		}
		myReader11->Close();




		myReader->Close();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT [Commande].Referance,QuantiteArticle, Date_Livraison, Date_Emision, Date_Payment, Moyen_Payment, [contient].ReferenceArticle, Montant_HT, Montant_TVA, Montant_TTC, Remise, [Commande].Num_c, Nom_c, Prenom_c FROM client,Commande,contient,Article WHERE [Commande].Num_c = [client].Num_c AND [Commande].Referance = '" + reference + "' AND [Commande].Referance = [contient].Referance AND [contient].ReferenceArticle = [Article].ReferenceArticle", conDataBase);

		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView2->DataSource = bindingSource1;

	}
	private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	

};
}
