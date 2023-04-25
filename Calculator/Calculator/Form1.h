#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ afisaj;
	protected:

	private: System::Windows::Forms::Button^ procent;
	private: System::Windows::Forms::Button^ CE;
	private: System::Windows::Forms::Button^ C;
	private: System::Windows::Forms::Button^ x;
	private: System::Windows::Forms::Button^ sapte;
	private: System::Windows::Forms::Button^ patru;
	private: System::Windows::Forms::Button^ unu;
	private: System::Windows::Forms::Button^ virgula;

	protected:








	private: System::Windows::Forms::Button^ opt;
	private: System::Windows::Forms::Button^ noua;
	private: System::Windows::Forms::Button^ impartire;
	private: System::Windows::Forms::Button^ cinci;




	private: System::Windows::Forms::Button^ sase;

	private: System::Windows::Forms::Button^ imultire;
	private: System::Windows::Forms::Button^ doi;
	private: System::Windows::Forms::Button^ trei;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ egal;









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
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->procent = (gcnew System::Windows::Forms::Button());
			this->CE = (gcnew System::Windows::Forms::Button());
			this->C = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Button());
			this->sapte = (gcnew System::Windows::Forms::Button());
			this->patru = (gcnew System::Windows::Forms::Button());
			this->unu = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->opt = (gcnew System::Windows::Forms::Button());
			this->noua = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->cinci = (gcnew System::Windows::Forms::Button());
			this->sase = (gcnew System::Windows::Forms::Button());
			this->imultire = (gcnew System::Windows::Forms::Button());
			this->doi = (gcnew System::Windows::Forms::Button());
			this->trei = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(12, 12);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(270, 105);
			this->afisaj->TabIndex = 0;
			// 
			// procent
			// 
			this->procent->Location = System::Drawing::Point(12, 123);
			this->procent->Name = L"procent";
			this->procent->Size = System::Drawing::Size(63, 63);
			this->procent->TabIndex = 1;
			this->procent->Text = L"%";
			this->procent->UseVisualStyleBackColor = true;
			this->procent->Click += gcnew System::EventHandler(this, &Form1::procent_Click);
			// 
			// CE
			// 
			this->CE->Location = System::Drawing::Point(81, 123);
			this->CE->Name = L"CE";
			this->CE->Size = System::Drawing::Size(63, 63);
			this->CE->TabIndex = 2;
			this->CE->Text = L"CE";
			this->CE->UseVisualStyleBackColor = true;
			this->CE->Click += gcnew System::EventHandler(this, &Form1::CE_Click);
			// 
			// C
			// 
			this->C->Location = System::Drawing::Point(150, 123);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(63, 63);
			this->C->TabIndex = 3;
			this->C->Text = L"C";
			this->C->UseVisualStyleBackColor = true;
			this->C->Click += gcnew System::EventHandler(this, &Form1::C_Click);
			// 
			// x
			// 
			this->x->Location = System::Drawing::Point(219, 123);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(63, 63);
			this->x->TabIndex = 4;
			this->x->Text = L"<-";
			this->x->UseVisualStyleBackColor = true;
			this->x->Click += gcnew System::EventHandler(this, &Form1::x_Click);
			// 
			// sapte
			// 
			this->sapte->Location = System::Drawing::Point(12, 192);
			this->sapte->Name = L"sapte";
			this->sapte->Size = System::Drawing::Size(63, 63);
			this->sapte->TabIndex = 5;
			this->sapte->Text = L"7";
			this->sapte->UseVisualStyleBackColor = true;
			this->sapte->Click += gcnew System::EventHandler(this, &Form1::sapte_Click);
			// 
			// patru
			// 
			this->patru->Location = System::Drawing::Point(12, 261);
			this->patru->Name = L"patru";
			this->patru->Size = System::Drawing::Size(63, 63);
			this->patru->TabIndex = 6;
			this->patru->Text = L"4";
			this->patru->UseVisualStyleBackColor = true;
			this->patru->Click += gcnew System::EventHandler(this, &Form1::patru_Click);
			// 
			// unu
			// 
			this->unu->Location = System::Drawing::Point(12, 330);
			this->unu->Name = L"unu";
			this->unu->Size = System::Drawing::Size(63, 63);
			this->unu->TabIndex = 7;
			this->unu->Text = L"1";
			this->unu->UseVisualStyleBackColor = true;
			this->unu->Click += gcnew System::EventHandler(this, &Form1::unu_Click);
			// 
			// virgula
			// 
			this->virgula->Location = System::Drawing::Point(12, 399);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(63, 63);
			this->virgula->TabIndex = 8;
			this->virgula->Text = L".";
			this->virgula->UseVisualStyleBackColor = true;
			this->virgula->Click += gcnew System::EventHandler(this, &Form1::virgula_Click);
			// 
			// opt
			// 
			this->opt->Location = System::Drawing::Point(81, 192);
			this->opt->Name = L"opt";
			this->opt->Size = System::Drawing::Size(63, 63);
			this->opt->TabIndex = 9;
			this->opt->Text = L"8";
			this->opt->UseVisualStyleBackColor = true;
			this->opt->Click += gcnew System::EventHandler(this, &Form1::opt_Click);
			// 
			// noua
			// 
			this->noua->Location = System::Drawing::Point(150, 192);
			this->noua->Name = L"noua";
			this->noua->Size = System::Drawing::Size(63, 63);
			this->noua->TabIndex = 10;
			this->noua->Text = L"9";
			this->noua->UseVisualStyleBackColor = true;
			this->noua->Click += gcnew System::EventHandler(this, &Form1::noua_Click);
			// 
			// impartire
			// 
			this->impartire->Location = System::Drawing::Point(221, 192);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(63, 63);
			this->impartire->TabIndex = 11;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = true;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click);
			// 
			// cinci
			// 
			this->cinci->Location = System::Drawing::Point(81, 261);
			this->cinci->Name = L"cinci";
			this->cinci->Size = System::Drawing::Size(63, 63);
			this->cinci->TabIndex = 12;
			this->cinci->Text = L"5";
			this->cinci->UseVisualStyleBackColor = true;
			this->cinci->Click += gcnew System::EventHandler(this, &Form1::cinci_Click);
			// 
			// sase
			// 
			this->sase->Location = System::Drawing::Point(150, 261);
			this->sase->Name = L"sase";
			this->sase->Size = System::Drawing::Size(63, 63);
			this->sase->TabIndex = 13;
			this->sase->Text = L"6";
			this->sase->UseVisualStyleBackColor = true;
			this->sase->Click += gcnew System::EventHandler(this, &Form1::sase_Click);
			// 
			// imultire
			// 
			this->imultire->Location = System::Drawing::Point(219, 261);
			this->imultire->Name = L"imultire";
			this->imultire->Size = System::Drawing::Size(63, 63);
			this->imultire->TabIndex = 14;
			this->imultire->Text = L"*";
			this->imultire->UseVisualStyleBackColor = true;
			this->imultire->Click += gcnew System::EventHandler(this, &Form1::imultire_Click);
			// 
			// doi
			// 
			this->doi->Location = System::Drawing::Point(81, 330);
			this->doi->Name = L"doi";
			this->doi->Size = System::Drawing::Size(63, 63);
			this->doi->TabIndex = 15;
			this->doi->Text = L"2";
			this->doi->UseVisualStyleBackColor = true;
			this->doi->Click += gcnew System::EventHandler(this, &Form1::doi_Click);
			// 
			// trei
			// 
			this->trei->Location = System::Drawing::Point(150, 330);
			this->trei->Name = L"trei";
			this->trei->Size = System::Drawing::Size(63, 63);
			this->trei->TabIndex = 16;
			this->trei->Text = L"3";
			this->trei->UseVisualStyleBackColor = true;
			this->trei->Click += gcnew System::EventHandler(this, &Form1::trei_Click);
			// 
			// scadere
			// 
			this->scadere->Location = System::Drawing::Point(219, 330);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(63, 63);
			this->scadere->TabIndex = 17;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = true;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(81, 398);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(63, 63);
			this->zero->TabIndex = 18;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Form1::zero_Click);
			// 
			// adunare
			// 
			this->adunare->Location = System::Drawing::Point(150, 398);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(63, 63);
			this->adunare->TabIndex = 19;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = true;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// egal
			// 
			this->egal->Location = System::Drawing::Point(219, 399);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(63, 63);
			this->egal->TabIndex = 20;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = true;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 473);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->trei);
			this->Controls->Add(this->doi);
			this->Controls->Add(this->imultire);
			this->Controls->Add(this->sase);
			this->Controls->Add(this->cinci);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->noua);
			this->Controls->Add(this->opt);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->unu);
			this->Controls->Add(this->patru);
			this->Controls->Add(this->sapte);
			this->Controls->Add(this->x);
			this->Controls->Add(this->C);
			this->Controls->Add(this->CE);
			this->Controls->Add(this->procent);
			this->Controls->Add(this->afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void sapte_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "7";
	}
	private: System::Void opt_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "8";
	}
	private: System::Void noua_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "9";
	}
	private: System::Void patru_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "4";
	}
	private: System::Void cinci_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "5";
	}
	private: System::Void sase_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "6";
	}
	private: System::Void unu_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "1";
	}
	private: System::Void doi_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "2";
	}
	private: System::Void trei_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "3";
	}
	private: System::Void zero_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "0";
	}



	double num1, num2, rezultat;
	String^ operation = "";

	private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != ""){
			num1 = double::Parse(afisaj->Text);
			afisaj->Text = "";
			operation = "+";
		}
	}
	private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != ""){
			num1 = double::Parse(afisaj->Text);
			afisaj->Text = "";
			operation = "-";
		}
	}
	private: System::Void imultire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			num1 = double::Parse(afisaj->Text);
			afisaj->Text = "";
			operation = "*";
		}
	}
	private: System::Void impartire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			num1 = double::Parse(afisaj->Text);
			afisaj->Text = "";
			operation = "/";
		}
	}
	private: System::Void procent_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			num1 = double::Parse(afisaj->Text);
			afisaj->Text = "";
			operation = "%";
		}
	}


	private: System::Void virgula_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!afisaj->Text->Contains(".") && afisaj->Text != "") {
			afisaj->Text += ".";
		}
	}
	private: System::Void x_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text = afisaj->Text->Remove(afisaj->Text->Length - 1, 1);
	}
	private: System::Void C_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Clear();
		num1 = 0;
		num2 = 0;
		operation = "";

	}
	private: System::Void CE_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Clear();
		num1 = 0;
		num2 = 0;
		operation = "";
	}


	
	private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
		
		num2 = double::Parse(afisaj->Text);

		if (operation == "+") {
			afisaj->Text = "";
			rezultat = num1 + num2;
			afisaj->Text = System::Convert::ToString(rezultat);
		}
		else if(operation == "-") {
			afisaj->Text = "";
			rezultat = num1 - num2;
			afisaj->Text = System::Convert::ToString(rezultat);
		}
		else if (operation == "*") {
			afisaj->Text = "";
			rezultat = num1 * num2;
			afisaj->Text = System::Convert::ToString(rezultat);
		}
		else if (operation == "/" && num2 != 0) {
			afisaj->Text = "";
			rezultat = num1 / num2;
			afisaj->Text = System::Convert::ToString(rezultat);
		}
		else {
			afisaj->Text = "EROARE";
		}

		num1 = 0;
		num2 = 0;
		operation = "";
	}

};
}
