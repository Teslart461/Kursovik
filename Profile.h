#pragma once
#include "UserData.h"
#include "Computation.h"
#include "IngWorking.h"
#include "RecWorking.h"

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
	private: UserData^ userData;
	public:

		Profile(UserData^ data)
		{
			InitializeComponent();
			userData = data;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_username;
	protected:

	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::Button^ button_username_change;
	private: System::Windows::Forms::Button^ button_ing;
	private: System::Windows::Forms::Button^ button_recipe;


	private: System::Windows::Forms::Button^ button_calculate;
	public: static int ism = 0;


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
			this->label_username = (gcnew System::Windows::Forms::Label());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->button_username_change = (gcnew System::Windows::Forms::Button());
			this->button_ing = (gcnew System::Windows::Forms::Button());
			this->button_recipe = (gcnew System::Windows::Forms::Button());
			this->button_calculate = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_username
			// 
			this->label_username->AutoSize = true;
			this->label_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_username->Location = System::Drawing::Point(75, 30);
			this->label_username->Name = L"label_username";
			this->label_username->Size = System::Drawing::Size(132, 16);
			this->label_username->TabIndex = 0;
			this->label_username->Text = L"Имя пользователя:";
			// 
			// textBox_username
			// 
			this->textBox_username->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_username->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_username->Location = System::Drawing::Point(78, 74);
			this->textBox_username->MaximumSize = System::Drawing::Size(129, 20);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(129, 20);
			this->textBox_username->TabIndex = 2;
			// 
			// button_username_change
			// 
			this->button_username_change->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_username_change->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_username_change->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_username_change->Location = System::Drawing::Point(49, 121);
			this->button_username_change->Name = L"button_username_change";
			this->button_username_change->Size = System::Drawing::Size(183, 41);
			this->button_username_change->TabIndex = 5;
			this->button_username_change->Text = L"Изменить данные";
			this->button_username_change->UseVisualStyleBackColor = false;
			this->button_username_change->Click += gcnew System::EventHandler(this, &Profile::button_username_change_Click);
			// 
			// button_ing
			// 
			this->button_ing->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_ing->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ing->Location = System::Drawing::Point(297, 53);
			this->button_ing->Name = L"button_ing";
			this->button_ing->Size = System::Drawing::Size(195, 61);
			this->button_ing->TabIndex = 6;
			this->button_ing->Text = L"Управление ингредиентами";
			this->button_ing->UseVisualStyleBackColor = false;
			this->button_ing->Click += gcnew System::EventHandler(this, &Profile::button_ing_Click);
			// 
			// button_recipe
			// 
			this->button_recipe->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_recipe->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_recipe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_recipe->Location = System::Drawing::Point(297, 192);
			this->button_recipe->Name = L"button_recipe";
			this->button_recipe->Size = System::Drawing::Size(195, 62);
			this->button_recipe->TabIndex = 7;
			this->button_recipe->Text = L"Управление рецептами";
			this->button_recipe->UseVisualStyleBackColor = false;
			this->button_recipe->Click += gcnew System::EventHandler(this, &Profile::button_recipe_Click);
			// 
			// button_calculate
			// 
			this->button_calculate->BackColor = System::Drawing::Color::Gray;
			this->button_calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_calculate->Location = System::Drawing::Point(49, 192);
			this->button_calculate->Name = L"button_calculate";
			this->button_calculate->Size = System::Drawing::Size(183, 63);
			this->button_calculate->TabIndex = 8;
			this->button_calculate->Text = L"Рассчитать сутки";
			this->button_calculate->UseVisualStyleBackColor = false;
			this->button_calculate->Click += gcnew System::EventHandler(this, &Profile::button_calculate_Click);
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(536, 309);
			this->Controls->Add(this->button_calculate);
			this->Controls->Add(this->button_recipe);
			this->Controls->Add(this->button_ing);
			this->Controls->Add(this->button_username_change);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label_username);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Profile::Profile_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_username_change_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(textBox_username->Text)) {
			MessageBox::Show("Имя пользователя не может быть пустым. Пожалуйста, введите имя.",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			userData->UserName = textBox_username->Text;
			ism = 1;
			Owner->Show();
			this->Close();
		}
	}
	private: System::Void Profile_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}
	private: System::Void button_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Computation^ CompForm = gcnew Computation();  
		CompForm->Show();
		CompForm->Owner = this;
	}

	private: System::Void button_ing_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		IngWorking^ IngForm = gcnew IngWorking();
		IngForm->Show();
		IngForm->Owner = this;
	}
	private: System::Void button_recipe_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		RecWorking^ RecForm = gcnew RecWorking();
		RecForm->Show();
		RecForm->Owner = this;
	}
};
}
