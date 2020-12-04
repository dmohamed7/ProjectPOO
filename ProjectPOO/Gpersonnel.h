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
	private: System::Windows::Forms::Button^ button1;

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->BackColor = System::Drawing::Color::Transparent;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(12, 76);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(33, 25);
			this->ID->TabIndex = 0;
			this->ID->Text = L"ID";
			this->ID->Click += gcnew System::EventHandler(this, &Gpersonnel::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 126);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prenom:";
			this->label2->Click += gcnew System::EventHandler(this, &Gpersonnel::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(122, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(122, 179);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 22);
			this->textBox3->TabIndex = 5;
			// 
			// Ajouter
			// 
			this->Ajouter->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Ajouter->BackColor = System::Drawing::Color::Transparent;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ajouter.Image")));
			this->Ajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Ajouter->Location = System::Drawing::Point(812, 49);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(115, 52);
			this->Ajouter->TabIndex = 6;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Ajouter->UseVisualStyleBackColor = false;
			this->Ajouter->Click += gcnew System::EventHandler(this, &Gpersonnel::Ajouter_Click);
			// 
			// Modifier
			// 
			this->Modifier->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Modifier->BackColor = System::Drawing::Color::Transparent;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modifier.Image")));
			this->Modifier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Modifier->Location = System::Drawing::Point(812, 126);
			this->Modifier->Name = L"Modifier";
			this->Modifier->Size = System::Drawing::Size(118, 52);
			this->Modifier->TabIndex = 7;
			this->Modifier->Text = L"Modifier";
			this->Modifier->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Modifier->UseVisualStyleBackColor = false;
			this->Modifier->Click += gcnew System::EventHandler(this, &Gpersonnel::Modifier_Click);
			// 
			// Supprimer
			// 
			this->Supprimer->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Supprimer->BackColor = System::Drawing::Color::Transparent;
			this->Supprimer->Cursor = System::Windows::Forms::Cursors::Default;
			this->Supprimer->FlatAppearance->BorderSize = 0;
			this->Supprimer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Supprimer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Supprimer.Image")));
			this->Supprimer->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Supprimer->Location = System::Drawing::Point(812, 224);
			this->Supprimer->Name = L"Supprimer";
			this->Supprimer->Size = System::Drawing::Size(118, 52);
			this->Supprimer->TabIndex = 8;
			this->Supprimer->Text = L"Supprimer";
			this->Supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Supprimer->UseVisualStyleBackColor = false;
			this->Supprimer->Click += gcnew System::EventHandler(this, &Gpersonnel::Supprimer_Click);
			// 
			// Afficher
			// 
			this->Afficher->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Afficher->BackColor = System::Drawing::Color::Transparent;
			this->Afficher->FlatAppearance->BorderSize = 0;
			this->Afficher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Afficher->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Afficher.Image")));
			this->Afficher->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Afficher->Location = System::Drawing::Point(812, 310);
			this->Afficher->Name = L"Afficher";
			this->Afficher->Size = System::Drawing::Size(118, 52);
			this->Afficher->TabIndex = 9;
			this->Afficher->Text = L"Afficher";
			this->Afficher->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Afficher->UseVisualStyleBackColor = false;
			this->Afficher->Click += gcnew System::EventHandler(this, &Gpersonnel::Afficher_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Adresse:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(122, 228);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(152, 22);
			this->textBox4->TabIndex = 11;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(0, 441);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(956, 108);
			this->dataGridView1->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(176, 25);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Date_embauche:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(194, 286);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox5_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(283, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 33);
			this->button1->TabIndex = 15;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Gpersonnel::button1_Click);
			// 
			// Gpersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(956, 549);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID);
			this->DoubleBuffered = true;
			this->Name = L"Gpersonnel";
			this->Text = L"Gpersonnel";
			this->Load += gcnew System::EventHandler(this, &Gpersonnel::Gpersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
	String^ date = Convert::ToDateTime(textBox5->Text).ToString("yyyy-MM-dd");
	cP->setDate(date);
	String^ constring = "Data Source=(local);Initial Catalog=ProjetPoo;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	SqlCommand^ cmdDataBase = gcnew SqlCommand(cP->creer(cP->getNom(),cP->getPrenom(),cP->getDate()), conDataBase);
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
}
private: System::Void Afficher_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	

}

private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
