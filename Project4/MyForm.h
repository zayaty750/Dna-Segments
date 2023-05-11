#pragma once
#include "DNAA.h"
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace std;

namespace Project4 {
	
	//DNAA a;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::TextBox^ id;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ addpanel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ pncon;




	private: System::Windows::Forms::Panel^ pn_bottom_bar;

	private: System::Windows::Forms::PictureBox^ pictureBox12;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ pn_title_bar;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ RNA;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;









	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->RNA = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->addpanel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pncon = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_bottom_bar = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->addpanel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->pncon->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->pn_title_bar->SuspendLayout();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Snow;
			this->label4->Location = System::Drawing::Point(123, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 30);
			this->label4->TabIndex = 17;
			this->label4->Text = L"DNA";
			// 
			// id
			// 
			this->id->Location = System::Drawing::Point(13, 16);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(292, 22);
			this->id->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(498, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 44);
			this->label3->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(3, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"DATA";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->id);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Location = System::Drawing::Point(3, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(319, 55);
			this->panel1->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox4->Location = System::Drawing::Point(-223, -79);
			this->textBox4->MaxLength = 10;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(290, 23);
			this->textBox4->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel2->Controls->Add(this->RNA);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(504, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(319, 55);
			this->panel2->TabIndex = 15;
			// 
			// RNA
			// 
			this->RNA->Location = System::Drawing::Point(13, 16);
			this->RNA->Name = L"RNA";
			this->RNA->ReadOnly = true;
			this->RNA->Size = System::Drawing::Size(292, 22);
			this->RNA->TabIndex = 1;
			this->RNA->Text = L"No Data.";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Location = System::Drawing::Point(-223, -79);
			this->textBox2->MaxLength = 10;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(290, 23);
			this->textBox2->TabIndex = 0;
			// 
			// addpanel1
			// 
			this->addpanel1->Controls->Add(this->panel3);
			this->addpanel1->Controls->Add(this->label5);
			this->addpanel1->Controls->Add(this->panel2);
			this->addpanel1->Controls->Add(this->label3);
			this->addpanel1->Controls->Add(this->label2);
			this->addpanel1->Controls->Add(this->panel1);
			this->addpanel1->Controls->Add(this->label4);
			this->addpanel1->Location = System::Drawing::Point(142, 69);
			this->addpanel1->Name = L"addpanel1";
			this->addpanel1->Size = System::Drawing::Size(826, 334);
			this->addpanel1->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->result);
			this->panel3->Location = System::Drawing::Point(0, 138);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(823, 193);
			this->panel3->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox3->Location = System::Drawing::Point(-223, -79);
			this->textBox3->MaxLength = 10;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(290, 23);
			this->textBox3->TabIndex = 0;
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->result->ForeColor = System::Drawing::Color::Snow;
			this->result->Location = System::Drawing::Point(0, 0);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(823, 193);
			this->result->TabIndex = 23;
			this->result->Text = L"Amino-acid";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Snow;
			this->label5->Location = System::Drawing::Point(635, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 30);
			this->label5->TabIndex = 22;
			this->label5->Text = L"RNA";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(423, 412);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(275, 61);
			this->button2->TabIndex = 19;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pncon
			// 
			this->pncon->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->pncon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pncon->Controls->Add(this->addpanel1);
			this->pncon->Controls->Add(this->button2);
			this->pncon->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pncon->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->pncon->Location = System::Drawing::Point(0, 87);
			this->pncon->Name = L"pncon";
			this->pncon->Size = System::Drawing::Size(1118, 479);
			this->pncon->TabIndex = 7;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(400, 9);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 72);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			// 
			// pn_bottom_bar
			// 
			this->pn_bottom_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_bottom_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_bottom_bar->Location = System::Drawing::Point(0, 566);
			this->pn_bottom_bar->Name = L"pn_bottom_bar";
			this->pn_bottom_bar->Size = System::Drawing::Size(1118, 64);
			this->pn_bottom_bar->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Snow;
			this->label1->Location = System::Drawing::Point(516, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"DNA System";
			// 
			// pn_title_bar
			// 
			this->pn_title_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_title_bar->Controls->Add(this->label1);
			this->pn_title_bar->Controls->Add(this->pictureBox12);
			this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_title_bar->Location = System::Drawing::Point(0, 0);
			this->pn_title_bar->Name = L"pn_title_bar";
			this->pn_title_bar->Size = System::Drawing::Size(1118, 87);
			this->pn_title_bar->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 630);
			this->Controls->Add(this->pncon);
			this->Controls->Add(this->pn_bottom_bar);
			this->Controls->Add(this->pn_title_bar);
			this->Name = L"MyForm";
			this->Text = L"DNA";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->addpanel1->ResumeLayout(false);
			this->addpanel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->pncon->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->pn_title_bar->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		
		
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		DNAA a;
		char str[100];

		msclr::interop::marshal_context context;

		string data = context.marshal_as<string>(this->id->Text);

		bool correct = true;
		int x = data.length();

		//cause dna shouuld be divided into 3 char to convert after to rna	
		if (data.length() % 3 != 0) 
		{
			label2->Text = "Data is invalid .The number of characters must be divisible by 3";
			correct = false;
		}
		//even bn2as mnha wahda 3shan tob2a odd
		 if (correct == true && x % 2 == 0)
		{
			x = x - 1;
		}
		//lw msh % l 2 aw 3 
		else if (correct == true)
		{
			x = x - 2;
		}
		if (correct == true) {
			//a->t //c->g //odam b3d
			for (int i = 0; i <= x; i = i + 2) {
				if (data[i] == 'A' && data[i + 1] != 'T') {
					label2->Text = "Data is invalid. An A has to be followed by a T";
					correct = false;
					break;
				}
				else if (data[i] == 'T' && data[i + 1] != 'A')
				{
					label2->Text = "Data is invalid. A T has to be followed by an A" ;
					correct = false;
					break;
				}
				else if (data[i] == 'C' && data[i + 1] != 'G')
				{
					label2->Text = "Data is invalid. A C has to be followed by a G" ;
					correct = false;
					break;
				}
				else if (data[i] == 'G' && data[i + 1] != 'C')
				{
					label2->Text = "Data is invalid. A G has to be followed by a C";
					correct = false;
					break;
				}
			}
		}
		if (correct && data.empty() == false )
		{
			RNA->Text = " ";
			result->Text = " ";
			
			a.insert(data);
			label2->Text = "Saved";

			a.convert(a.getroot(), str);

			string  ab;
			int count = 0;
			for (int i = 0; i < data.length(); i++)
			{
				ab += str[i];
				count++;
			}

			string name[100];
			string amino;

			int j = 0;
			for (int i = 0; i < count; i+=3,j++)
			{
				if (str[i] == 'U' && str[i + 1] == 'U' && str[i + 2] == 'U' || str[i] == 'U' && str[i + 1] == 'U' && str[i + 2] == 'C')
				{
					name[j] = "Phenyl-alanine";
				}
			
				else if (str[i] == 'G' && str[i + 1] == 'C' && str[i + 2] == 'U'
							||str[i] == 'G' && str[i + 1] == 'C' && str[i + 2] == 'C' ||
							str[i] == 'G' && str[i + 1] == 'C' && str[i + 2] == 'A'
							|| str[i] == 'G' && str[i + 1] == 'C' && str[i + 2] == 'G')
				{
						name[j] = "Alanine";
				}
		else if (str[i] == 'A' && str[i + 1] == 'U' && str[i + 2] == 'U'
			|| str[i] == 'A' && str[i + 1] == 'U' && str[i + 2] == 'C' ||
			str[i] == 'A' && str[i + 1] == 'U' && str[i + 2] == 'A')
		{
			name[j] = "Isoleucine";
		}
		else if (str[i] == 'G' && str[i + 1] == 'G' && str[i + 2] == 'U'
			|| str[i] == 'G' && str[i + 1] == 'G' && str[i + 2] == 'C' ||
			str[i] == 'G' && str[i + 1] == 'G' && str[i + 2] == 'A'
			|| str[i] == 'G' && str[i + 1] == 'G' && str[i + 2] == 'G')
		{
			name[j] = "Gylcine";
		}
		else if (str[i] == 'C' && str[i + 1] == 'G' && str[i + 2] == 'U'
			|| str[i] == 'C' && str[i + 1] == 'G' && str[i + 2] == 'C' ||
			str[i] == 'C' && str[i + 1] == 'G' && str[i + 2] == 'A'
			|| str[i] == 'C' && str[i + 1] == 'G' && str[i + 2] == 'G')
		{
			name[j] = "Arginine";
		}
		else if (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'U'
			|| str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'C')
		{
			name[j] = "Serine";
		}
		else if (str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'A'
			|| str[i] == 'A' && str[i + 1] == 'G' && str[i + 2] == 'G')
		{
			name[j] = "Arginine";
		}
		else if (str[i] == 'G' && str[i + 1] == 'A' && str[i + 2] == 'A'
			|| str[i] == 'G' && str[i + 1] == 'G' && str[i + 2] == 'G')
		{
			name[j] = "Glutamic acid";
		}
				
		else if ((str[i] == 'G' && str[i + 1] == 'A' && str[i + 2] == 'C') || (str[i] == 'G' && str[i + 1] == 'A' && str[i + 2] == 'U'))
		{
			name[j] = "Aspartic acid";
		}
		else if (str[i] == 'A' && str[i + 1] == 'A' && str[i + 2] == 'A'
			|| str[i] == 'A' && str[i + 1] == 'A' && str[i + 2] == 'G')
		{
			name[j] = "Lysine";
		}
		else if (str[i] == 'A' && str[i + 1] == 'A' && str[i + 2] == 'U'
			|| str[i] == 'A' && str[i + 1] == 'A' && str[i + 2] == 'C')
		{
			name[j] = "Asparagine";
		}
		else if (str[i] == 'C' && str[i + 1] == 'A' && str[i + 2] == 'U'
			|| str[i] == 'C' && str[i + 1] == 'A' && str[i + 2] == 'C')
		{
			name[j] = "Histidine";
		}
		else if (str[i] == 'C' && str[i + 1] == 'A' && str[i + 2] == 'A'
			|| str[i] == 'C' && str[i + 1] == 'A' && str[i + 2] == 'G')
		{
			name[j] = "Glutamine";
		}
		else if ((str[i] == 'U' && str[i + 1] == 'A' && str[i + 2] == 'U')
			|| (str[i] == 'U' && str[i + 1] == 'A' && str[i + 2] == 'C'))
		{
			name[j] = "Tyrosine";
		}
		else if ((str[i] == 'U' && str[i + 1] == 'A' && str[i + 2] == 'A')
			|| (str[i] == 'U' && str[i + 1] == 'A' && str[i + 2] == 'G'))
		{
			name[j] = "Stop condon";
		}

		else if (str[i] == 'U' && str[i + 1] == 'U' && str[i + 2] == 'A'
			|| str[i] == 'U' && str[i + 1] == 'U' && str[i + 2] == 'C')
		{
			name[j] = "Leucine";
		}
		else if (str[i] == 'C' && str[i + 1] == 'U' && str[i + 2] == 'U'
			|| str[i] == 'C' && str[i + 1] == 'U' && str[i + 2] == 'C' ||
			str[i] == 'C' && str[i + 1] == 'U' && str[i + 2] == 'A'
			|| str[i] == 'C' && str[i + 1] == 'U' && str[i + 2] == 'G')
		{
			name[j] = "Leucine";
		}
		else if (str[i] == 'G' && str[i + 1] == 'U' && str[i + 2] == 'U'
			|| str[i] == 'G' && str[i + 1] == 'U' && str[i + 2] == 'C' ||
			str[i] == 'G' && str[i + 1] == 'U' && str[i + 2] == 'A'
			|| str[i] == 'G' && str[i + 1] == 'U' && str[i + 2] == 'G')
		{
			name[j] = "Valine";
		}
		else if (str[i] == 'U' && str[i + 1] == 'C' && str[i + 2] == 'U'
			|| str[i] == 'U' && str[i + 1] == 'C' && str[i + 2] == 'C' ||
			str[i] == 'U' && str[i + 1] == 'C' && str[i + 2] == 'A'
			|| str[i] == 'U' && str[i + 1] == 'C' && str[i + 2] == 'G')
		{
			name[j] = "Serine";
		}
		else if (str[i] == 'C' && str[i + 1] == 'C' && str[i + 2] == 'U'
			|| str[i] == 'C' && str[i + 1] == 'C' && str[i + 2] == 'C' ||
			str[i] == 'C' && str[i + 1] == 'C' && str[i + 2] == 'A'
			|| str[i] == 'C' && str[i + 1] == 'C' && str[i + 2] == 'G')
		{
			name[j] = "Proline";
		}
		else if (str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'U'
			|| str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'C' ||
			str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'A'
			|| str[i] == 'A' && str[i + 1] == 'C' && str[i + 2] == 'G')
		{
			
			name[j] = "Threonine";
		}
		else if (str[i] == 'U' && str[i + 1] == 'G' && str[i + 2] == 'U'
		|| str[i] == 'U' && str[i + 1] == 'G' && str[i + 2] == 'C')
		{
		name[j] = "Cysteine";
		}
		else if (str[i] == 'A' && str[i + 1] == 'U' && str[i + 2] == 'G')
		{
			name[j] = "Methionine";
		}
		}

			for (int i =0 ;i<100;i++)
			{
				if(name[i].empty() == false)
				{
					amino += "  -  " + name[i];
				}
			}

			String^ dc = gcnew  String(amino.c_str());
			String^ abc = gcnew String(ab.c_str());

			
			RNA->Text = abc;
			result->Text = dc;
		}
		else
		{
			RNA->Text = "No Data.";
			result->Text = "Amino-acid";
		}
		a.remove(a.getroot(),data);
	}
};
}
