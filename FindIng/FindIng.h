#pragma once
#include "Windows.h"
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для FindIng
	/// </summary>
	public ref class FindIng : public System::Windows::Forms::Form
	{
	public:
		FindIng(void)
		{
			InitializeComponent();
			this->find = false;
			//
			//TODO: добавьте код конструктора
			//
		}
	public:
		property String^ GetIngredientName {
			String^ get() { return this->ingredientName; }
		}

		property double GetIngredientWeight {
			double get() { return this->weight; }
		}

		property double GetIngredientCalories {
			double get() { return this->calories; }
		}

		property bool IsFind {
			bool get() { return this->find; }
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FindIng()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox_Search;
	protected:
	private: System::Windows::Forms::Button^ button_search;
	private: System::Windows::Forms::Button^ button_add;

	private: System::Windows::Forms::Label^ label_res;

	private:
		String^ ingredientName;
		double weight;
		double calories;
		bool find;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_OK;

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
			this->textBox_Search = (gcnew System::Windows::Forms::TextBox());
			this->button_search = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->label_res = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_Search
			// 
			this->textBox_Search->BackColor = System::Drawing::Color::DimGray;
			this->textBox_Search->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_Search->Location = System::Drawing::Point(37, 40);
			this->textBox_Search->Name = L"textBox_Search";
			this->textBox_Search->Size = System::Drawing::Size(400, 27);
			this->textBox_Search->TabIndex = 0;
			// 
			// button_search
			// 
			this->button_search->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_search->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_search->Location = System::Drawing::Point(473, 32);
			this->button_search->Name = L"button_search";
			this->button_search->Size = System::Drawing::Size(88, 40);
			this->button_search->TabIndex = 1;
			this->button_search->Text = L"Найти";
			this->button_search->UseVisualStyleBackColor = false;
			this->button_search->Click += gcnew System::EventHandler(this, &FindIng::button_search_Click);
			// 
			// button_add
			// 
			this->button_add->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(229, 293);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(125, 41);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = false;
			this->button_add->Click += gcnew System::EventHandler(this, &FindIng::button_add_Click);
			// 
			// label_res
			// 
			this->label_res->AutoSize = true;
			this->label_res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_res->Location = System::Drawing::Point(33, 133);
			this->label_res->Name = L"label_res";
			this->label_res->Size = System::Drawing::Size(0, 20);
			this->label_res->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(461, 210);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(288, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// button_OK
			// 
			this->button_OK->Location = System::Drawing::Point(432, 293);
			this->button_OK->Name = L"button_OK";
			this->button_OK->Size = System::Drawing::Size(75, 23);
			this->button_OK->TabIndex = 6;
			this->button_OK->Text = L"OK";
			this->button_OK->UseVisualStyleBackColor = true;
			this->button_OK->Click += gcnew System::EventHandler(this, &FindIng::button_OK_Click);
			// 
			// FindIng
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(595, 346);
			this->Controls->Add(this->button_OK);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_res);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_search);
			this->Controls->Add(this->textBox_Search);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->Name = L"FindIng";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Найти ингредиент";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FindIng::FindIng_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_search_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream file("ingredients.txt");
		if (!file.is_open()) {
			this->label_res->Text = "Ошибка: файл не найден.";
			return;
		}

		std::string line, ingredientName;
		ingredientName = msclr::interop::marshal_as<std::string>(this->textBox_Search->Text);

		bool found = false;
		while (std::getline(file, line)) {		if (line.find(ingredientName) != std::string::npos) {
				this->label_res->Text = gcnew String(line.c_str());
				found = true;
				break;
			}
		}

		if (!found) {
			this->label_res->Text = "Ингредиент не найден.";
		}

		file.close();
	}

	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ingredientName = this->textBox_Search->Text;
		this->weight = Convert::ToDouble(this->textBox1->Text);

		// Чтение данных из файла
		StreamReader^ sr = gcnew StreamReader("ingredients.txt");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			array<String^>^ parts = line->Split(';');
			if (parts[0]->Equals(this->ingredientName, StringComparison::OrdinalIgnoreCase)) {
				double kcalPer100g = Convert::ToDouble(parts[1]);
				this->calories = (this->weight / 100.0) * kcalPer100g;
				this->label1->Text = "Calories: " + this->calories;
				break;
			}
		}
		sr->Close();
		this->find = true;
	}
	private: System::Void FindIng_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->find) { // Проверка корректности флага
			// Логика закрытия формы
		}
		else {
			MessageBox::Show("Данные не завершены. Закрытие отменено.");
			e->Cancel = true; // Отменить закрытие формы
		}
	}
private: System::Void button_OK_Click(System::Object^ sender, System::EventArgs^ e) {
	 if (this->find) {
        this->Close(); // Закрыть форму только если find == true
    } else {
        MessageBox::Show("Пожалуйста, выполните расчёт перед закрытием!");
    }
}
};
}
