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

	private: System::Windows::Forms::Button^ Modifier;
	private: System::Windows::Forms::Button^ Supprimer;
	private: System::Windows::Forms::Button^ Afficher;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Ajouter;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
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
			this->Modifier = (gcnew System::Windows::Forms::Button());
			this->Supprimer = (gcnew System::Windows::Forms::Button());
			this->Afficher = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Ajouter = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->BackColor = System::Drawing::Color::Transparent;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(12, 153);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(28, 20);
			this->ID->TabIndex = 0;
			this->ID->Text = L"ID";
			this->ID->Click += gcnew System::EventHandler(this, &Gpersonnel::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nom:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Prenom:";
			this->label2->Click += gcnew System::EventHandler(this, &Gpersonnel::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 153);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(155, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(81, 193);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(155, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(111, 235);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(152, 22);
			this->textBox3->TabIndex = 5;
			// 
			// Modifier
			// 
			this->Modifier->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->Modifier->BackColor = System::Drawing::Color::Transparent;
			this->Modifier->FlatAppearance->BorderSize = 0;
			this->Modifier->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Modifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Modifier.Image")));
			this->Modifier->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Modifier->Location = System::Drawing::Point(812, 153);
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
			this->Supprimer->Location = System::Drawing::Point(812, 235);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 283);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Adresse:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(102, 283);
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
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 325);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 20);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Date d\'embauche:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(179, 325);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(152, 22);
			this->textBox5->TabIndex = 14;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gpersonnel::textBox5_TextChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton1->Location = System::Drawing::Point(185, 107);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(113, 21);
			this->radioButton1->TabIndex = 20;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Un personnel";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Gpersonnel::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Location = System::Drawing::Point(185, 80);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(115, 21);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Un encadreur";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Vous voulez ajouter \?\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &Gpersonnel::label5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(812, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 52);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Ajouter";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// Ajouter
			// 
			this->Ajouter->BackColor = System::Drawing::Color::Transparent;
			this->Ajouter->FlatAppearance->BorderSize = 0;
			this->Ajouter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ajouter->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Ajouter.Image")));
			this->Ajouter->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Ajouter->Location = System::Drawing::Point(818, 64);
			this->Ajouter->Name = L"Ajouter";
			this->Ajouter->Size = System::Drawing::Size(112, 52);
			this->Ajouter->TabIndex = 25;
			this->Ajouter->Text = L"Ajouter";
			this->Ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Ajouter->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(0, 386);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 49);
			this->button5->TabIndex = 26;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(57, 399);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 22);
			this->textBox6->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(70, 386);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"ID";
			// 
			// Gpersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(956, 549);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->Ajouter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Afficher);
			this->Controls->Add(this->Supprimer);
			this->Controls->Add(this->Modifier);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
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
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
