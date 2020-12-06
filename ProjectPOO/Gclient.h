#pragma once
#include"Gestion_Client.h"
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::BindingSource^ bindingSource2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button6;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(15, 144);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 95);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter client";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Gclient::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(416, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 89);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher";
			this->button2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Gclient::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(416, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 77);
			this->button3->TabIndex = 2;
			this->button3->Text = L"modifier";
			this->button3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Gclient::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(399, 294);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"supprimer";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Gclient::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Location = System::Drawing::Point(17, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nom_C";
			this->label1->Click += gcnew System::EventHandler(this, &Gclient::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Prenom_C";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Location = System::Drawing::Point(9, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Date_premier_achat";
			this->label3->Click += gcnew System::EventHandler(this, &Gclient::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Location = System::Drawing::Point(12, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"date de naissance";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(158, 76);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 10;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(158, 124);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(750, 17);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(154, 22);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Location = System::Drawing::Point(760, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"ID";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(622, 44);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(362, 465);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Gclient::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(622, 46);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(362, 465);
			this->dataGridView2->TabIndex = 15;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Gclient::dataGridView2_CellContentClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(700, -5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(44, 45);
			this->button5->TabIndex = 16;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Gclient::button5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Location = System::Drawing::Point(12, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 17);
			this->label6->TabIndex = 17;
			this->label6->Text = L"ville";
			this->label6->Click += gcnew System::EventHandler(this, &Gclient::label6_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(158, 251);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 18;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox6_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Location = System::Drawing::Point(12, 294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"adresse";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(158, 294);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox7_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Location = System::Drawing::Point(12, 338);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"adresse_livraison";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(158, 338);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 22;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Gclient::textBox8_TextChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(15, 376);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 95);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Ajouter addresse";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Gclient::button6_Click);
			// 
			// Gclient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(996, 509);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
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
		try
		{
			String^ date = Convert::ToDateTime(textBox3->Text).ToString("yyyy-MM-dd");
			String^ date2 = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
			Gestion_Client gc(textBox1->Text, textBox2->Text, date, date2);
			gc.Ajouter();
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

			int id = Int32::Parse(textBox5->Text);
			Gestion_Client gc(id);

			gc.Afficher();
			while (gc.getReader()->Read())
			{
				textBox1->Text = gc.getReader()->GetString(1);
				textBox2->Text = gc.getReader()->GetString(2);
				textBox3->Text = Convert::ToString(gc.getReader()->GetDateTime(3));
				textBox4->Text = Convert::ToString(gc.getReader()->GetDateTime(4));

			}
			dataGridView1->Hide();
			dataGridView2->Show();
			gc.getReader()->Close();

			gc.afficher1();
			while (gc.getReader1()->Read())
			{
				textBox7->Text = gc.getReader1()->GetString(1);
				textBox8->Text = gc.getReader1()->GetString(2);

			}

			bindingSource2->DataSource = gc.getData();
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
		Gestion_Client gc(textBox1->Text);
		gc.Afficher_tous();
		dataGridView2->Hide();
		dataGridView1->Show();
		bindingSource1->DataSource = gc.getData();
		dataGridView1->DataSource = bindingSource1;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
		NS_Composants::Client^ cl = gcnew NS_Composants::Client();
		NS_Composants::ville^ vl = gcnew NS_Composants::ville();
		int id = Int32::Parse(textBox5->Text);
		cl->setadd_livraison(textBox8->Text);
		cl->setAdd_facturation(textBox7->Text);
		cl->setNom(textBox1->Text);
		cl->setPrenom(textBox2->Text);
		cl->setID(id);
		String^ date = Convert::ToDateTime(textBox3->Text).ToString("yyyy-MM-dd");
		String^ date2 = Convert::ToDateTime(textBox4->Text).ToString("yyyy-MM-dd");
		cl->setDate(date);
		cl->setDate2(date2);
		vl->setvile(textBox6->Text);
		SqlCommand^ cmd = gcnew SqlCommand(cl->modifier(cl->getNom(), cl->getPrenom(), cl->getDate(), cl->getDate2(), cl->getID()), con);
		SqlCommand^ cm = gcnew SqlCommand(cl->modifier(cl->getadd_facturation(), cl->getadd_livraison(), vl->getvile(), cl->getID()), con);
		con->Open();
		SqlDataReader^ dr = cmd->ExecuteReader();
		con->Close();
		con->Open();
		SqlDataReader^ d = cm->ExecuteReader();
		con->Close();
		MessageBox::Show("Modification Reussi");
		con->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int ID = Int32::Parse(textBox5->Text);
			Gestion_Client gc(ID);
			gc.Supprimer();
			MessageBox::Show("Client supprim�e avec succ�e");


		}
		catch (Exception^ ex) {


			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Gestion_Client gc(textBox1->Text, textBox2->Text, textBox7->Text, textBox8->Text, textBox6->Text);
			gc.ajouter1();
			MessageBox::Show("client enregistree");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
