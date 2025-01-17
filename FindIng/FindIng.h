#pragma once
#include "Windows.h"
#include "UserData.h"

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для FindIng
	/// </summary>
	public ref class FindIng : public System::Windows::Forms::Form
	{
	private:
		System::String^ mealType; // Тип приёма пищи
	private: System::Windows::Forms::ListBox^ listBox2;
		   UserData^ userData;
	public:
		FindIng(System::String^ mealType, UserData^ data)
		{
			InitializeComponent();
			this->mealType = mealType; // Сохранение типа приёма пищи
			this->userData = data;  // Используем переданный объект данных
			//
			//TODO: добавьте код конструктора
			//
		}
	public:

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

	protected:

	private:

	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Button^ button_find;
	private: System::Windows::Forms::Label^ label_cal;
	private: System::Windows::Forms::TextBox^ textBox_cal;
	private: System::Windows::Forms::Label^ label_proteins;
	private: System::Windows::Forms::TextBox^ textBox_proteins;


	private: System::Windows::Forms::Label^ label_fats;
	private: System::Windows::Forms::TextBox^ textBox_fats;
	private: System::Windows::Forms::Label^ label_cals;
	private: System::Windows::Forms::TextBox^ textBox_carbs;

	private: System::Windows::Forms::Label^ label_fiber;
	private: System::Windows::Forms::TextBox^ textBox_fibers;


	private: System::Windows::Forms::Button^ button_redact;
	private: System::Windows::Forms::Button^ button_math;
	private: System::Windows::Forms::Label^ label_weight;
	private: System::Windows::Forms::TextBox^ textBox_weight;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::TextBox^ textBox_cal_calcul;
	private: System::Windows::Forms::TextBox^ textBox_proteins_calcul;
	private: System::Windows::Forms::TextBox^ textBox_fats_calcul;
	private: System::Windows::Forms::TextBox^ textBox_carbs_calcul;
	private: System::Windows::Forms::TextBox^ textBox_fibers_calcul;
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_find_recipe;
	private: System::Windows::Forms::TextBox^ textBox_recipe;
	private: System::Windows::Forms::Label^ label_recipe;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button_add_recipe;
	private: bool rec = false;


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
			   this->label_name = (gcnew System::Windows::Forms::Label());
			   this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			   this->button_find = (gcnew System::Windows::Forms::Button());
			   this->label_cal = (gcnew System::Windows::Forms::Label());
			   this->textBox_cal = (gcnew System::Windows::Forms::TextBox());
			   this->label_proteins = (gcnew System::Windows::Forms::Label());
			   this->textBox_proteins = (gcnew System::Windows::Forms::TextBox());
			   this->label_fats = (gcnew System::Windows::Forms::Label());
			   this->textBox_fats = (gcnew System::Windows::Forms::TextBox());
			   this->label_cals = (gcnew System::Windows::Forms::Label());
			   this->textBox_carbs = (gcnew System::Windows::Forms::TextBox());
			   this->label_fiber = (gcnew System::Windows::Forms::Label());
			   this->textBox_fibers = (gcnew System::Windows::Forms::TextBox());
			   this->button_redact = (gcnew System::Windows::Forms::Button());
			   this->button_math = (gcnew System::Windows::Forms::Button());
			   this->label_weight = (gcnew System::Windows::Forms::Label());
			   this->textBox_weight = (gcnew System::Windows::Forms::TextBox());
			   this->button_add = (gcnew System::Windows::Forms::Button());
			   this->textBox_cal_calcul = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_proteins_calcul = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_fats_calcul = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_carbs_calcul = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_fibers_calcul = (gcnew System::Windows::Forms::TextBox());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->button_find_recipe = (gcnew System::Windows::Forms::Button());
			   this->textBox_recipe = (gcnew System::Windows::Forms::TextBox());
			   this->label_recipe = (gcnew System::Windows::Forms::Label());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->button_add_recipe = (gcnew System::Windows::Forms::Button());
			   this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			   this->panel1->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // label_name
			   // 
			   this->label_name->AutoSize = true;
			   this->label_name->Location = System::Drawing::Point(27, 28);
			   this->label_name->Name = L"label_name";
			   this->label_name->Size = System::Drawing::Size(127, 13);
			   this->label_name->TabIndex = 1;
			   this->label_name->Text = L"Название ингредиента:";
			   // 
			   // textBox_name
			   // 
			   this->textBox_name->Location = System::Drawing::Point(202, 25);
			   this->textBox_name->Name = L"textBox_name";
			   this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->textBox_name->Size = System::Drawing::Size(180, 20);
			   this->textBox_name->TabIndex = 2;
			   // 
			   // button_find
			   // 
			   this->button_find->Location = System::Drawing::Point(473, 19);
			   this->button_find->Name = L"button_find";
			   this->button_find->Size = System::Drawing::Size(137, 31);
			   this->button_find->TabIndex = 3;
			   this->button_find->Text = L"Найти";
			   this->button_find->UseVisualStyleBackColor = true;
			   this->button_find->Click += gcnew System::EventHandler(this, &FindIng::button_find_Click);
			   // 
			   // label_cal
			   // 
			   this->label_cal->AutoSize = true;
			   this->label_cal->Location = System::Drawing::Point(27, 188);
			   this->label_cal->Name = L"label_cal";
			   this->label_cal->Size = System::Drawing::Size(82, 13);
			   this->label_cal->TabIndex = 4;
			   this->label_cal->Text = L"Калорийность:";
			   // 
			   // textBox_cal
			   // 
			   this->textBox_cal->Location = System::Drawing::Point(202, 185);
			   this->textBox_cal->Name = L"textBox_cal";
			   this->textBox_cal->Size = System::Drawing::Size(75, 20);
			   this->textBox_cal->TabIndex = 5;
			   // 
			   // label_proteins
			   // 
			   this->label_proteins->AutoSize = true;
			   this->label_proteins->Location = System::Drawing::Point(27, 255);
			   this->label_proteins->Name = L"label_proteins";
			   this->label_proteins->Size = System::Drawing::Size(41, 13);
			   this->label_proteins->TabIndex = 6;
			   this->label_proteins->Text = L"Белки:";
			   // 
			   // textBox_proteins
			   // 
			   this->textBox_proteins->Location = System::Drawing::Point(202, 252);
			   this->textBox_proteins->Name = L"textBox_proteins";
			   this->textBox_proteins->Size = System::Drawing::Size(75, 20);
			   this->textBox_proteins->TabIndex = 7;
			   // 
			   // label_fats
			   // 
			   this->label_fats->AutoSize = true;
			   this->label_fats->Location = System::Drawing::Point(27, 324);
			   this->label_fats->Name = L"label_fats";
			   this->label_fats->Size = System::Drawing::Size(41, 13);
			   this->label_fats->TabIndex = 8;
			   this->label_fats->Text = L"Жиры:";
			   // 
			   // textBox_fats
			   // 
			   this->textBox_fats->Location = System::Drawing::Point(202, 321);
			   this->textBox_fats->Name = L"textBox_fats";
			   this->textBox_fats->Size = System::Drawing::Size(75, 20);
			   this->textBox_fats->TabIndex = 9;
			   // 
			   // label_cals
			   // 
			   this->label_cals->AutoSize = true;
			   this->label_cals->Location = System::Drawing::Point(27, 397);
			   this->label_cals->Name = L"label_cals";
			   this->label_cals->Size = System::Drawing::Size(61, 13);
			   this->label_cals->TabIndex = 10;
			   this->label_cals->Text = L"Углеводы:";
			   // 
			   // textBox_carbs
			   // 
			   this->textBox_carbs->Location = System::Drawing::Point(202, 394);
			   this->textBox_carbs->Name = L"textBox_carbs";
			   this->textBox_carbs->Size = System::Drawing::Size(75, 20);
			   this->textBox_carbs->TabIndex = 11;
			   // 
			   // label_fiber
			   // 
			   this->label_fiber->AutoSize = true;
			   this->label_fiber->Location = System::Drawing::Point(27, 466);
			   this->label_fiber->Name = L"label_fiber";
			   this->label_fiber->Size = System::Drawing::Size(104, 13);
			   this->label_fiber->TabIndex = 12;
			   this->label_fiber->Text = L"Пищевые волокна:";
			   // 
			   // textBox_fibers
			   // 
			   this->textBox_fibers->Location = System::Drawing::Point(202, 463);
			   this->textBox_fibers->Name = L"textBox_fibers";
			   this->textBox_fibers->Size = System::Drawing::Size(75, 20);
			   this->textBox_fibers->TabIndex = 13;
			   // 
			   // button_redact
			   // 
			   this->button_redact->Location = System::Drawing::Point(473, 87);
			   this->button_redact->Name = L"button_redact";
			   this->button_redact->Size = System::Drawing::Size(137, 40);
			   this->button_redact->TabIndex = 14;
			   this->button_redact->Text = L"Редактировать";
			   this->button_redact->UseVisualStyleBackColor = true;
			   this->button_redact->Click += gcnew System::EventHandler(this, &FindIng::button_redact_Click);
			   // 
			   // button_math
			   // 
			   this->button_math->Location = System::Drawing::Point(30, 123);
			   this->button_math->Name = L"button_math";
			   this->button_math->Size = System::Drawing::Size(137, 40);
			   this->button_math->TabIndex = 15;
			   this->button_math->Text = L"Рассчитать";
			   this->button_math->UseVisualStyleBackColor = true;
			   this->button_math->Click += gcnew System::EventHandler(this, &FindIng::button_math_Click);
			   // 
			   // label_weight
			   // 
			   this->label_weight->AutoSize = true;
			   this->label_weight->Location = System::Drawing::Point(84, 62);
			   this->label_weight->Name = L"label_weight";
			   this->label_weight->Size = System::Drawing::Size(29, 13);
			   this->label_weight->TabIndex = 16;
			   this->label_weight->Text = L"Вес:";
			   // 
			   // textBox_weight
			   // 
			   this->textBox_weight->Location = System::Drawing::Point(30, 87);
			   this->textBox_weight->Name = L"textBox_weight";
			   this->textBox_weight->Size = System::Drawing::Size(137, 20);
			   this->textBox_weight->TabIndex = 17;
			   // 
			   // button_add
			   // 
			   this->button_add->Location = System::Drawing::Point(473, 185);
			   this->button_add->Name = L"button_add";
			   this->button_add->Size = System::Drawing::Size(137, 40);
			   this->button_add->TabIndex = 18;
			   this->button_add->Text = L"Добавить";
			   this->button_add->UseVisualStyleBackColor = true;
			   this->button_add->Click += gcnew System::EventHandler(this, &FindIng::button_add_Click);
			   // 
			   // textBox_cal_calcul
			   // 
			   this->textBox_cal_calcul->Location = System::Drawing::Point(0, 0);
			   this->textBox_cal_calcul->Name = L"textBox_cal_calcul";
			   this->textBox_cal_calcul->ReadOnly = true;
			   this->textBox_cal_calcul->Size = System::Drawing::Size(75, 20);
			   this->textBox_cal_calcul->TabIndex = 19;
			   // 
			   // textBox_proteins_calcul
			   // 
			   this->textBox_proteins_calcul->Location = System::Drawing::Point(0, 67);
			   this->textBox_proteins_calcul->Name = L"textBox_proteins_calcul";
			   this->textBox_proteins_calcul->ReadOnly = true;
			   this->textBox_proteins_calcul->Size = System::Drawing::Size(75, 20);
			   this->textBox_proteins_calcul->TabIndex = 20;
			   // 
			   // textBox_fats_calcul
			   // 
			   this->textBox_fats_calcul->Location = System::Drawing::Point(0, 136);
			   this->textBox_fats_calcul->Name = L"textBox_fats_calcul";
			   this->textBox_fats_calcul->ReadOnly = true;
			   this->textBox_fats_calcul->Size = System::Drawing::Size(75, 20);
			   this->textBox_fats_calcul->TabIndex = 21;
			   // 
			   // textBox_carbs_calcul
			   // 
			   this->textBox_carbs_calcul->Location = System::Drawing::Point(0, 209);
			   this->textBox_carbs_calcul->Name = L"textBox_carbs_calcul";
			   this->textBox_carbs_calcul->ReadOnly = true;
			   this->textBox_carbs_calcul->Size = System::Drawing::Size(75, 20);
			   this->textBox_carbs_calcul->TabIndex = 22;
			   // 
			   // textBox_fibers_calcul
			   // 
			   this->textBox_fibers_calcul->Location = System::Drawing::Point(0, 278);
			   this->textBox_fibers_calcul->Name = L"textBox_fibers_calcul";
			   this->textBox_fibers_calcul->ReadOnly = true;
			   this->textBox_fibers_calcul->Size = System::Drawing::Size(75, 20);
			   this->textBox_fibers_calcul->TabIndex = 23;
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->textBox_fibers_calcul);
			   this->panel1->Controls->Add(this->textBox_cal_calcul);
			   this->panel1->Controls->Add(this->textBox_carbs_calcul);
			   this->panel1->Controls->Add(this->textBox_proteins_calcul);
			   this->panel1->Controls->Add(this->textBox_fats_calcul);
			   this->panel1->Location = System::Drawing::Point(307, 185);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(75, 298);
			   this->panel1->TabIndex = 24;
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->button_find_recipe);
			   this->panel2->Controls->Add(this->textBox_recipe);
			   this->panel2->Controls->Add(this->label_recipe);
			   this->panel2->Location = System::Drawing::Point(30, 521);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(592, 45);
			   this->panel2->TabIndex = 25;
			   // 
			   // button_find_recipe
			   // 
			   this->button_find_recipe->Location = System::Drawing::Point(443, 5);
			   this->button_find_recipe->Name = L"button_find_recipe";
			   this->button_find_recipe->Size = System::Drawing::Size(137, 31);
			   this->button_find_recipe->TabIndex = 26;
			   this->button_find_recipe->Text = L"Найти рецепт";
			   this->button_find_recipe->UseVisualStyleBackColor = true;
			   this->button_find_recipe->Click += gcnew System::EventHandler(this, &FindIng::button_find_recipe_Click);
			   // 
			   // textBox_recipe
			   // 
			   this->textBox_recipe->Location = System::Drawing::Point(172, 11);
			   this->textBox_recipe->Name = L"textBox_recipe";
			   this->textBox_recipe->Size = System::Drawing::Size(180, 20);
			   this->textBox_recipe->TabIndex = 1;
			   // 
			   // label_recipe
			   // 
			   this->label_recipe->AutoSize = true;
			   this->label_recipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label_recipe->Location = System::Drawing::Point(-3, 12);
			   this->label_recipe->Name = L"label_recipe";
			   this->label_recipe->Size = System::Drawing::Size(134, 16);
			   this->label_recipe->TabIndex = 0;
			   this->label_recipe->Text = L"Название рецепта:";
			   // 
			   // listBox1
			   // 
			   this->listBox1->BackColor = System::Drawing::SystemColors::Control;
			   this->listBox1->FormattingEnabled = true;
			   this->listBox1->Location = System::Drawing::Point(202, 71);
			   this->listBox1->Name = L"listBox1";
			   this->listBox1->Size = System::Drawing::Size(180, 82);
			   this->listBox1->TabIndex = 26;
			   // 
			   // button_add_recipe
			   // 
			   this->button_add_recipe->Location = System::Drawing::Point(473, 185);
			   this->button_add_recipe->Name = L"button_add_recipe";
			   this->button_add_recipe->Size = System::Drawing::Size(137, 40);
			   this->button_add_recipe->TabIndex = 27;
			   this->button_add_recipe->Text = L"Добавить";
			   this->button_add_recipe->UseVisualStyleBackColor = true;
			   this->button_add_recipe->Click += gcnew System::EventHandler(this, &FindIng::button_add_recipe_Click);
			   // 
			   // listBox2
			   // 
			   this->listBox2->BackColor = System::Drawing::SystemColors::Control;
			   this->listBox2->FormattingEnabled = true;
			   this->listBox2->Location = System::Drawing::Point(473, 259);
			   this->listBox2->Name = L"listBox2";
			   this->listBox2->Size = System::Drawing::Size(137, 225);
			   this->listBox2->TabIndex = 28;
			   this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &FindIng::listBox2_SelectedIndexChanged);
			   // 
			   // FindIng
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::Black;
			   this->ClientSize = System::Drawing::Size(647, 590);
			   this->Controls->Add(this->listBox2);
			   this->Controls->Add(this->button_add_recipe);
			   this->Controls->Add(this->listBox1);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->button_add);
			   this->Controls->Add(this->textBox_weight);
			   this->Controls->Add(this->label_weight);
			   this->Controls->Add(this->button_math);
			   this->Controls->Add(this->button_redact);
			   this->Controls->Add(this->textBox_fibers);
			   this->Controls->Add(this->label_fiber);
			   this->Controls->Add(this->textBox_carbs);
			   this->Controls->Add(this->label_cals);
			   this->Controls->Add(this->textBox_fats);
			   this->Controls->Add(this->label_fats);
			   this->Controls->Add(this->textBox_proteins);
			   this->Controls->Add(this->label_proteins);
			   this->Controls->Add(this->textBox_cal);
			   this->Controls->Add(this->label_cal);
			   this->Controls->Add(this->button_find);
			   this->Controls->Add(this->textBox_name);
			   this->Controls->Add(this->label_name);
			   this->Controls->Add(this->panel1);
			   this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->Name = L"FindIng";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Найти ингредиент";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FindIng::FindIng_FormClosed);
			   this->Load += gcnew System::EventHandler(this, &FindIng::FindIng_Load);
			   this->MouseEnter += gcnew System::EventHandler(this, &FindIng::FindIng_MouseEnter);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void FindIng_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Owner->Show();
	}

	private: System::Void FindIng_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Visible = false;
		this->button_add_recipe->Visible = false;
		this->button_add->Visible = false;
		this->button_redact->Visible = false;
		this->listBox1->Visible = false;
		this->listBox2->Visible = true;

		try {
			array<String^>^ lines = File::ReadAllLines("recipes.txt");
			listBox2->Items->Clear(); // Очистить ListBox2 перед добавлением новых элементов
			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length > 0) {
					listBox2->Items->Add(parts[0]); // Добавление названия рецепта в ListBox2
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка чтения файла рецептов: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	// Функция для создания пути к файлам пользователя
	String^ getUserFilePath(String^ userName, String^ fileName) {
		// Создаём путь к директории пользователя
		String^ userDirectory = Path::Combine("users", userName);

		// Возвращаем полный путь к файлу (а не к папке)
		return Path::Combine(userDirectory, fileName); // Возвращаем путь к файлу, а не к папке
	}

	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем данные из текстовых полей
		String^ ingredientName = textBox_name->Text;
		String^ calories = textBox_cal_calcul->Text;
		String^ proteins = textBox_proteins_calcul->Text;
		String^ fats = textBox_fats_calcul->Text;
		String^ carbs = textBox_carbs_calcul->Text;
		String^ fiber = textBox_fibers_calcul->Text;

		// Проверка на заполненность названия
		if (String::IsNullOrWhiteSpace(ingredientName)) {
			MessageBox::Show("Введите название ингредиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Проверка корректности данных
		if (!ValidateInputsCalCul()) {
			return;
		}

		try {
			// Получаем имя пользователя из класса UserName
			String^ userName = userData->UserName;
			String^ mealFile = mealType + ".txt";
			// Составляем путь к файлу относительно папки проекта
			String^ filePath = "users\\" + userName + "\\" + mealType + ".txt";

			// Чтение всех строк файла и игнорирование первой строки (дата)
			array<String^>^ lines = File::ReadAllLines(filePath);
			String^ content = "";

			// Пропуск первой строки с датой
			for (int i = 1; i < lines->Length; i++) {
				content += lines[i] + Environment::NewLine;
			}

			// Формируем новую строку для добавления
			String^ newIngredient = String::Format("{0};{1};{2};{3};{4};{5}",
				ingredientName, calories, proteins, fats, carbs, fiber);

			// Добавляем новую строку в конец содержимого
			content += newIngredient + Environment::NewLine;

			// Перезапись файла с сохранением первой строки (даты)
			StreamWriter^ writer = gcnew StreamWriter(filePath);
			writer->WriteLine(lines[0]); // Запись первой строки с датой
			writer->Write(content);      // Запись обновленного содержимого
			writer->Close();

			MessageBox::Show("Ингредиент успешно добавлен.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Очистка текстовых полей
			ClearTextBoxes();
			this->panel1->Visible = false;
			if (!rec) { this->panel2->Visible = true; }
			this->button_add->Visible = false;
			this->button_add_recipe->Visible = false;
			this->textBox_name->Enabled = true;
			this->textBox_cal->Enabled = true;
			this->textBox_proteins->Enabled = true;
			this->textBox_fats->Enabled = true;
			this->textBox_carbs->Enabled = true;
			this->textBox_fibers->Enabled = true;
			if (!rec) { this->listBox2->Visible = true; }

		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка записи файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: void ClearTextBoxes() {
		// Очистка всех текстовых полей
		textBox_name->Clear();
		textBox_weight->Clear();
		textBox_cal->Clear();
		textBox_proteins->Clear();
		textBox_fats->Clear();
		textBox_carbs->Clear();
		textBox_fibers->Clear();
		textBox_cal_calcul->Clear();
		textBox_proteins_calcul->Clear();
		textBox_fats_calcul->Clear();
		textBox_carbs_calcul->Clear();
		textBox_fibers_calcul->Clear();
		textBox_recipe->Clear();
	}

	private: bool ValidateInputs() {
		// Проверки на ввод значений
		array<TextBox^>^ fields = { textBox_cal, textBox_proteins, textBox_fats, textBox_carbs, textBox_fibers };
		for each (TextBox ^ field in fields) {
			if (String::IsNullOrWhiteSpace(field->Text) || !IsNumber(field->Text)) {
				MessageBox::Show("Убедитесь, что все поля заполнены корректно.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}
		return true;
	}

		   //Под calcul
	private: bool ValidateInputsCalCul() {
		// Проверки на ввод значений
		array<TextBox^>^ fields = { textBox_cal_calcul, textBox_proteins_calcul, textBox_fats_calcul, textBox_carbs_calcul, textBox_fibers_calcul};
		for each (TextBox ^ field in fields) {
			if (String::IsNullOrWhiteSpace(field->Text) || !IsNumber(field->Text)) {
				MessageBox::Show("Убедитесь, что все поля заполнены корректно.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}
		}
		return true;
	}

	private: bool IsNumber(String^ text) {
		// Заменяем запятую на точку
		text = text->Replace(".", ",");
		double result;
		return Double::TryParse(text, result) && result >= 0;
	}

	private: System::Void button_find_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ingredientName = textBox_name->Text;

		if (String::IsNullOrWhiteSpace(ingredientName)) {
			MessageBox::Show("Введите название ингредиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Чтение файла
		try {
			array<String^>^ lines = File::ReadAllLines("ingredients.txt");
			bool found = false;

			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 6 && parts[0]->Equals(ingredientName, StringComparison::OrdinalIgnoreCase)) {
					// Заполнение полей для редактирования
					textBox_cal->Text = parts[1];
					textBox_proteins->Text = parts[2];
					textBox_fats->Text = parts[3];
					textBox_carbs->Text = parts[4];
					textBox_fibers->Text = parts[5];
					found = true;
					break;
				}
			}

			if (!found) {
				MessageBox::Show("Ингредиент не найден.\n\nОчень сожалеем, что в нашей базе данных не нашлось вашего ингредиента.\n\nЕсли возможно, то введите значения самостоятельно.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->button_redact->Visible = false;
			}
			else {
				this->button_redact->Visible = true;
				this->button_add_recipe->Visible = false;
				this->textBox_name->Enabled = false;
				this->textBox_cal->Enabled = false;
				this->textBox_proteins->Enabled = false;
				this->textBox_fats->Enabled = false;
				this->textBox_carbs->Enabled = false;
				this->textBox_fibers->Enabled = false;
				this->panel2->Visible = false;
				this->listBox2->Visible = false;
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка чтения файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button_math_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Чтение введённого веса
			double weight = Convert::ToDouble(textBox_weight->Text);

			// Проверка на валидность введённого веса
			if (weight <= 0) {
				MessageBox::Show("Пожалуйста, введите корректный вес.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Проверка новых значений
			if (!ValidateInputs()) {
				return;
			}

			// Получение данных из полей для 100 г
			double caloriesPer100g = Convert::ToDouble(textBox_cal->Text);
			double proteinsPer100g = Convert::ToDouble(textBox_proteins->Text);
			double fatsPer100g = Convert::ToDouble(textBox_fats->Text);
			double carbsPer100g = Convert::ToDouble(textBox_carbs->Text);
			double fibersPer100g = Convert::ToDouble(textBox_fibers->Text);

			// Вычисление значений для введённого веса
			double caloriesResult = (caloriesPer100g * weight) / 100;
			double proteinsResult = (proteinsPer100g * weight) / 100;
			double fatsResult = (fatsPer100g * weight) / 100;
			double carbsResult = (carbsPer100g * weight) / 100;
			double fibersResult = (fibersPer100g * weight) / 100;

			// Заполнение новых полей с результатами
			textBox_cal_calcul->Text = caloriesResult.ToString();
			textBox_proteins_calcul->Text = proteinsResult.ToString();
			textBox_fats_calcul->Text = fatsResult.ToString();
			textBox_carbs_calcul->Text = carbsResult.ToString();
			textBox_fibers_calcul->Text = fibersResult.ToString();

			this->panel1->Visible = true;
			this->textBox_name->Enabled = false;
			this->textBox_cal->Enabled = false;
			this->textBox_cal_calcul->Enabled = false;
			this->textBox_proteins->Enabled = false;
			this->textBox_proteins_calcul->Enabled = false;
			this->textBox_fats->Enabled = false;
			this->textBox_fats_calcul->Enabled = false;
			this->textBox_carbs->Enabled = false;
			this->textBox_carbs_calcul->Enabled = false;
			this->textBox_fibers->Enabled = false;
			this->textBox_fibers_calcul->Enabled = false;
			this->button_redact->Visible = false;
			this->button_add->Visible = true;
			this->panel2->Visible = false;
			this->listBox2->Visible = false;
			if (rec) { this->button_add_recipe->Visible = true; }
		}
		catch (FormatException^ ex) {
			MessageBox::Show("Ошибка ввода. Убедитесь, что все поля содержат корректные числовые значения.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button_redact_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_cal->Enabled = true;
		this->textBox_proteins->Enabled = true;
		this->textBox_fats->Enabled = true;
		this->textBox_carbs->Enabled = true;
		this->textBox_fibers->Enabled = true;
	}

	private: System::Void button_find_recipe_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ recipeName = textBox_recipe->Text;
		ClearTextBoxes();

		if (String::IsNullOrWhiteSpace(recipeName)) {
			MessageBox::Show("Введите название рецепта.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			array<String^>^ lines = File::ReadAllLines("recipes.txt");
			bool found = false;
			List<String^>^ ingredientList = gcnew List<String^>();

			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts[0]->Equals(recipeName, StringComparison::OrdinalIgnoreCase)) {
					found = true;
					MessageBox::Show("Рецепт найден. Количество ингредиентов: " + (parts->Length - 1).ToString(), "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
					for (int i = 1; i < parts->Length; i++) {
						ingredientList->Add(parts[i]);
					}
					break;
				}
			}

			if (!found) {
				MessageBox::Show("Рецепт не найден.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else {
				listBox1->Items->Clear();
				for each (String ^ ingredient in ingredientList) {
					listBox1->Items->Add(ingredient);
				}
				if (listBox1->Items->Count > 0) {
					textBox_name->Text = listBox1->Items[0]->ToString();
					listBox1->Items->RemoveAt(0);
				}
				rec = true;
				this->panel2->Visible = false;
				this->button_add->Visible = false;
				this->listBox1->Visible = true;
				this->listBox2->Visible = false;
				button_find_Click(sender, e);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка чтения файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button_add_recipe_Click(System::Object^ sender, System::EventArgs^ e) {
		button_add_Click(sender, e);

		if (listBox1->Items->Count > 0) {
			textBox_name->Text = listBox1->Items[0]->ToString();
			listBox1->Items->RemoveAt(0);
		}
		else {
			MessageBox::Show("Все ингредиенты добавлены.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			listBox1->Visible = false;
			textBox_name->Enabled = true;
			this->listBox1->Visible = false;
			this->button_add_recipe->Visible = false;
			this->panel2->Visible = true;
			rec = 0;
			this->listBox2->Visible = true;
		}
	}

	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что выбранный элемент не пустой
		if (listBox2->SelectedItem != nullptr) {
			// Установка выбранного рецепта в TextBox_rec_name
			textBox_recipe->Text = listBox2->SelectedItem->ToString();
		}
	}

	private: System::Void FindIng_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		try {
			array<String^>^ lines = File::ReadAllLines("recipes.txt");
			listBox2->Items->Clear(); // Очистить ListBox2 перед добавлением новых элементов
			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length > 0) {
					listBox2->Items->Add(parts[0]); // Добавление названия рецепта в ListBox2
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка чтения файла рецептов: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
