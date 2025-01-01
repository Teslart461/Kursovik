//
#pragma once
#include "FindIng.h"

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Diary
	/// </summary>
	public ref class Diary : public System::Windows::Forms::Form
	{
	public:
		Diary(void)
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
		~Diary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Breakfast_tabl;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_breakfast;
	private: System::Windows::Forms::Label^ label_breakfast_cal;
	private: System::Windows::Forms::Label^ label_breakfast_add;
	private: System::Windows::Forms::Label^ label_lunch_add;
	private: System::Windows::Forms::Label^ label_lunch_cal;
	private: System::Windows::Forms::DataGridView^ Lunch_tabl;
	private: System::Windows::Forms::TextBox^ textBox_lunch;
	private: System::Windows::Forms::Label^ label_snack_add;

	private: System::Windows::Forms::Label^ label_snack_cal;
	private: System::Windows::Forms::DataGridView^ Snack_tabl;


	private: System::Windows::Forms::TextBox^ textBox_snack;

	private: System::Windows::Forms::Label^ label_dinner_add;

	private: System::Windows::Forms::Label^ label_dinner_cal;
	private: System::Windows::Forms::DataGridView^ Dinner_tabl;

	private: System::Windows::Forms::TextBox^ textBox_dinner;
	private: System::Windows::Forms::Label^ label_JF;
	private: System::Windows::Forms::Button^ button_breakfast;
	private: System::Windows::Forms::Button^ button_Lunch;






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
			this->Breakfast_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_breakfast = (gcnew System::Windows::Forms::TextBox());
			this->label_breakfast_cal = (gcnew System::Windows::Forms::Label());
			this->label_breakfast_add = (gcnew System::Windows::Forms::Label());
			this->label_lunch_add = (gcnew System::Windows::Forms::Label());
			this->label_lunch_cal = (gcnew System::Windows::Forms::Label());
			this->Lunch_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_lunch = (gcnew System::Windows::Forms::TextBox());
			this->label_snack_add = (gcnew System::Windows::Forms::Label());
			this->label_snack_cal = (gcnew System::Windows::Forms::Label());
			this->Snack_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_snack = (gcnew System::Windows::Forms::TextBox());
			this->label_dinner_add = (gcnew System::Windows::Forms::Label());
			this->label_dinner_cal = (gcnew System::Windows::Forms::Label());
			this->Dinner_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_dinner = (gcnew System::Windows::Forms::TextBox());
			this->label_JF = (gcnew System::Windows::Forms::Label());
			this->button_breakfast = (gcnew System::Windows::Forms::Button());
			this->button_Lunch = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Breakfast_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lunch_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Snack_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dinner_tabl))->BeginInit();
			this->SuspendLayout();
			// 
			// Breakfast_tabl
			// 
			this->Breakfast_tabl->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Breakfast_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Breakfast_tabl->Location = System::Drawing::Point(37, 90);
			this->Breakfast_tabl->Name = L"Breakfast_tabl";
			this->Breakfast_tabl->ReadOnly = true;
			this->Breakfast_tabl->RowHeadersWidth = 51;
			this->Breakfast_tabl->RowTemplate->Height = 24;
			this->Breakfast_tabl->Size = System::Drawing::Size(517, 112);
			this->Breakfast_tabl->TabIndex = 1;
			this->Breakfast_tabl->Columns->Add("Ingredient", "Ingredient");
			this->Breakfast_tabl->Columns->Add("Weight", "Weight (g)");
			this->Breakfast_tabl->Columns->Add("Calories", "Calories (kcal)");
			// 
			// textBox_breakfast
			// 
			this->textBox_breakfast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_breakfast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_breakfast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_breakfast->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_breakfast->Location = System::Drawing::Point(37, 39);
			this->textBox_breakfast->Name = L"textBox_breakfast";
			this->textBox_breakfast->ReadOnly = true;
			this->textBox_breakfast->Size = System::Drawing::Size(95, 30);
			this->textBox_breakfast->TabIndex = 0;
			this->textBox_breakfast->Text = L"Завтрак";
			this->textBox_breakfast->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_breakfast_cal
			// 
			this->label_breakfast_cal->AutoSize = true;
			this->label_breakfast_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_breakfast_cal->Location = System::Drawing::Point(376, 44);
			this->label_breakfast_cal->Name = L"label_breakfast_cal";
			this->label_breakfast_cal->Size = System::Drawing::Size(104, 25);
			this->label_breakfast_cal->TabIndex = 2;
			this->label_breakfast_cal->Text = L"0 калорий";
			// 
			// label_breakfast_add
			// 
			this->label_breakfast_add->AutoSize = true;
			this->label_breakfast_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_breakfast_add->Location = System::Drawing::Point(503, 33);
			this->label_breakfast_add->Name = L"label_breakfast_add";
			this->label_breakfast_add->Size = System::Drawing::Size(44, 46);
			this->label_breakfast_add->TabIndex = 3;
			this->label_breakfast_add->Text = L"+";
			this->label_breakfast_add->Click += gcnew System::EventHandler(this, &Diary::label_breakfast_add_Click);
			// 
			// label_lunch_add
			// 
			this->label_lunch_add->AutoSize = true;
			this->label_lunch_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lunch_add->Location = System::Drawing::Point(503, 230);
			this->label_lunch_add->Name = L"label_lunch_add";
			this->label_lunch_add->Size = System::Drawing::Size(44, 46);
			this->label_lunch_add->TabIndex = 7;
			this->label_lunch_add->Text = L"+";
			// 
			// label_lunch_cal
			// 
			this->label_lunch_cal->AutoSize = true;
			this->label_lunch_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lunch_cal->Location = System::Drawing::Point(376, 241);
			this->label_lunch_cal->Name = L"label_lunch_cal";
			this->label_lunch_cal->Size = System::Drawing::Size(104, 25);
			this->label_lunch_cal->TabIndex = 6;
			this->label_lunch_cal->Text = L"0 калорий";
			// 
			// Lunch_tabl
			// 
			this->Lunch_tabl->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Lunch_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Lunch_tabl->Location = System::Drawing::Point(37, 287);
			this->Lunch_tabl->Name = L"Lunch_tabl";
			this->Lunch_tabl->ReadOnly = true;
			this->Lunch_tabl->RowHeadersWidth = 51;
			this->Lunch_tabl->RowTemplate->Height = 24;
			this->Lunch_tabl->Size = System::Drawing::Size(517, 112);
			this->Lunch_tabl->TabIndex = 5;
			// 
			// textBox_lunch
			// 
			this->textBox_lunch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_lunch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_lunch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_lunch->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_lunch->Location = System::Drawing::Point(37, 236);
			this->textBox_lunch->Name = L"textBox_lunch";
			this->textBox_lunch->ReadOnly = true;
			this->textBox_lunch->Size = System::Drawing::Size(65, 30);
			this->textBox_lunch->TabIndex = 4;
			this->textBox_lunch->Text = L"Обед";
			this->textBox_lunch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_snack_add
			// 
			this->label_snack_add->AutoSize = true;
			this->label_snack_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snack_add->Location = System::Drawing::Point(503, 623);
			this->label_snack_add->Name = L"label_snack_add";
			this->label_snack_add->Size = System::Drawing::Size(44, 46);
			this->label_snack_add->TabIndex = 15;
			this->label_snack_add->Text = L"+";
			// 
			// label_snack_cal
			// 
			this->label_snack_cal->AutoSize = true;
			this->label_snack_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snack_cal->Location = System::Drawing::Point(376, 634);
			this->label_snack_cal->Name = L"label_snack_cal";
			this->label_snack_cal->Size = System::Drawing::Size(104, 25);
			this->label_snack_cal->TabIndex = 14;
			this->label_snack_cal->Text = L"0 калорий";
			// 
			// Snack_tabl
			// 
			this->Snack_tabl->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Snack_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Snack_tabl->Location = System::Drawing::Point(37, 682);
			this->Snack_tabl->Name = L"Snack_tabl";
			this->Snack_tabl->ReadOnly = true;
			this->Snack_tabl->RowHeadersWidth = 51;
			this->Snack_tabl->RowTemplate->Height = 24;
			this->Snack_tabl->Size = System::Drawing::Size(517, 112);
			this->Snack_tabl->TabIndex = 13;
			// 
			// textBox_snack
			// 
			this->textBox_snack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_snack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_snack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_snack->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_snack->Location = System::Drawing::Point(37, 629);
			this->textBox_snack->Name = L"textBox_snack";
			this->textBox_snack->ReadOnly = true;
			this->textBox_snack->Size = System::Drawing::Size(92, 30);
			this->textBox_snack->TabIndex = 12;
			this->textBox_snack->Text = L"Перекус";
			this->textBox_snack->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_dinner_add
			// 
			this->label_dinner_add->AutoSize = true;
			this->label_dinner_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dinner_add->Location = System::Drawing::Point(503, 426);
			this->label_dinner_add->Name = L"label_dinner_add";
			this->label_dinner_add->Size = System::Drawing::Size(44, 46);
			this->label_dinner_add->TabIndex = 11;
			this->label_dinner_add->Text = L"+";
			// 
			// label_dinner_cal
			// 
			this->label_dinner_cal->AutoSize = true;
			this->label_dinner_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dinner_cal->Location = System::Drawing::Point(376, 437);
			this->label_dinner_cal->Name = L"label_dinner_cal";
			this->label_dinner_cal->Size = System::Drawing::Size(104, 25);
			this->label_dinner_cal->TabIndex = 10;
			this->label_dinner_cal->Text = L"0 калорий";
			// 
			// Dinner_tabl
			// 
			this->Dinner_tabl->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Dinner_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dinner_tabl->Location = System::Drawing::Point(37, 485);
			this->Dinner_tabl->Name = L"Dinner_tabl";
			this->Dinner_tabl->ReadOnly = true;
			this->Dinner_tabl->RowHeadersWidth = 51;
			this->Dinner_tabl->RowTemplate->Height = 24;
			this->Dinner_tabl->Size = System::Drawing::Size(517, 112);
			this->Dinner_tabl->TabIndex = 9;
			// 
			// textBox_dinner
			// 
			this->textBox_dinner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_dinner->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_dinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_dinner->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_dinner->Location = System::Drawing::Point(37, 432);
			this->textBox_dinner->Name = L"textBox_dinner";
			this->textBox_dinner->ReadOnly = true;
			this->textBox_dinner->Size = System::Drawing::Size(65, 30);
			this->textBox_dinner->TabIndex = 8;
			this->textBox_dinner->Text = L"Ужин";
			this->textBox_dinner->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_JF
			// 
			this->label_JF->AutoSize = true;
			this->label_JF->ForeColor = System::Drawing::Color::Black;
			this->label_JF->Location = System::Drawing::Point(260, 815);
			this->label_JF->Name = L"label_JF";
			this->label_JF->Size = System::Drawing::Size(107, 16);
			this->label_JF->TabIndex = 16;
			this->label_JF->Text = L"Просто пониже";
			// 
			// button_breakfast
			// 
			this->button_breakfast->Location = System::Drawing::Point(219, 45);
			this->button_breakfast->Name = L"button_breakfast";
			this->button_breakfast->Size = System::Drawing::Size(75, 23);
			this->button_breakfast->TabIndex = 17;
			this->button_breakfast->Text = L"Breakfast";
			this->button_breakfast->UseVisualStyleBackColor = true;
			this->button_breakfast->Click += gcnew EventHandler(this, &Diary::OnMealButtonClick);
			// 
			// button_Lunch
			// 
			this->button_Lunch->Location = System::Drawing::Point(219, 236);
			this->button_Lunch->Name = L"button_Lunch";
			this->button_Lunch->Size = System::Drawing::Size(75, 23);
			this->button_Lunch->TabIndex = 18;
			this->button_Lunch->Text = L"Lunch";
			this->button_Lunch->UseVisualStyleBackColor = true;
			this->button_Lunch->Click += gcnew EventHandler(this, &Diary::OnMealButtonClick);
			// 
			// Diary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(633, 504);
			this->Controls->Add(this->button_Lunch);
			this->Controls->Add(this->button_breakfast);
			this->Controls->Add(this->label_JF);
			this->Controls->Add(this->label_snack_add);
			this->Controls->Add(this->label_snack_cal);
			this->Controls->Add(this->Snack_tabl);
			this->Controls->Add(this->textBox_snack);
			this->Controls->Add(this->label_dinner_add);
			this->Controls->Add(this->label_dinner_cal);
			this->Controls->Add(this->Dinner_tabl);
			this->Controls->Add(this->textBox_dinner);
			this->Controls->Add(this->label_lunch_add);
			this->Controls->Add(this->label_lunch_cal);
			this->Controls->Add(this->Lunch_tabl);
			this->Controls->Add(this->textBox_lunch);
			this->Controls->Add(this->label_breakfast_add);
			this->Controls->Add(this->label_breakfast_cal);
			this->Controls->Add(this->Breakfast_tabl);
			this->Controls->Add(this->textBox_breakfast);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->Name = L"Diary";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Дневник питания";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Diary::Diary_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Breakfast_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lunch_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Snack_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dinner_tabl))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void OnMealButtonClick(Object^ sender, EventArgs^ e) {
			FindIng^ findIngForm = gcnew FindIng();
			findIngForm->ShowDialog();

			if (findIngForm->IsFind) {
				// Получение данных из формы FindIng
				String^ ingredient = findIngForm->GetIngredientName;
				double weight = findIngForm->GetIngredientWeight;
				double calories = findIngForm->GetIngredientCalories;

				// Запись данных в DataGridView
				this->Breakfast_tabl->Rows->Add(ingredient, weight, calories);

				// Сохранение в файл
				SaveIngredientToFile(ingredient, weight, calories);
			}
			else {
				MessageBox::Show("Вы не завершили ввод данных.");
			}
		}

		void SaveIngredientToFile(String^ ingredient, double weight, double calories) {
			StreamWriter^ sw = gcnew StreamWriter("diary.txt", true);
			sw->WriteLine("{0};{1};{2}", ingredient, weight, calories);
			sw->Close();
		}

	private: System::Void Diary_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Owner->Show();
	}
	private: System::Void label_breakfast_add_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ meal = "Breakfast"; // Example: Pass meal type
		FindIng^ findForm = gcnew FindIng();
		findForm->ShowDialog();
	}
};
}
