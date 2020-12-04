#pragma once
#include "Gpersonnel.h"
#include "Gclient.h"
#include "GArticle.h"
#include "Gcommande.h"
#include "Gstatistique.h"
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
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->Location = System::Drawing::Point(12, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"GESTION DU PERSONNEL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::DarkGreen;
			this->button2->Location = System::Drawing::Point(227, 420);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 77);
			this->button2->TabIndex = 1;
			this->button2->Text = L"GESTION DU CLIENT";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(627, 420);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(165, 77);
			this->button3->TabIndex = 2;
			this->button3->Text = L"GESTION DE COMMANDE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(425, 420);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(165, 77);
			this->button4->TabIndex = 3;
			this->button4->Text = L"GESTION D\'ARTICLES";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(841, 420);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(165, 77);
			this->button5->TabIndex = 4;
			this->button5->Text = L"GESTION DE STATISTIQUE";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1049, 524);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Gpersonnel^ gper = gcnew Gpersonnel;
		gper->Show();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Gcommande^ gcom = gcnew Gcommande;

		gcom->Show();
		
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Gstatistique^ gstat = gcnew Gstatistique;

		gstat->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Gclient^ gcle = gcnew Gclient;
	gcle->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	GArticle^ gart = gcnew GArticle;
	gart->Show();
}

};
}
