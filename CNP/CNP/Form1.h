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
	private: System::Windows::Forms::TextBox^ input_cnp;
	protected:
	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	private: System::Windows::Forms::Button^ calculeaza_cnp;
	private: System::Windows::Forms::Button^ clp;
	private: System::Windows::Forms::Button^ afisaj_data;
	private: System::Windows::Forms::Label^ label1;

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
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->calculeaza_cnp = (gcnew System::Windows::Forms::Button());
			this->clp = (gcnew System::Windows::Forms::Button());
			this->afisaj_data = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(50, 26);
			this->input_cnp->Multiline = true;
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(304, 109);
			this->input_cnp->TabIndex = 0;
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(50, 218);
			this->afisaj_cnp->Multiline = true;
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(304, 114);
			this->afisaj_cnp->TabIndex = 1;
			// 
			// calculeaza_cnp
			// 
			this->calculeaza_cnp->Location = System::Drawing::Point(50, 150);
			this->calculeaza_cnp->Name = L"calculeaza_cnp";
			this->calculeaza_cnp->Size = System::Drawing::Size(136, 53);
			this->calculeaza_cnp->TabIndex = 2;
			this->calculeaza_cnp->Text = L"Calculeaza";
			this->calculeaza_cnp->UseVisualStyleBackColor = true;
			this->calculeaza_cnp->Click += gcnew System::EventHandler(this, &Form1::calculeaza_cnp_Click);
			// 
			// clp
			// 
			this->clp->Location = System::Drawing::Point(217, 150);
			this->clp->Name = L"clp";
			this->clp->Size = System::Drawing::Size(137, 53);
			this->clp->TabIndex = 3;
			this->clp->Text = L"CLP";
			this->clp->UseVisualStyleBackColor = true;
			this->clp->Click += gcnew System::EventHandler(this, &Form1::clp_Click);
			// 
			// afisaj_data
			// 
			this->afisaj_data->Location = System::Drawing::Point(381, 150);
			this->afisaj_data->Name = L"afisaj_data";
			this->afisaj_data->Size = System::Drawing::Size(114, 53);
			this->afisaj_data->TabIndex = 4;
			this->afisaj_data->Text = L"Afiseaza data";
			this->afisaj_data->UseVisualStyleBackColor = true;
			this->afisaj_data->Click += gcnew System::EventHandler(this, &Form1::afisaj_data_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(413, 74);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 357);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->afisaj_data);
			this->Controls->Add(this->clp);
			this->Controls->Add(this->calculeaza_cnp);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->input_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clp_Click(System::Object^ sender, System::EventArgs^ e) {
		input_cnp->Clear();
		afisaj_cnp->Clear();
	}

	private: System::Void calculeaza_cnp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (input_cnp->Text->Length == 0) {
			MessageBox::Show("Introduceti CNP-ul", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else
		{
			//Citire CNP
			String^ cnp = input_cnp->Text;

			//Extragerea de date din CNP
			int an = Int32::Parse(cnp->Substring(1, 2));
			int luna = Int32::Parse(cnp->Substring(3, 2));
			int zi = Int32::Parse(cnp->Substring(5, 2));

			//Calcul varsta
			DateTime azi = DateTime::Now;
			int Varsta = azi.Year - (1900 + an);
			if (luna > azi.Month || (luna == azi.Month && zi > azi.Day)) {
				Varsta--;
			}

			//afisare 
			afisaj_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + "\n" + "Varsta: " + Varsta.ToString();
		}
	}
	private: System::Void afisaj_data_Click(System::Object^ sender, System::EventArgs^ e) {
		DateTime today = DateTime::Now;
		label1->Text = today.ToString("dd-MM-yy");
	}
};
}
