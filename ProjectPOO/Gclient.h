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
	/// Description r�sum�e de Gclient
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
		/// Nettoyage des ressources utilis�es.
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



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Gclient::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(15, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ajouter";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Gclient::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(16, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Gclient::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(16, 255);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 86);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Modifier";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Gclient::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(9, 339);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 72);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Supprimer";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Gclient::button4_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nom du client  :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"pr�nom du client : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date_premier_achat :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Date de naissance :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(218, 169);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(133, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Location = System::Drawing::Point(744, 16);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(754, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ID";
			this->label5->Click += gcnew System::EventHandler(this, &Gclient::label5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->Location = System::Drawing::Point(743, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(164, 483);
			this->dataGridView1->TabIndex = 14;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->Location = System::Drawing::Point(744, 32);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 50;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(165, 468);
			this->dataGridView2->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(693, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 42);
			this->button5->TabIndex = 16;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Gclient::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(113, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox1_TextChanged);
			// 
			// Gclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(909, 500);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
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
			this->Load += gcnew System::EventHandler(this, &Gclient::Gclient_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=ProjetPoo;Integrated Security=True");
	NS_Composants::Client^ cl = gcnew NS_Composants::Client();
	
	cl->setNom(textBox1->Text);
    cl->setPrenom(textBox2->Text);
	String^ date = Convert::ToDateTime(textBox3->Text).ToString("yyyy-MM-dd");
	String^ date2 = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
	cl->setDate(date);
	cl->setDate2(date2);
	SqlCommand^ com = gcnew SqlCommand(cl->creer(cl->getNom(),cl->getPrenom(),cl->getDate(),cl->getDate2()), con);
		SqlDataReader^ rd;
	try {
		con->Open();
		rd = com->ExecuteReader();
		MessageBox::Show("client enregistree");

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
		NS_Composants::Client^ cl = gcnew NS_Composants::Client();
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=ProjetPoo;Integrated Security=True");
		int id = Int32::Parse(textBox5->Text);
		cl->setID(id);
		SqlCommand^ comm = gcnew SqlCommand(cl->afficher(cl->getID()), con);
		con->Open();
		SqlDataReader^ rd = comm->ExecuteReader();
		dataGridView1->Hide();
		dataGridView2->Show();
		while (rd->Read())
		{
			textBox1->Text = rd->GetString(1);
			textBox2->Text = rd->GetString(2);
			textBox3->Text = Convert::ToString(rd->GetDateTime(3));
			textBox4->Text = Convert::ToString(rd->GetDateTime(4));
			
		}
		con->Close();
		SqlDataAdapter^ da = gcnew SqlDataAdapter(cl->afficher(cl->getID()), con);
		DataTable^ dt = gcnew DataTable();
		dt->Clear();
		da->Fill(dt);
		bindingSource2->DataSource = dt;
		dataGridView2->DataSource = bindingSource2;
		

		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=ProjetPoo;Integrated Security=True");
	SqlDataAdapter^ sda = gcnew SqlDataAdapter("SELECT * FROM Client", con);
	DataTable^ dt = gcnew DataTable();
	dataGridView2->Hide();
	dataGridView1->Show();
	sda->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
}
private: System::Void Gclient_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
