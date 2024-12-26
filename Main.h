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
		System::ComponentModel::Container ^components;

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
			this->Label_welcome->Location = System::Drawing::Point(126, 66);
			this->Label_welcome->Name = L"Label_welcome";
			this->Label_welcome->Size = System::Drawing::Size(335, 40);
			this->Label_welcome->TabIndex = 0;
			this->Label_welcome->Text = L"Добро пожаловать!";
			// 
			// button_profile
			// 
			this->button_profile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_profile->Location = System::Drawing::Point(218, 159);
			this->button_profile->Name = L"button_profile";
			this->button_profile->Size = System::Drawing::Size(163, 56);
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
			this->button_diary->Location = System::Drawing::Point(218, 261);
			this->button_diary->Name = L"button_diary";
			this->button_diary->Size = System::Drawing::Size(163, 56);
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
			this->button_reports_of_nutrition->Location = System::Drawing::Point(218, 358);
			this->button_reports_of_nutrition->Name = L"button_reports_of_nutrition";
			this->button_reports_of_nutrition->Size = System::Drawing::Size(163, 56);
			this->button_reports_of_nutrition->TabIndex = 3;
			this->button_reports_of_nutrition->Text = L"Отчёты";
			this->button_reports_of_nutrition->UseVisualStyleBackColor = false;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(592, 508);
			this->Controls->Add(this->button_reports_of_nutrition);
			this->Controls->Add(this->button_diary);
			this->Controls->Add(this->button_profile);
			this->Controls->Add(this->Label_welcome);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NutriTrack";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button_diary_Click(System::Object^ sender, System::EventArgs^ e) {
		Diary^ p = gcnew Diary();
		p->Show();
		p->Owner = this;
		this->Hide();
	}
};
}
