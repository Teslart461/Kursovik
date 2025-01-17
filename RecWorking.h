#pragma once

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
	/// Сводка для RecWorking
	/// </summary>
	public ref class RecWorking : public System::Windows::Forms::Form
	{
	private: 
		String^ recipesFile = "recipes.txt";
	private: System::Windows::Forms::Button^ button_find;
	private: System::Windows::Forms::Button^ button_redact_ing;
	private: System::Windows::Forms::Button^ button_delete_ing;
	private: System::Windows::Forms::Button^ button_delete_recipe;
	private: System::Windows::Forms::ListBox^ listBox2;
		   Dictionary<String^, List<String^>^>^ recipes;
	public:
		RecWorking(void)
		{
			InitializeComponent();
			recipes = gcnew Dictionary<String^, List<String^>^>();
			LoadRecipes();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RecWorking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_name;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::ListBox^ listBox;
	private: System::Windows::Forms::Label^ label_ing;
	private: System::Windows::Forms::TextBox^ textBox_ing;

	private: System::Windows::Forms::Button^ button_add_ing;
	private: System::Windows::Forms::Button^ button_save;
	private: bool find = false;

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
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->label_ing = (gcnew System::Windows::Forms::Label());
			this->textBox_ing = (gcnew System::Windows::Forms::TextBox());
			this->button_add_ing = (gcnew System::Windows::Forms::Button());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_find = (gcnew System::Windows::Forms::Button());
			this->button_redact_ing = (gcnew System::Windows::Forms::Button());
			this->button_delete_ing = (gcnew System::Windows::Forms::Button());
			this->button_delete_recipe = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(25, 50);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(154, 20);
			this->label_name->TabIndex = 0;
			this->label_name->Text = L"Название рецепта:";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(217, 52);
			this->textBox_name->MaximumSize = System::Drawing::Size(150, 20);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(150, 20);
			this->textBox_name->TabIndex = 1;
			// 
			// listBox
			// 
			this->listBox->FormattingEnabled = true;
			this->listBox->Location = System::Drawing::Point(388, 152);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(180, 95);
			this->listBox->TabIndex = 2;
			// 
			// label_ing
			// 
			this->label_ing->AutoSize = true;
			this->label_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_ing->Location = System::Drawing::Point(25, 186);
			this->label_ing->Name = L"label_ing";
			this->label_ing->Size = System::Drawing::Size(105, 20);
			this->label_ing->TabIndex = 3;
			this->label_ing->Text = L"Ингредиент:";
			// 
			// textBox_ing
			// 
			this->textBox_ing->Location = System::Drawing::Point(217, 188);
			this->textBox_ing->MaximumSize = System::Drawing::Size(150, 20);
			this->textBox_ing->Name = L"textBox_ing";
			this->textBox_ing->Size = System::Drawing::Size(150, 20);
			this->textBox_ing->TabIndex = 4;
			// 
			// button_add_ing
			// 
			this->button_add_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add_ing->Location = System::Drawing::Point(596, 172);
			this->button_add_ing->Name = L"button_add_ing";
			this->button_add_ing->Size = System::Drawing::Size(198, 48);
			this->button_add_ing->TabIndex = 5;
			this->button_add_ing->Text = L"Добавить ингредиент";
			this->button_add_ing->UseVisualStyleBackColor = true;
			this->button_add_ing->Click += gcnew System::EventHandler(this, &RecWorking::button_add_ing_Click);
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_save->Location = System::Drawing::Point(611, 280);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(160, 48);
			this->button_save->TabIndex = 6;
			this->button_save->Text = L"Сохранить рецепт";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &RecWorking::button_save_Click);
			// 
			// button_find
			// 
			this->button_find->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_find->Location = System::Drawing::Point(596, 36);
			this->button_find->Name = L"button_find";
			this->button_find->Size = System::Drawing::Size(198, 48);
			this->button_find->TabIndex = 7;
			this->button_find->Text = L"Найти рецепт";
			this->button_find->UseVisualStyleBackColor = true;
			this->button_find->Click += gcnew System::EventHandler(this, &RecWorking::button_find_Click);
			// 
			// button_redact_ing
			// 
			this->button_redact_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_redact_ing->Location = System::Drawing::Point(90, 280);
			this->button_redact_ing->Name = L"button_redact_ing";
			this->button_redact_ing->Size = System::Drawing::Size(150, 48);
			this->button_redact_ing->TabIndex = 8;
			this->button_redact_ing->Text = L"Изменить ингредиент";
			this->button_redact_ing->UseVisualStyleBackColor = true;
			this->button_redact_ing->Click += gcnew System::EventHandler(this, &RecWorking::button_redact_ing_Click);
			// 
			// button_delete_ing
			// 
			this->button_delete_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete_ing->Location = System::Drawing::Point(351, 280);
			this->button_delete_ing->Name = L"button_delete_ing";
			this->button_delete_ing->Size = System::Drawing::Size(150, 48);
			this->button_delete_ing->TabIndex = 9;
			this->button_delete_ing->Text = L"Удалить ингредиент";
			this->button_delete_ing->UseVisualStyleBackColor = true;
			this->button_delete_ing->Click += gcnew System::EventHandler(this, &RecWorking::button_delete_ing_Click);
			// 
			// button_delete_recipe
			// 
			this->button_delete_recipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_delete_recipe->Location = System::Drawing::Point(90, 102);
			this->button_delete_recipe->Name = L"button_delete_recipe";
			this->button_delete_recipe->Size = System::Drawing::Size(198, 48);
			this->button_delete_recipe->TabIndex = 10;
			this->button_delete_recipe->Text = L"Удалить рецепт";
			this->button_delete_recipe->UseVisualStyleBackColor = true;
			this->button_delete_recipe->Click += gcnew System::EventHandler(this, &RecWorking::button_delete_recipe_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(388, 13);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(180, 95);
			this->listBox2->TabIndex = 11;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &RecWorking::listBox2_SelectedIndexChanged);
			// 
			// RecWorking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(820, 372);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button_delete_recipe);
			this->Controls->Add(this->button_delete_ing);
			this->Controls->Add(this->button_redact_ing);
			this->Controls->Add(this->button_find);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->button_add_ing);
			this->Controls->Add(this->textBox_ing);
			this->Controls->Add(this->label_ing);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label_name);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"RecWorking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Управление рецептами";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &RecWorking::RecWorking_FormClosed);
			this->Load += gcnew System::EventHandler(this, &RecWorking::RecWorking_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &RecWorking::RecWorking_MouseEnter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void LoadRecipes() {
			// Загрузка рецептов из файла
			if (File::Exists(recipesFile)) {
				array<String^>^ lines = File::ReadAllLines(recipesFile);
				for each (String ^ line in lines) {
					array<String^>^ parts = line->Split(';');
					if (parts->Length > 1) {
						String^ recipeName = parts[0];
						List<String^>^ ingredients = gcnew List<String^>();
						for (int i = 1; i < parts->Length; i++) {
							ingredients->Add(parts[i]);
						}
						recipes[recipeName] = ingredients;
					}
				}
			}
		}


	private: System::Void button_add_ing_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ recipeName = textBox_name->Text->Trim();
		String^ ingredient = textBox_ing->Text->Trim();
		if (String::IsNullOrEmpty(recipeName)) {
			MessageBox::Show("Введите название рецепта!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (String::IsNullOrEmpty(ingredient)) {
			MessageBox::Show("Введите название ингредиента!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		listBox->Items->Add(ingredient);
		textBox_ing->Clear();
		this->button_find->Visible = false;
		this->textBox_name->Enabled = false;
		this->button_delete_ing->Visible = true;
		this->button_redact_ing->Visible = true;
		this->button_delete_recipe->Visible = true;
		this->button_save->Visible = true;
		this->listBox->Visible = true;
		this->listBox2->Visible = false;
	}

	private:void SaveRecipesToFile() {
		List<String^>^ lines = gcnew List<String^>();
		for each (KeyValuePair<String^, List<String^>^> pair in recipes) {
			String^ line = pair.Key + ";" + String::Join(";", pair.Value);
			lines->Add(line);
		}
		File::WriteAllLines(recipesFile, lines->ToArray());
	}

	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ recipeName = textBox_name->Text->Trim();
		if (String::IsNullOrEmpty(recipeName)) {
			MessageBox::Show("Введите название рецепта!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (recipes->ContainsKey(recipeName) && !find) {
			MessageBox::Show("Рецепт с таким названием уже существует!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		List<String^>^ ingredients = gcnew List<String^>();
		for each (String ^ item in listBox->Items) {
			ingredients->Add(item);
		}
		recipes[recipeName] = ingredients;

		// Сохранение в файл
		SaveRecipesToFile();
		MessageBox::Show("Рецепт сохранён!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBox_name->Clear();
		textBox_ing->Clear();
		listBox->Items->Clear();

		this->textBox_name->Enabled = true;
		this->button_delete_ing->Visible = false;
		this->button_redact_ing->Visible = false;
		this->button_delete_recipe->Visible = false;
		this->button_save->Visible = false;
		this->button_find->Visible = true;
		this->listBox->Visible = false;
		this->listBox2->Visible = true;
		find = false;
	}

	private: System::Void button_find_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ recipeName = textBox_name->Text->Trim();
		if (String::IsNullOrEmpty(recipeName) || !recipes->ContainsKey(recipeName)) {
			MessageBox::Show("Рецепт не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			listBox->Items->Clear();
			return;
		}

		listBox->Items->Clear();
		for each (String ^ ingredient in recipes[recipeName]) {
			listBox->Items->Add(ingredient);
		}

		this->textBox_name->Enabled = false;
		this->button_delete_ing->Visible = true;
		this->button_redact_ing->Visible = true;
		this->button_delete_recipe->Visible = true;
		this->button_save->Visible = true;
		this->button_find->Visible = false;
		this->listBox->Visible = true;
		this->listBox2->Visible = false;
		find = true;
	}

	private: System::Void button_redact_ing_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox->SelectedIndex == -1) {
			MessageBox::Show("Выберите ингредиент для редактирования!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		String^ newIngredient = textBox_ing->Text->Trim();
		if (String::IsNullOrEmpty(newIngredient)) {
			MessageBox::Show("Введите новый ингредиент!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		listBox->Items[listBox->SelectedIndex] = newIngredient;
		MessageBox::Show("Ингредиент отредактирован!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBox_ing->Clear();
	}

	private: System::Void button_delete_ing_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBox->SelectedIndex == -1) {
			MessageBox::Show("Выберите ингредиент для удаления!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		listBox->Items->RemoveAt(listBox->SelectedIndex);
		MessageBox::Show("Ингредиент удалён!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBox_ing->Clear();
	}

	private: System::Void button_delete_recipe_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ recipeName = textBox_name->Text->Trim();
		if (recipes->ContainsKey(recipeName)) {
			recipes->Remove(recipeName);
			SaveRecipesToFile();
			listBox->Items->Clear();
			MessageBox::Show("Рецепт удалён!", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			this->textBox_name->Enabled = true;
			this->button_delete_ing->Visible = false;
			this->button_redact_ing->Visible = false;
			this->button_delete_recipe->Visible = false;
			this->button_save->Visible = false;
			this->button_find->Visible = true;
			this->listBox->Visible = false;
			this->listBox2->Visible = true;
			find = false;
			textBox_name->Clear();
			textBox_ing->Clear();
			listBox->Items->Clear();
		}
	}

	private: System::Void RecWorking_Load(System::Object^ sender, System::EventArgs^ e) {
		this->button_delete_ing->Visible = false;
		this->button_redact_ing->Visible = false;
		this->button_delete_recipe->Visible = false;
		this->button_save->Visible = false;
		this->listBox->Visible = false;

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

	private: System::Void RecWorking_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}

	private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Проверка, что выбранный элемент не пустой
		if (listBox2->SelectedItem != nullptr) {
			// Установка выбранного рецепта в TextBox_rec_name
			textBox_name->Text = listBox2->SelectedItem->ToString();
		}
	}

	private: System::Void RecWorking_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
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
