#pragma once
#include "Diary.h"

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_welcome;
	private: System::Windows::Forms::Button^ button_profile;
	private: System::Windows::Forms::Button^ button_diary;
	private: System::Windows::Forms::Button^ button_reports_of_nutrition;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label_welcome = (gcnew System::Windows::Forms::Label());
			this->button_profile = (gcnew System::Windows::Forms::Button());
			this->button_diary = (gcnew System::Windows::Forms::Button());
			this->button_reports_of_nutrition = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Label_welcome
			// 
			this->Label_welcome->AutoSize = true;
			this->Label_welcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Label_welcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Label_welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Label_welcome->Location = System::Drawing::Point(94, 54);
			this->Label_welcome->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Label_welcome->Name = L"Label_welcome";
			this->Label_welcome->Size = System::Drawing::Size(278, 33);
			this->Label_welcome->TabIndex = 0;
			this->Label_welcome->Text = L"Добро пожаловать!";
			// 
			// button_profile
			// 
			this->button_profile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_profile->Location = System::Drawing::Point(164, 129);
			this->button_profile->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_profile->Name = L"button_profile";
			this->button_profile->Size = System::Drawing::Size(122, 46);
			this->button_profile->TabIndex = 1;
			this->button_profile->Text = L"Профиль";
			this->button_profile->UseVisualStyleBackColor = false;
			// 
			// button_diary
			// 
			this->button_diary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_diary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_diary->Location = System::Drawing::Point(164, 212);
			this->button_diary->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_diary->Name = L"button_diary";
			this->button_diary->Size = System::Drawing::Size(122, 46);
			this->button_diary->TabIndex = 2;
			this->button_diary->Text = L"Дневник";
			this->button_diary->UseVisualStyleBackColor = false;
			this->button_diary->Click += gcnew System::EventHandler(this, &Main::button_diary_Click);
			// 
			// button_reports_of_nutrition
			// 
			this->button_reports_of_nutrition->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_reports_of_nutrition->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_reports_of_nutrition->Location = System::Drawing::Point(164, 291);
			this->button_reports_of_nutrition->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_reports_of_nutrition->Name = L"button_reports_of_nutrition";
			this->button_reports_of_nutrition->Size = System::Drawing::Size(122, 46);
			this->button_reports_of_nutrition->TabIndex = 3;
			this->button_reports_of_nutrition->Text = L"Отчёты";
			this->button_reports_of_nutrition->UseVisualStyleBackColor = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(444, 413);
			this->Controls->Add(this->button_reports_of_nutrition);
			this->Controls->Add(this->button_diary);
			this->Controls->Add(this->button_profile);
			this->Controls->Add(this->Label_welcome);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NutriTrack";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	String^ getCurrentDate() {
		DateTime now = DateTime::Now;
		return now.ToString("dd-MM-yyyy");
	}

	void updateDiaryFile(String^ filename) {
		String^ today = getCurrentDate();
		if (!File::Exists(filename)) {
			StreamWriter^ file = gcnew StreamWriter(filename);
			file->WriteLine(today + ";");
			file->Close();
		}
		else {
			StreamReader^ file = gcnew StreamReader(filename);
			String^ lastLine;
			String^ line;
			while ((line = file->ReadLine()) != nullptr) {
				lastLine = line;
			}
			file->Close();

			if (!lastLine->Contains(today)) {
				StreamWriter^ file = gcnew StreamWriter(filename, true);
				file->WriteLine(today + ";");
				file->Close();
			}
		}
	}

	void createOrUpdateFile(String^ filename) {
		String^ today = getCurrentDate();
		if (!File::Exists(filename)) {
			StreamWriter^ file = gcnew StreamWriter(filename);
			file->WriteLine(today + ";");
			file->Close();
		}
		else {
			StreamReader^ file = gcnew StreamReader(filename);
			String^ firstLine = file->ReadLine();
			file->Close();

			if (!firstLine->Contains(today)) {
				StreamWriter^ file = gcnew StreamWriter(filename, false);
				file->WriteLine(today + ";");
				file->Close();
			}
		}
	}

	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) { // Сделана проверка на существование файлов и проверка на дату. Diary.txt это не касается, но у него есть добавление даты, так как он используется для отчётов
		updateDiaryFile("diary.txt");
		createOrUpdateFile("breakfast.txt");
		createOrUpdateFile("lunch.txt");
		createOrUpdateFile("dinner.txt");
		createOrUpdateFile("snack.txt");
	}

	private: System::Void button_diary_Click(System::Object^ sender, System::EventArgs^ e) {
		Diary^ DiaryShow = gcnew Diary();
		DiaryShow->Show();
		DiaryShow->Owner = this;
		this->Hide();
	}
	};
}
