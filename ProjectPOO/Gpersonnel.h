#pragma once
#include "CPersonnel.h"
#include "CPersonne.h"
using namespace System::Data::SqlClient;
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gpersonnel
	/// </summary>
	public ref class Gpersonnel : public System::Windows::Forms::Form
	{
	public:
		Gpersonnel(void)
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
		~Gpersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ID;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Afficher;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label6;
	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gpersonnel::typeid));
			this->ID = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Afficher = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(754, 20);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(33, 25);
			this->ID->TabIndex = 0;
			this->ID->Text = L"ID";
			this->ID->Click += gcnew System::EventHandler(this, &Gpersonnel::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(32, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prenom:";
			this->label2->Click += gcnew System::EventHandler(this, &Gpersonnel::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(805, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(191, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(194, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox3_TextChanged);
			// 
			// Ajouter
			// 
			this->Ajouter->Location = System::Drawing::Point(203, 375);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(112, 52);
			this->Ajouter->TabIndex = 6;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->UseVisualStyleBackColor = true;
			this->Ajouter->Click += gcnew System::EventHandler(this, &Gpersonnel::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Location = System::Drawing::Point(458, 375);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(112, 52);
			this->Modifier->TabIndex = 7;
			this->Modifier->Text = L"Modifier";
			this->Modifier->UseVisualStyleBackColor = true;
			this->Modifier->Click += gcnew System::EventHandler(this, &Gpersonnel::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Location = System::Drawing::Point(659, 375);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(112, 52);
			this->Supprimer->TabIndex = 8;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->UseVisualStyleBackColor = true;
			this->Supprimer->Click += gcnew System::EventHandler(this, &Gpersonnel::Supprimer_Click);
			// 
			// Afficher
			// 
			this->Afficher->Location = System::Drawing::Point(805, 375);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(112, 52);
			this->Afficher->TabIndex = 9;
			this->Afficher->Text = L"Afficher";
			this->Afficher->UseVisualStyleBackColor = true;
			this->Afficher->Click += gcnew System::EventHandler(this, &Gpersonnel::Afficher_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Adresse:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(194, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox4_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(685, 111);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(291, 229);
			this->dataGridView1->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Date_embauche:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(194, 254);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(162, 25);
			this->label5->TabIndex = 15;
			this->label5->Text = L"nom_encadreur";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(191, 79);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(155, 22);
			this->textBox6->TabIndex = 16;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox6_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(822, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 52);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Afficher_tout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gpersonnel::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(685, 111);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(291, 229);
			this->dataGridView2->TabIndex = 18;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(298, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 21);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"personnel";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Gpersonnel::radioButton1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(20, 88);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(370, 292);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Gpersonnel::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Location = System::Drawing::Point(20, 75);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(378, 288);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"groupBox2";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(188, 71);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(155, 22);
			this->textBox8->TabIndex = 4;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox8_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 250);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(176, 25);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Date_embauche:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 25);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Nom:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(9, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"nom_encadreur";
			this->label7->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(194, 110);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(152, 22);
			this->textBox10->TabIndex = 5;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(194, 254);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(152, 22);
			this->textBox9->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(36, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(93, 25);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Prenom:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 209);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 25);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Adresse:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(191, 33);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(155, 22);
			this->textBox7->TabIndex = 16;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox7_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(194, 213);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(152, 22);
			this->textBox11->TabIndex = 11;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(421, 25);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(94, 21);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"encadreur";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Gpersonnel::radioButton2_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 21);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(253, 25);
			this->label6->TabIndex = 22;
			this->label6->Text = L"que voulez vous ajouter\?";
			// 
			// Gpersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(988, 549);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->DoubleBuffered = true;
			this->Name = L"Gpersonnel";
			this->Text = L"Gpersonnel";
			this->Load += gcnew System::EventHandler(this, &Gpersonnel::Gpersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Gpersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Composants::CPersonnel^ cP = gcnew NS_Composants::CPersonnel();
	cP->setNom(textBox2->Text);
	cP->setPrenom(textBox3->Text);
	cP->setAdresse(textBox4->Text);
	int id = Int32::Parse(textBox6->Text);
	cP->setEncadreur(id);
	String^ date = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
	cP->setDate(date);
	String^ constring = "Data Source=(local);Initial Catalog=poo;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand(cP->creer(cP->getNom(),cP->getPrenom(),cP->getDate(),cP->getAdresse(),cP->getEncadreur()), conDataBase);
	SqlDataReader^ myReader;
	try {

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("personnel enregistré ");
	}
	catch (Exception^ ex) {

		MessageBox::Show(ex->Message);

	}
}
private: System::Void Supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
		NS_Composants::CPersonnel^ pr = gcnew NS_Composants::CPersonnel();
		int ID = Int32::Parse(textBox1->Text);
		pr->setID(ID);
		SqlCommand^ cmd = gcnew SqlCommand(pr->supprimer(pr->getID()), con);
		con->Open();
		SqlDataReader^ dr = cmd->ExecuteReader();
		con->Close();
		MessageBox::Show("personnel supprimée avec succée");
		
	}
	catch (Exception^ ex) {


		MessageBox::Show(ex->Message);
	}
}
private: System::Void Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Composants::CPersonnel^ pr = gcnew NS_Composants::CPersonnel();
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
	int id = Int32::Parse(textBox1->Text);
	pr->setID(id);
	SqlCommand^ comm = gcnew SqlCommand(pr->afficher1(pr->getID()), con);
	con->Open();
	SqlDataReader^ rd = comm->ExecuteReader();
	dataGridView1->Hide();
	dataGridView2->Show();
	while (rd->Read())
	{
		textBox2->Text = rd->GetString(1);
		textBox3->Text = rd->GetString(2);
		textBox4->Text = Convert::ToString(rd->GetDateTime(3));
		textBox5->Text = rd->GetString(4);
		textBox6->Text = Convert::ToString(rd->GetInt32(5));
	}
	con->Close();
	SqlDataAdapter^ da = gcnew SqlDataAdapter(pr->afficher1(pr->getID()), con);
	DataTable^ dt = gcnew DataTable();
	dt->Clear();
	da->Fill(dt);
	bindingSource2->DataSource = dt;
	dataGridView2->DataSource = bindingSource2;



}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
	SqlDataAdapter^ sda = gcnew SqlDataAdapter("SELECT * FROM Personnel", con);
	DataTable^ dt = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	sda->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
}

private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Show();
	groupBox2->Hide();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	

}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	groupBox2->Show();
	groupBox1->Hide();
	
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
