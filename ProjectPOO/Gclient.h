#pragma once
#include"CPersonne.h"
#include"Client.h"
using namespace System::Data::SqlClient;
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Gclient
	/// </summary>
	public ref class Gclient : public System::Windows::Forms::Form
	{
	public:
		Gclient(void)
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
		~Gclient()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gclient::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(74, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gclient::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 386);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Gclient::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(460, 386);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(681, 386);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 57);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nom_C";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Prenom_C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date_premier_achat";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"date de naissance";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(91, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 138);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 190);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(711, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(141, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(753, 49);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ID";
			// 
			// Gclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(907, 509);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"Gclient";
			this->Text = L"Gclient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=ProjetPoo;Integrated Security=True");
	Client^ cl = gcnew Client();
	
	cl->setNom(textBox1->Text);
    cl->setPrenom(textBox2->Text);
	String^ date = Convert::ToDateTime(textBox3->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
	cl->setDate(date);
	cl->setDate2(date2);
	SqlCommand^ com = gcnew SqlCommand("INSERT INTO Client(Nom_C,Prenom_C,Date_de_naissance,Date_du_premier_achat) values('" + cl->getNom() + "','" + cl->getPrenom() + "','" + cl->getDate() + "','" + cl->getDate2() + "')", con);
		SqlDataReader^ rd;
	try {
		con->Open();
		rd = com->ExecuteReader();
		MessageBox::Show("enregistrement fait");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=ProjetPoo;Integrated Security=True");
		int id = Int32::Parse(textBox5->Text);
		SqlCommand^ comm = gcnew SqlCommand("Select* from Client where ID_Client=" + id + "", con);
		con->Open();
		SqlDataReader^ rd = comm->ExecuteReader();
		while (rd->Read())
		{
			textBox1->Text = rd->GetString(1);
			textBox2->Text = rd->GetString(2);
			textBox3->Text = Convert::ToString(rd->GetDateTime(3));
			textBox4->Text = Convert::ToString(rd->GetDateTime(4));
			con->Close();
		}
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
