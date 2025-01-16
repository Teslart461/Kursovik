#pragma once
#include "Diary.h"
#include "Profile.h"
#include "UserData.h"

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
	private: UserData^ userData;
	public: 

		Main(void)
		{
			InitializeComponent();
			userData = gcnew UserData();  // Создаем общий объект данных
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
	private: System::Windows::Forms::Label^ label_welcome;
	protected:

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
			this->label_welcome = (gcnew System::Windows::Forms::Label());
			this->button_profile = (gcnew System::Windows::Forms::Button());
			this->button_diary = (gcnew System::Windows::Forms::Button());
			this->button_reports_of_nutrition = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_welcome
			// 
			this->label_welcome->AutoSize = true;
			this->label_welcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->label_welcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_welcome->Location = System::Drawing::Point(94, 54);
			this->label_welcome->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_welcome->Name = L"label_welcome";
			this->label_welcome->Size = System::Drawing::Size(278, 33);
			this->label_welcome->TabIndex = 0;
			this->label_welcome->Text = L"Добро пожаловать!";
			this->label_welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_profile
			// 
			this->button_profile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_profile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_profile->Location = System::Drawing::Point(164, 129);
			this->button_profile->Margin = System::Windows::Forms::Padding(2);
			this->button_profile->Name = L"button_profile";
			this->button_profile->Size = System::Drawing::Size(122, 46);
			this->button_profile->TabIndex = 1;
			this->button_profile->Text = L"Профиль";
			this->button_profile->UseVisualStyleBackColor = false;
			this->button_profile->Click += gcnew System::EventHandler(this, &Main::button_profile_Click);
			// 
			// button_diary
			// 
			this->button_diary->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button_diary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_diary->Location = System::Drawing::Point(164, 212);
			this->button_diary->Margin = System::Windows::Forms::Padding(2);
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
			this->button_reports_of_nutrition->Margin = System::Windows::Forms::Padding(2);
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
			this->Controls->Add(this->label_welcome);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NutriTrack";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &Main::Main_MouseEnter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) { 
		// Массив имён файлов для проверки
		array<String^>^ filePaths = { "ingredients.txt", "recipes.txt" };

		for each (String ^ filePath in filePaths) {
			if (!File::Exists(filePath)) {
				try {
					// Создаём пустой файл
					File::WriteAllText(filePath, "");
					MessageBox::Show("Файл " + filePath + " не найден. Создан новый пустой файл.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("Ошибка при создании файла " + filePath + ": " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
	}

	String^ getCurrentDate() {
		DateTime now = DateTime::Now;
		return now.ToString("dd-MM-yyyy");
	}


	// Функция для создания пути к файлам пользователя
	String^ getUserFilePath(String^ userName, String^ fileName) {
		// Создаём путь к директории пользователя
		String^ userDirectory = Path::Combine("users", userName);

		// Проверка: Создание папки, только если её нет
		if (!Directory::Exists(userDirectory)) {
			Directory::CreateDirectory(userDirectory);
		}

		// Возвращаем полный путь к файлу (а не к папке)
		return Path::Combine(userDirectory, fileName); // Возвращаем путь к файлу, а не к папке
	}

	void updateDiaryFile(String^ userName, String^ fileName) {
		String^ filename = getUserFilePath(userName, fileName);

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

	void createOrUpdateFile(String^ userName, String^ fileName) {
		String^ filename = getUserFilePath(userName, fileName);

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

	private: System::Void button_diary_Click(System::Object^ sender, System::EventArgs^ e) {
		Diary^ DiaryShow = gcnew Diary(userData);
		DiaryShow->Show();
		DiaryShow->Owner = this;
		this->Hide();
	}

	private: System::Void button_profile_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ profileForm = gcnew Profile(userData);  // Передаем данные в новую форму
		profileForm->Show();
		profileForm->Owner = this;
		this->Hide();
	}

	private: System::Void Main_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (Profile::ism == 1) {
		this->button_diary->Enabled = true;
		this->label_welcome->Location = System::Drawing::Point(21, 54);
		this->label_welcome->Text = L"Добро пожаловать, " + userData->UserName + "!";
		String^ currentUserName = userData->UserName;  // Используем переданный объект данных
		updateDiaryFile(currentUserName, "diary.txt");
		createOrUpdateFile(currentUserName, "breakfast.txt");
		createOrUpdateFile(currentUserName, "lunch.txt");
		createOrUpdateFile(currentUserName, "dinner.txt");
		createOrUpdateFile(currentUserName, "snack.txt");
	}
	else {
		this->button_diary->Enabled = false;
	}
}
};
}
