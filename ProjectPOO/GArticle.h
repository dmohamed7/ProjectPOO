#pragma once
#include"Gestion_Article.h"
using namespace System::Data::SqlClient;
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GArticle
	/// </summary>
	public ref class GArticle : public System::Windows::Forms::Form
	{
	public:
		GArticle(void)
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
		~GArticle()
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
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GArticle::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 394);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ajouter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GArticle::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GArticle::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(391, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(117, 64);
			this->button3->TabIndex = 2;
			this->button3->Text = L"supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GArticle::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(557, 394);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 64);
			this->button4->TabIndex = 3;
			this->button4->Text = L"afficher";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &GArticle::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"reference";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"desingnation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"couleur";
			this->label3->Click += gcnew System::EventHandler(this, &GArticle::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"taux_TVA";
			this->label4->Click += gcnew System::EventHandler(this, &GArticle::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"quantité";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"seuil";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(118, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GArticle::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(118, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(118, 127);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(118, 160);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(118, 198);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(118, 235);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(723, 9);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &GArticle::textBox7_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(696, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 17);
			this->label8->TabIndex = 18;
			this->label8->Text = L"prix_ht";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(118, 278);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 19;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &GArticle::textBox8_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(611, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(294, 203);
			this->dataGridView1->TabIndex = 20;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(611, 107);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(294, 203);
			this->dataGridView2->TabIndex = 21;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(723, 61);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 40);
			this->button5->TabIndex = 22;
			this->button5->Text = L"afficher_tout";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &GArticle::button5_Click);
			// 
			// GArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(907, 509);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"GArticle";
			this->Text = L"GArticle";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
	double prix = double::Parse(textBox8->Text);
	int montant_tva = int::Parse(textBox4->Text);
	int quantité = int::Parse(textBox5->Text);
	int seuil = int::Parse(textBox6->Text);
	Gestion_Article ar(textBox1->Text, textBox2->Text, textBox3->Text, prix, montant_tva, quantité, seuil);
	ar.Ajouter();
		MessageBox::Show("article enregistrer");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
		NS_Composants::CArticle^ ar = gcnew NS_Composants::CArticle();
		int ID = Int32::Parse(textBox7->Text);
		ar->setID(ID);
		SqlCommand^ cmd = gcnew SqlCommand(ar->supprimer(ar->getID()), con);
		con->Open();
		SqlDataReader^ dr = cmd->ExecuteReader();
		MessageBox::Show("article supprimée avec succée");
		con->Close();
	}
	catch (Exception^ ex) {


		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
	
	int id = Int32::Parse(textBox7->Text);;
	double prix = double::Parse(textBox8->Text);
	int montant_tva = int::Parse(textBox4->Text);
	int quantité = int::Parse(textBox5->Text);
	int seuil = int::Parse(textBox6->Text);
	Gestion_Article ar(textBox1->Text, textBox2->Text, textBox3->Text, prix, montant_tva, quantité, seuil,id);
	SqlCommand^ com = gcnew SqlCommand(ar->modifier(ar->getRef_article(), ar->getNom_article(), ar->getCouleur(),ar->getPrix_uht() ,ar->getTVA(), ar->getQuantité(), ar->getseuil(),ar->getID()), con);

	SqlDataReader^ rd;
	
		con->Open();
		rd = com->ExecuteReader();
		MessageBox::Show("article modifier");

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	NS_Composants::CArticle^ ar = gcnew NS_Composants::CArticle();
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
	int id = Int32::Parse(textBox7->Text);
	ar->setID(id);
	SqlCommand^ comm = gcnew SqlCommand(ar->afficher(ar->getID()), con);
	con->Open();
	SqlDataReader^ rd = comm->ExecuteReader();
	dataGridView1->Hide();
	dataGridView2->Show();
	while (rd->Read())
	{
		textBox1->Text = rd->GetString(1);
		textBox2->Text = rd->GetString(2);
		textBox3->Text = rd->GetString(3);
		textBox4->Text = Convert::ToString(rd->GetInt32(7));
		textBox5->Text = Convert::ToString(rd->GetInt32(5));
		textBox6->Text = Convert::ToString(rd->GetInt32(6));
		textBox8->Text = Convert::ToString(rd->GetDouble(4));

	}
	con->Close();
	SqlDataAdapter^ da = gcnew SqlDataAdapter(ar->afficher(ar->getID()), con);
	DataTable^ dt = gcnew DataTable();
	dt->Clear();
	da->Fill(dt);
	bindingSource2->DataSource = dt;
	dataGridView2->DataSource = bindingSource2;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
	SqlDataAdapter^ sda = gcnew SqlDataAdapter("SELECT * FROM Article", con);
	DataTable^ dt = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	sda->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
