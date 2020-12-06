#pragma once
#include<math.h>
#include<iostream>

using namespace System::Data::SqlClient;
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gcommande
	/// </summary>
	public ref class Gcommande : public System::Windows::Forms::Form
	{
	public:
		Gcommande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Gcommande()
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gcommande::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(245, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Gcommande::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(843, 383);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 74);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Modifier";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(951, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(86, 74);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Supprimer";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(951, 280);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 75);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Afficher";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Gcommande::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"nom Client";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(743, 60);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(294, 203);
			this->dataGridView2->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 17);
			this->label3->TabIndex = 24;
			this->label3->Text = L"D_emmision";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 17);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Date_livraison";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 246);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 26;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 196);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(128, 479);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 28;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(128, 433);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 283);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"D_payement";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 320);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 17);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Type_payement";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(-3, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 17);
			this->label7->TabIndex = 32;
			this->label7->Text = L"REF_Commande";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(128, 280);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 33;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(128, 317);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(128, 122);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 35;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(523, 426);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(86, 74);
			this->button5->TabIndex = 36;
			this->button5->Text = L"panier";
			this->button5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Gcommande::button5_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 440);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(47, 17);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Article";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(42, 196);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 38;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(128, 64);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 39;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 479);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 17);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Total_Article";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(780, 280);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 75);
			this->button6->TabIndex = 41;
			this->button6->Text = L"Afficher_article";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(743, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(294, 203);
			this->dataGridView1->TabIndex = 42;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(16, 111);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(33, 22);
			this->textBox10->TabIndex = 43;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(128, 157);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 44;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(31, 167);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(55, 22);
			this->textBox12->TabIndex = 45;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(146, 167);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 46;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox17);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox12);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->textBox13);
			this->groupBox1->Controls->Add(this->textBox16);
			this->groupBox1->Controls->Add(this->textBox20);
			this->groupBox1->Controls->Add(this->textBox21);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Location = System::Drawing::Point(142, 13);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(65, 31);
			this->groupBox1->TabIndex = 75;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(100, 139);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(132, 22);
			this->textBox15->TabIndex = 75;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(146, 92);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(132, 22);
			this->textBox17->TabIndex = 77;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(51, 91);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(135, 22);
			this->textBox14->TabIndex = 73;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(51, 62);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(132, 22);
			this->textBox16->TabIndex = 76;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(128, 364);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(109, 22);
			this->textBox19->TabIndex = 21;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(120, 23);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(132, 22);
			this->textBox20->TabIndex = 22;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(42, 32);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(44, 22);
			this->textBox21->TabIndex = 23;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(128, 93);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 93);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 17);
			this->label10->TabIndex = 76;
			this->label10->Text = L"ID_Client";
			this->label10->Click += gcnew System::EventHandler(this, &Gcommande::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 17);
			this->label11->TabIndex = 77;
			this->label11->Text = L"prenom_Client";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(239, 347);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(86, 75);
			this->button7->TabIndex = 78;
			this->button7->Text = L"payer";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Gcommande::button7_Click);
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(385, 477);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 22);
			this->textBox22->TabIndex = 79;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(280, 482);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 17);
			this->label2->TabIndex = 80;
			this->label2->Text = L"date_facture";
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(385, 433);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 22);
			this->textBox23->TabIndex = 81;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(291, 440);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 17);
			this->label12->TabIndex = 82;
			this->label12->Text = L"ADD_facture";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(20, 367);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 17);
			this->label13->TabIndex = 83;
			this->label13->Text = L"date_reg";
			// 
			// Gcommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 524);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Gcommande";
			this->Text = L"Gcommande";
			this->Load += gcnew System::EventHandler(this, &Gcommande::Gcommande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ reference = textBox11->Text;
		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ conDataBase = gcnew SqlConnection(constring);



		SqlCommand^ cmdDataBase = gcnew SqlCommand("SELECT * FROM Commande WHERE Reference = '" + reference + "' ", conDataBase);
		conDataBase->Open();
		SqlDataReader^ myReader = cmdDataBase->ExecuteReader();

		dataGridView1->Hide();
		dataGridView2->Show();

		while (myReader->Read()) {
			textBox18->Text = Convert::ToString(myReader->GetInt32(4));
			textBox1->Text = Convert::ToString(myReader->GetDateTime(2).ToString("yyyy - MM - dd"));
			textBox2->Text = Convert::ToString(myReader->GetDateTime(3).ToString("yyyy - MM - dd"));
			
		}
		int numc = Int32::Parse(textBox18->Text);

		




		myReader->Close();
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Commande", conDataBase);

		DataTable^ data = gcnew DataTable();
		data->Clear();
		adapter->Fill(data);
		bindingSource1->DataSource = data;
		dataGridView2->DataSource = bindingSource1;
	}
	private: System::Void Gcommande_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
	SqlConnection^ condatabase = gcnew SqlConnection(constring);


	String^ date = Convert::ToDateTime(textBox1->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox2->Text).ToString("yyyy-MM-dd");
	String^ moyenPayement = textBox6->Text;
	int id = Int32::Parse(textBox18->Text);
	String^ prenomclient = textBox9->Text;
	String^ nomclient = textBox7->Text;

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
	SqlCommand^ cmdDataBase5 = gcnew SqlCommand("SELECT ISNULL(MAX(CAST(SUBSTRING(Reference,12,LEN(Reference) - 11) AS int)),0) FROM Commande", condatabase2);
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
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Commande (Reference, Date_d_emission , Date_Livraison ,ID_Client ) values('" + reference + "','" + date + "','" + date2 + "',(SELECT ID_Client FROM Client where Nom_C = '" + nomclient + "' ) );", condatabase);

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
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  Paiement (Date_Paiement, Date_ReglementSolde , Moyen_Paiement ,ID_Client,ID_Commande ) values('" + datep + "','" + date2 + "',(SELECT ID_Client FROM Client where Nom_C = '" + nomclient + "' ),(SELECT ID_Commande FROM Commande where ID_Client = " + id + "));", condatabase);

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
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
	SqlConnection^ condatabase = gcnew SqlConnection(constring);
	
	String^ datep = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox19->Text).ToString("yyyy-MM-dd");
	String^ moyP = textBox6->Text;
	String^ nomclient = textBox7->Text;
	String^ prenomclient = textBox9->Text;
	int id = Int32::Parse(textBox18->Text);
	String^ ref = textBox11->Text;
	System::Windows::Forms::MessageBox::Show("INSERT into Paiement(Date_Paiement,Date_ReglementSolde,Moyen_Paiement,ID_Client,Reference) values('" + datep + "' ,'" + date2 + "','" + moyP + "','" + id + "','" + ref + "');");
	SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT into Paiement(Date_Paiement,Date_ReglementSolde,Moyen_Paiement,ID_Commande) values('" + datep + "' ,'" + date2 + "','" + moyP + "','" + id + "',(SELECT ID_Commande FROM Commande where Reference ='" + ref +"');", condatabase);
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
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
		SqlConnection^ condatabase = gcnew SqlConnection(constring);
		String^ datef = Convert::ToDateTime(textBox22->Text).ToString("yyyy-MM-dd");
		String^ nomclient = textBox7->Text;
		String^ nomArticle = textBox4->Text;
		String^ var = textBox3->Text;
		String^ ref = textBox11->Text;

		//////////////////////recuperation prix ttc de article ////////////////////
		SqlCommand^ cmdDataBase11 = gcnew SqlCommand("SELECT * FROM Article WHERE Designation = '" + nomArticle + "' ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader7 = cmdDataBase11->ExecuteReader();

		double prixttc;

		while (myReader7->Read()) {

			prixttc = myReader7->GetDouble(4);

		}

		myReader7->Close();
		condatabase->Close();

		////////////////////////////////recupiration date anniv et premier achat/////////////////////

		SqlCommand^ cmdDataBase12 = gcnew SqlCommand("SELECT * FROM Client WHERE Nom_C = '" + nomclient + "' ", condatabase);
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


		SqlCommand^ cmdDataBase10 = gcnew SqlCommand("SELECT * FROM Ligne_Commande INNER JOIN Commande ON ID_Commande = ID_Commande Reference  ", condatabase);
		condatabase->Open();
		SqlDataReader^ myReader6 = cmdDataBase10->ExecuteReader();

		double prixttctotale;

		while (myReader6->Read()) {

			prixttctotale = myReader6->GetDouble(2);

		}

		myReader6->Close();
		condatabase->Close();

		/////////////////////////////////////////recuperation  total article de commande //////////////////////



		SqlCommand^ cmdDataBase2 = gcnew SqlCommand("SELECT * FROM Commande WHERE Reference = '" + ref + "' ", condatabase);
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
		double remise;

		SqlCommand^ cmdDataBase = gcnew SqlCommand("INSERT INTO  contient (ID_Article,ID_Commande,Quantite_art_cmd,remise ) values((SELECT ID_Article FROM Article where Designation ='" +nomArticle +"'),(SELECT ID_Commande FROM Commande where Reference = '" + ref + "' ),'" + remise + "');", condatabase);
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
		int id = Int32::Parse(textBox23->Text);
		String^ addf = textBox18->Text;
		SqlCommand^ cmdDataBase1 = gcnew SqlCommand("INSERT INTO Facture(Date_Facturation,Montant_Total_HT,Montant_Total_de_TVA,Montant_Total_TTC,Nom_societe,Add_societe,Num_service_client,Add_Facturation,ID_Commande,ID_Client,ID_Paiement,ID_Adresse)values('" + datef + "','" + prixttctotal + "',500,'MAD ELECTRONICS','alger centre',023198050','" + addf + "',(SELECT ID_Commande FROM Commande WHERE ID_Client = '" + id + "'),(SELECT ID_Paiement From Paiemenet where ID_Client = '" + id + "'),(SELECT ID_Adresse FROM Adresse where ID_Client = '" + id + "')", condatabase);
		SqlCommand^ cmdDataBasee = gcnew SqlCommand("INSERT INTO Ligne_Commande(ID_Article,ID_Commande,Quantite_art_cmd,Remise) values ((SELECT ID_Facture FROM Facture where ID_Client = '" + id +"'),(SELECT ID_Commande FROM Commande WHERE ID_Client = '" + id + "')," + iInt + "," + remise + ")", condatabase);
		SqlDataReader^ myReader1;
		SqlDataReader^ myReader2;
		try {
			condatabase->Open();
			myReader1 = cmdDataBase1->ExecuteReader();
			condatabase->Close();
			condatabase->Open();
			myReader2 = cmdDataBasee->ExecuteReader();
			MessageBox::Show("  total article modifier  :'D");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
};
}
