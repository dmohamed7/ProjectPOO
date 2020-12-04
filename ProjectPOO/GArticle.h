#pragma once

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label2;
	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GArticle::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(419, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 73);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ajouter";
			this->button1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(413, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 74);
			this->button2->TabIndex = 2;
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
			this->button3->Location = System::Drawing::Point(403, 263);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(82, 74);
			this->button3->TabIndex = 3;
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
			this->button4->Location = System::Drawing::Point(411, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(69, 73);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Afficher";
			this->button4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(35, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"reference :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(35, 320);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Seuil :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(35, 269);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Quantité :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(35, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Taux TVA :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(35, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Couleur :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(35, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 17);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Désignation :";
			this->label7->Click += gcnew System::EventHandler(this, &GArticle::label7_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(677, 41);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 40);
			this->button5->TabIndex = 23;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(118, 78);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(131, 22);
			this->maskedTextBox1->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 22);
			this->textBox1->TabIndex = 25;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 269);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 22);
			this->textBox2->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 218);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 22);
			this->textBox3->TabIndex = 27;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(106, 171);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(131, 22);
			this->textBox4->TabIndex = 28;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(88, 320);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(131, 22);
			this->textBox5->TabIndex = 29;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(725, 78);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(181, 432);
			this->dataGridView2->TabIndex = 30;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox6->Location = System::Drawing::Point(725, 50);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(181, 22);
			this->textBox6->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(35, 367);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 17);
			this->label8->TabIndex = 32;
			this->label8->Text = L"prix TH :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(102, 362);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(131, 22);
			this->textBox7->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(744, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 17);
			this->label2->TabIndex = 34;
			this->label2->Text = L"ID";
			// 
			// GArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(907, 509);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Name = L"GArticle";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"GArticle";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
