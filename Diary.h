#pragma once
#include "FindIng.h"
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
	/// Сводка для Diary
	/// </summary>
	public ref class Diary : public System::Windows::Forms::Form
	{
	public:
	private: UserData^ userData;
	public:
		Diary(UserData^ data)
		{
			InitializeComponent();
			userData = data; // Сохраняем переданный объект данных
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

	private:
		ref class DailyInfo {
		public:
			String^ date;
			double calories;
			double proteins;
			double fats;
			double carbs;

			DailyInfo(String^ date, double calories, double proteins, double fats, double carbs) {
				this->date = date;
				this->calories = calories;
				this->proteins = proteins;
				this->fats = fats;
				this->carbs = carbs;
			}
		};

		ref class DiaryHandler {
		private:
			double totalCalories = 0;
			double totalProteins = 0;
			double totalFats = 0;
			double totalCarbs = 0;

			public:
			// Метод для сброса итоговых значений
			void ResetTotals() {
				totalCalories = 0;
				totalProteins = 0;
				totalFats = 0;
				totalCarbs = 0;
			}

			// Метод для подсчёта общих значений из DataGridView
			void CalculateTotals(DataGridView^ dgv) {
				for (int i = 0; i < dgv->Rows->Count - 1; ++i) {
					totalCalories += Convert::ToDouble(dgv->Rows[i]->Cells["Calories"]->Value);
					totalProteins += Convert::ToDouble(dgv->Rows[i]->Cells["Proteins"]->Value);
					totalFats += Convert::ToDouble(dgv->Rows[i]->Cells["Fats"]->Value);
					totalCarbs += Convert::ToDouble(dgv->Rows[i]->Cells["Carbs"]->Value);
				}
			}

			// Геттеры для итоговых значений
			double GetTotalCalories() { return totalCalories; }
			double GetTotalProteins() { return totalProteins; }
			double GetTotalFats() { return totalFats; }
			double GetTotalCarbs() { return totalCarbs; }
		};

	private: System::Windows::Forms::DataGridView^ Breakfast_tabl;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_breakfast;

	private: System::Windows::Forms::Label^ label_breakfast_add;
	private: System::Windows::Forms::Label^ label_lunch_add;


	private: System::Windows::Forms::TextBox^ textBox_lunch;
	private: System::Windows::Forms::Label^ label_snack_add;





	private: System::Windows::Forms::TextBox^ textBox_snack;

	private: System::Windows::Forms::Label^ label_dinner_add;




	private: System::Windows::Forms::TextBox^ textBox_dinner;

	private: System::Windows::Forms::Label^ label_br_cal;
	private: System::Windows::Forms::Label^ label_br_pr;
	private: System::Windows::Forms::Label^ label_br_fts;
	private: System::Windows::Forms::Label^ label_br_crbs;
	private: System::Windows::Forms::Label^ label_br_cal_dop;
	private: System::Windows::Forms::Label^ label_br_pr_dop;
	private: System::Windows::Forms::Label^ label_br_fts_dop;

	private: System::Windows::Forms::Label^ label_br_crbs_dop;
	private: System::Windows::Forms::Label^ label_lh_crbs_dop;

	private: System::Windows::Forms::Label^ label_lh_fts_dop;

	private: System::Windows::Forms::Label^ label_lh_pr_dop;

	private: System::Windows::Forms::Label^ label_lh_cal_dop;
	private: System::Windows::Forms::Label^ label_lh_crbs;


	private: System::Windows::Forms::Label^ label_lh_fts;

	private: System::Windows::Forms::Label^ label_lh_pr;

	private: System::Windows::Forms::Label^ label_lh_cal;

	private: System::Windows::Forms::DataGridView^ Lunch_tabl;
	private: System::Windows::Forms::Label^ label_dr_crbs_dop;


	private: System::Windows::Forms::Label^ label_dr_fts_dop;

	private: System::Windows::Forms::Label^ label_dr_pr_dop;

	private: System::Windows::Forms::Label^ label_dr_cal_dop;
	private: System::Windows::Forms::Label^ label_dr_crbs;


	private: System::Windows::Forms::Label^ label_dr_fts;

	private: System::Windows::Forms::Label^ label_dr_pr;

	private: System::Windows::Forms::Label^ label_dr_cal;

	private: System::Windows::Forms::DataGridView^ Dinner_tabl;
	private: System::Windows::Forms::Label^ label_snk_crbs_dop;


	private: System::Windows::Forms::Label^ label_snk_fts_dop;

	private: System::Windows::Forms::Label^ label_snk_pr_dop;

	private: System::Windows::Forms::Label^ label_snk_cal_dop;
	private: System::Windows::Forms::Label^ label_snk_crbs;


	private: System::Windows::Forms::Label^ label_snk_fts;

	private: System::Windows::Forms::Label^ label_snk_pr;

	private: System::Windows::Forms::Label^ label_snk_cal;

	private: System::Windows::Forms::DataGridView^ Snack_tabl;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Button^ button_report;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Breakfast_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox_breakfast = (gcnew System::Windows::Forms::TextBox());
			this->label_breakfast_add = (gcnew System::Windows::Forms::Label());
			this->label_lunch_add = (gcnew System::Windows::Forms::Label());
			this->textBox_lunch = (gcnew System::Windows::Forms::TextBox());
			this->label_snack_add = (gcnew System::Windows::Forms::Label());
			this->textBox_snack = (gcnew System::Windows::Forms::TextBox());
			this->label_dinner_add = (gcnew System::Windows::Forms::Label());
			this->textBox_dinner = (gcnew System::Windows::Forms::TextBox());
			this->label_br_cal = (gcnew System::Windows::Forms::Label());
			this->label_br_pr = (gcnew System::Windows::Forms::Label());
			this->label_br_fts = (gcnew System::Windows::Forms::Label());
			this->label_br_crbs = (gcnew System::Windows::Forms::Label());
			this->label_br_cal_dop = (gcnew System::Windows::Forms::Label());
			this->label_br_pr_dop = (gcnew System::Windows::Forms::Label());
			this->label_br_fts_dop = (gcnew System::Windows::Forms::Label());
			this->label_br_crbs_dop = (gcnew System::Windows::Forms::Label());
			this->label_lh_crbs_dop = (gcnew System::Windows::Forms::Label());
			this->label_lh_fts_dop = (gcnew System::Windows::Forms::Label());
			this->label_lh_pr_dop = (gcnew System::Windows::Forms::Label());
			this->label_lh_cal_dop = (gcnew System::Windows::Forms::Label());
			this->label_lh_crbs = (gcnew System::Windows::Forms::Label());
			this->label_lh_fts = (gcnew System::Windows::Forms::Label());
			this->label_lh_pr = (gcnew System::Windows::Forms::Label());
			this->label_lh_cal = (gcnew System::Windows::Forms::Label());
			this->Lunch_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->label_dr_crbs_dop = (gcnew System::Windows::Forms::Label());
			this->label_dr_fts_dop = (gcnew System::Windows::Forms::Label());
			this->label_dr_pr_dop = (gcnew System::Windows::Forms::Label());
			this->label_dr_cal_dop = (gcnew System::Windows::Forms::Label());
			this->label_dr_crbs = (gcnew System::Windows::Forms::Label());
			this->label_dr_fts = (gcnew System::Windows::Forms::Label());
			this->label_dr_pr = (gcnew System::Windows::Forms::Label());
			this->label_dr_cal = (gcnew System::Windows::Forms::Label());
			this->Dinner_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->label_snk_crbs_dop = (gcnew System::Windows::Forms::Label());
			this->label_snk_fts_dop = (gcnew System::Windows::Forms::Label());
			this->label_snk_pr_dop = (gcnew System::Windows::Forms::Label());
			this->label_snk_cal_dop = (gcnew System::Windows::Forms::Label());
			this->label_snk_crbs = (gcnew System::Windows::Forms::Label());
			this->label_snk_fts = (gcnew System::Windows::Forms::Label());
			this->label_snk_pr = (gcnew System::Windows::Forms::Label());
			this->label_snk_cal = (gcnew System::Windows::Forms::Label());
			this->Snack_tabl = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_report = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Breakfast_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lunch_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dinner_tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Snack_tabl))->BeginInit();
			this->SuspendLayout();
			// 
			// Breakfast_tabl
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Breakfast_tabl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->Breakfast_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Breakfast_tabl->DefaultCellStyle = dataGridViewCellStyle2;
			this->Breakfast_tabl->EnableHeadersVisualStyles = false;
			this->Breakfast_tabl->Location = System::Drawing::Point(28, 73);
			this->Breakfast_tabl->Name = L"Breakfast_tabl";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Breakfast_tabl->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->Breakfast_tabl->Size = System::Drawing::Size(543, 104);
			this->Breakfast_tabl->TabIndex = 1;
			// 
			// textBox_breakfast
			// 
			this->textBox_breakfast->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_breakfast->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_breakfast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_breakfast->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_breakfast->Location = System::Drawing::Point(28, 32);
			this->textBox_breakfast->Margin = System::Windows::Forms::Padding(2);
			this->textBox_breakfast->Name = L"textBox_breakfast";
			this->textBox_breakfast->ReadOnly = true;
			this->textBox_breakfast->Size = System::Drawing::Size(72, 26);
			this->textBox_breakfast->TabIndex = 0;
			this->textBox_breakfast->Text = L"Завтрак";
			this->textBox_breakfast->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_breakfast_add
			// 
			this->label_breakfast_add->AutoSize = true;
			this->label_breakfast_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_breakfast_add->ForeColor = System::Drawing::Color::Cyan;
			this->label_breakfast_add->Location = System::Drawing::Point(534, 33);
			this->label_breakfast_add->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_breakfast_add->Name = L"label_breakfast_add";
			this->label_breakfast_add->Size = System::Drawing::Size(37, 37);
			this->label_breakfast_add->TabIndex = 3;
			this->label_breakfast_add->Text = L"+";
			this->label_breakfast_add->Click += gcnew System::EventHandler(this, &Diary::label_breakfast_add_Click);
			// 
			// label_lunch_add
			// 
			this->label_lunch_add->AutoSize = true;
			this->label_lunch_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lunch_add->ForeColor = System::Drawing::Color::Cyan;
			this->label_lunch_add->Location = System::Drawing::Point(534, 257);
			this->label_lunch_add->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_lunch_add->Name = L"label_lunch_add";
			this->label_lunch_add->Size = System::Drawing::Size(37, 37);
			this->label_lunch_add->TabIndex = 7;
			this->label_lunch_add->Text = L"+";
			this->label_lunch_add->Click += gcnew System::EventHandler(this, &Diary::label_lunch_add_Click);
			// 
			// textBox_lunch
			// 
			this->textBox_lunch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_lunch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_lunch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_lunch->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_lunch->Location = System::Drawing::Point(28, 257);
			this->textBox_lunch->Margin = System::Windows::Forms::Padding(2);
			this->textBox_lunch->Name = L"textBox_lunch";
			this->textBox_lunch->ReadOnly = true;
			this->textBox_lunch->Size = System::Drawing::Size(49, 26);
			this->textBox_lunch->TabIndex = 4;
			this->textBox_lunch->Text = L"Обед";
			this->textBox_lunch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_snack_add
			// 
			this->label_snack_add->AutoSize = true;
			this->label_snack_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snack_add->ForeColor = System::Drawing::Color::Cyan;
			this->label_snack_add->Location = System::Drawing::Point(534, 726);
			this->label_snack_add->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_snack_add->Name = L"label_snack_add";
			this->label_snack_add->Size = System::Drawing::Size(37, 37);
			this->label_snack_add->TabIndex = 15;
			this->label_snack_add->Text = L"+";
			this->label_snack_add->Click += gcnew System::EventHandler(this, &Diary::label_snack_add_Click);
			// 
			// textBox_snack
			// 
			this->textBox_snack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_snack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_snack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_snack->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_snack->Location = System::Drawing::Point(28, 726);
			this->textBox_snack->Margin = System::Windows::Forms::Padding(2);
			this->textBox_snack->Name = L"textBox_snack";
			this->textBox_snack->ReadOnly = true;
			this->textBox_snack->Size = System::Drawing::Size(70, 26);
			this->textBox_snack->TabIndex = 12;
			this->textBox_snack->Text = L"Перекус";
			this->textBox_snack->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_dinner_add
			// 
			this->label_dinner_add->AutoSize = true;
			this->label_dinner_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dinner_add->ForeColor = System::Drawing::Color::Cyan;
			this->label_dinner_add->Location = System::Drawing::Point(534, 487);
			this->label_dinner_add->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_dinner_add->Name = L"label_dinner_add";
			this->label_dinner_add->Size = System::Drawing::Size(37, 37);
			this->label_dinner_add->TabIndex = 11;
			this->label_dinner_add->Text = L"+";
			this->label_dinner_add->Click += gcnew System::EventHandler(this, &Diary::label_dinner_add_Click);
			// 
			// textBox_dinner
			// 
			this->textBox_dinner->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_dinner->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_dinner->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_dinner->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_dinner->Location = System::Drawing::Point(28, 487);
			this->textBox_dinner->Margin = System::Windows::Forms::Padding(2);
			this->textBox_dinner->Name = L"textBox_dinner";
			this->textBox_dinner->ReadOnly = true;
			this->textBox_dinner->Size = System::Drawing::Size(49, 26);
			this->textBox_dinner->TabIndex = 8;
			this->textBox_dinner->Text = L"Ужин";
			this->textBox_dinner->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_br_cal
			// 
			this->label_br_cal->AutoSize = true;
			this->label_br_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_br_cal->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_cal->Location = System::Drawing::Point(73, 197);
			this->label_br_cal->Name = L"label_br_cal";
			this->label_br_cal->Size = System::Drawing::Size(66, 16);
			this->label_br_cal->TabIndex = 17;
			this->label_br_cal->Text = L"Калории:";
			// 
			// label_br_pr
			// 
			this->label_br_pr->AutoSize = true;
			this->label_br_pr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_br_pr->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_pr->Location = System::Drawing::Point(209, 197);
			this->label_br_pr->Name = L"label_br_pr";
			this->label_br_pr->Size = System::Drawing::Size(50, 16);
			this->label_br_pr->TabIndex = 18;
			this->label_br_pr->Text = L"Белки:";
			// 
			// label_br_fts
			// 
			this->label_br_fts->AutoSize = true;
			this->label_br_fts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_br_fts->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_fts->Location = System::Drawing::Point(348, 197);
			this->label_br_fts->Name = L"label_br_fts";
			this->label_br_fts->Size = System::Drawing::Size(48, 16);
			this->label_br_fts->TabIndex = 19;
			this->label_br_fts->Text = L"Жиры:";
			// 
			// label_br_crbs
			// 
			this->label_br_crbs->AutoSize = true;
			this->label_br_crbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_br_crbs->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_crbs->Location = System::Drawing::Point(465, 197);
			this->label_br_crbs->Name = L"label_br_crbs";
			this->label_br_crbs->Size = System::Drawing::Size(74, 16);
			this->label_br_crbs->TabIndex = 20;
			this->label_br_crbs->Text = L"Углеводы:";
			// 
			// label_br_cal_dop
			// 
			this->label_br_cal_dop->AutoSize = true;
			this->label_br_cal_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_br_cal_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_cal_dop->Location = System::Drawing::Point(86, 225);
			this->label_br_cal_dop->Name = L"label_br_cal_dop";
			this->label_br_cal_dop->Size = System::Drawing::Size(41, 16);
			this->label_br_cal_dop->TabIndex = 21;
			this->label_br_cal_dop->Text = L"X кал";
			// 
			// label_br_pr_dop
			// 
			this->label_br_pr_dop->AutoSize = true;
			this->label_br_pr_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_br_pr_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_pr_dop->Location = System::Drawing::Point(222, 225);
			this->label_br_pr_dop->Name = L"label_br_pr_dop";
			this->label_br_pr_dop->Size = System::Drawing::Size(24, 16);
			this->label_br_pr_dop->TabIndex = 22;
			this->label_br_pr_dop->Text = L"X г";
			// 
			// label_br_fts_dop
			// 
			this->label_br_fts_dop->AutoSize = true;
			this->label_br_fts_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_br_fts_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_fts_dop->Location = System::Drawing::Point(359, 225);
			this->label_br_fts_dop->Name = L"label_br_fts_dop";
			this->label_br_fts_dop->Size = System::Drawing::Size(24, 16);
			this->label_br_fts_dop->TabIndex = 23;
			this->label_br_fts_dop->Text = L"X г";
			// 
			// label_br_crbs_dop
			// 
			this->label_br_crbs_dop->AutoSize = true;
			this->label_br_crbs_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_br_crbs_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_br_crbs_dop->Location = System::Drawing::Point(487, 225);
			this->label_br_crbs_dop->Name = L"label_br_crbs_dop";
			this->label_br_crbs_dop->Size = System::Drawing::Size(24, 16);
			this->label_br_crbs_dop->TabIndex = 24;
			this->label_br_crbs_dop->Text = L"X г";
			// 
			// label_lh_crbs_dop
			// 
			this->label_lh_crbs_dop->AutoSize = true;
			this->label_lh_crbs_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_lh_crbs_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_crbs_dop->Location = System::Drawing::Point(487, 449);
			this->label_lh_crbs_dop->Name = L"label_lh_crbs_dop";
			this->label_lh_crbs_dop->Size = System::Drawing::Size(24, 16);
			this->label_lh_crbs_dop->TabIndex = 33;
			this->label_lh_crbs_dop->Text = L"X г";
			// 
			// label_lh_fts_dop
			// 
			this->label_lh_fts_dop->AutoSize = true;
			this->label_lh_fts_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_lh_fts_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_fts_dop->Location = System::Drawing::Point(359, 449);
			this->label_lh_fts_dop->Name = L"label_lh_fts_dop";
			this->label_lh_fts_dop->Size = System::Drawing::Size(24, 16);
			this->label_lh_fts_dop->TabIndex = 32;
			this->label_lh_fts_dop->Text = L"X г";
			// 
			// label_lh_pr_dop
			// 
			this->label_lh_pr_dop->AutoSize = true;
			this->label_lh_pr_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lh_pr_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_pr_dop->Location = System::Drawing::Point(222, 449);
			this->label_lh_pr_dop->Name = L"label_lh_pr_dop";
			this->label_lh_pr_dop->Size = System::Drawing::Size(24, 16);
			this->label_lh_pr_dop->TabIndex = 31;
			this->label_lh_pr_dop->Text = L"X г";
			// 
			// label_lh_cal_dop
			// 
			this->label_lh_cal_dop->AutoSize = true;
			this->label_lh_cal_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_lh_cal_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_cal_dop->Location = System::Drawing::Point(86, 449);
			this->label_lh_cal_dop->Name = L"label_lh_cal_dop";
			this->label_lh_cal_dop->Size = System::Drawing::Size(41, 16);
			this->label_lh_cal_dop->TabIndex = 30;
			this->label_lh_cal_dop->Text = L"X кал";
			// 
			// label_lh_crbs
			// 
			this->label_lh_crbs->AutoSize = true;
			this->label_lh_crbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lh_crbs->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_crbs->Location = System::Drawing::Point(465, 421);
			this->label_lh_crbs->Name = L"label_lh_crbs";
			this->label_lh_crbs->Size = System::Drawing::Size(74, 16);
			this->label_lh_crbs->TabIndex = 29;
			this->label_lh_crbs->Text = L"Углеводы:";
			// 
			// label_lh_fts
			// 
			this->label_lh_fts->AutoSize = true;
			this->label_lh_fts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lh_fts->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_fts->Location = System::Drawing::Point(348, 421);
			this->label_lh_fts->Name = L"label_lh_fts";
			this->label_lh_fts->Size = System::Drawing::Size(48, 16);
			this->label_lh_fts->TabIndex = 28;
			this->label_lh_fts->Text = L"Жиры:";
			// 
			// label_lh_pr
			// 
			this->label_lh_pr->AutoSize = true;
			this->label_lh_pr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lh_pr->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_pr->Location = System::Drawing::Point(209, 421);
			this->label_lh_pr->Name = L"label_lh_pr";
			this->label_lh_pr->Size = System::Drawing::Size(50, 16);
			this->label_lh_pr->TabIndex = 27;
			this->label_lh_pr->Text = L"Белки:";
			// 
			// label_lh_cal
			// 
			this->label_lh_cal->AutoSize = true;
			this->label_lh_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_lh_cal->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_lh_cal->Location = System::Drawing::Point(73, 421);
			this->label_lh_cal->Name = L"label_lh_cal";
			this->label_lh_cal->Size = System::Drawing::Size(66, 16);
			this->label_lh_cal->TabIndex = 26;
			this->label_lh_cal->Text = L"Калории:";
			// 
			// Lunch_tabl
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Lunch_tabl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->Lunch_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Lunch_tabl->DefaultCellStyle = dataGridViewCellStyle5;
			this->Lunch_tabl->EnableHeadersVisualStyles = false;
			this->Lunch_tabl->Location = System::Drawing::Point(28, 297);
			this->Lunch_tabl->Name = L"Lunch_tabl";
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Lunch_tabl->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->Lunch_tabl->Size = System::Drawing::Size(543, 104);
			this->Lunch_tabl->TabIndex = 25;
			// 
			// label_dr_crbs_dop
			// 
			this->label_dr_crbs_dop->AutoSize = true;
			this->label_dr_crbs_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_dr_crbs_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_crbs_dop->Location = System::Drawing::Point(487, 679);
			this->label_dr_crbs_dop->Name = L"label_dr_crbs_dop";
			this->label_dr_crbs_dop->Size = System::Drawing::Size(24, 16);
			this->label_dr_crbs_dop->TabIndex = 42;
			this->label_dr_crbs_dop->Text = L"X г";
			// 
			// label_dr_fts_dop
			// 
			this->label_dr_fts_dop->AutoSize = true;
			this->label_dr_fts_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_dr_fts_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_fts_dop->Location = System::Drawing::Point(359, 679);
			this->label_dr_fts_dop->Name = L"label_dr_fts_dop";
			this->label_dr_fts_dop->Size = System::Drawing::Size(24, 16);
			this->label_dr_fts_dop->TabIndex = 41;
			this->label_dr_fts_dop->Text = L"X г";
			// 
			// label_dr_pr_dop
			// 
			this->label_dr_pr_dop->AutoSize = true;
			this->label_dr_pr_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dr_pr_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_pr_dop->Location = System::Drawing::Point(222, 679);
			this->label_dr_pr_dop->Name = L"label_dr_pr_dop";
			this->label_dr_pr_dop->Size = System::Drawing::Size(24, 16);
			this->label_dr_pr_dop->TabIndex = 40;
			this->label_dr_pr_dop->Text = L"X г";
			// 
			// label_dr_cal_dop
			// 
			this->label_dr_cal_dop->AutoSize = true;
			this->label_dr_cal_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_dr_cal_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_cal_dop->Location = System::Drawing::Point(86, 679);
			this->label_dr_cal_dop->Name = L"label_dr_cal_dop";
			this->label_dr_cal_dop->Size = System::Drawing::Size(41, 16);
			this->label_dr_cal_dop->TabIndex = 39;
			this->label_dr_cal_dop->Text = L"X кал";
			// 
			// label_dr_crbs
			// 
			this->label_dr_crbs->AutoSize = true;
			this->label_dr_crbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dr_crbs->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_crbs->Location = System::Drawing::Point(465, 651);
			this->label_dr_crbs->Name = L"label_dr_crbs";
			this->label_dr_crbs->Size = System::Drawing::Size(74, 16);
			this->label_dr_crbs->TabIndex = 38;
			this->label_dr_crbs->Text = L"Углеводы:";
			// 
			// label_dr_fts
			// 
			this->label_dr_fts->AutoSize = true;
			this->label_dr_fts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dr_fts->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_fts->Location = System::Drawing::Point(348, 651);
			this->label_dr_fts->Name = L"label_dr_fts";
			this->label_dr_fts->Size = System::Drawing::Size(48, 16);
			this->label_dr_fts->TabIndex = 37;
			this->label_dr_fts->Text = L"Жиры:";
			// 
			// label_dr_pr
			// 
			this->label_dr_pr->AutoSize = true;
			this->label_dr_pr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dr_pr->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_pr->Location = System::Drawing::Point(209, 651);
			this->label_dr_pr->Name = L"label_dr_pr";
			this->label_dr_pr->Size = System::Drawing::Size(50, 16);
			this->label_dr_pr->TabIndex = 36;
			this->label_dr_pr->Text = L"Белки:";
			// 
			// label_dr_cal
			// 
			this->label_dr_cal->AutoSize = true;
			this->label_dr_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_dr_cal->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_dr_cal->Location = System::Drawing::Point(73, 651);
			this->label_dr_cal->Name = L"label_dr_cal";
			this->label_dr_cal->Size = System::Drawing::Size(66, 16);
			this->label_dr_cal->TabIndex = 35;
			this->label_dr_cal->Text = L"Калории:";
			// 
			// Dinner_tabl
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Dinner_tabl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->Dinner_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Dinner_tabl->DefaultCellStyle = dataGridViewCellStyle8;
			this->Dinner_tabl->EnableHeadersVisualStyles = false;
			this->Dinner_tabl->Location = System::Drawing::Point(28, 527);
			this->Dinner_tabl->Name = L"Dinner_tabl";
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Dinner_tabl->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->Dinner_tabl->Size = System::Drawing::Size(543, 104);
			this->Dinner_tabl->TabIndex = 34;
			// 
			// label_snk_crbs_dop
			// 
			this->label_snk_crbs_dop->AutoSize = true;
			this->label_snk_crbs_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_snk_crbs_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_crbs_dop->Location = System::Drawing::Point(487, 918);
			this->label_snk_crbs_dop->Name = L"label_snk_crbs_dop";
			this->label_snk_crbs_dop->Size = System::Drawing::Size(24, 16);
			this->label_snk_crbs_dop->TabIndex = 51;
			this->label_snk_crbs_dop->Text = L"X г";
			// 
			// label_snk_fts_dop
			// 
			this->label_snk_fts_dop->AutoSize = true;
			this->label_snk_fts_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_snk_fts_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_fts_dop->Location = System::Drawing::Point(359, 918);
			this->label_snk_fts_dop->Name = L"label_snk_fts_dop";
			this->label_snk_fts_dop->Size = System::Drawing::Size(24, 16);
			this->label_snk_fts_dop->TabIndex = 50;
			this->label_snk_fts_dop->Text = L"X г";
			// 
			// label_snk_pr_dop
			// 
			this->label_snk_pr_dop->AutoSize = true;
			this->label_snk_pr_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_snk_pr_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_pr_dop->Location = System::Drawing::Point(222, 918);
			this->label_snk_pr_dop->Name = L"label_snk_pr_dop";
			this->label_snk_pr_dop->Size = System::Drawing::Size(24, 16);
			this->label_snk_pr_dop->TabIndex = 49;
			this->label_snk_pr_dop->Text = L"X г";
			// 
			// label_snk_cal_dop
			// 
			this->label_snk_cal_dop->AutoSize = true;
			this->label_snk_cal_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_snk_cal_dop->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_cal_dop->Location = System::Drawing::Point(86, 918);
			this->label_snk_cal_dop->Name = L"label_snk_cal_dop";
			this->label_snk_cal_dop->Size = System::Drawing::Size(41, 16);
			this->label_snk_cal_dop->TabIndex = 48;
			this->label_snk_cal_dop->Text = L"X кал";
			// 
			// label_snk_crbs
			// 
			this->label_snk_crbs->AutoSize = true;
			this->label_snk_crbs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snk_crbs->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_crbs->Location = System::Drawing::Point(465, 890);
			this->label_snk_crbs->Name = L"label_snk_crbs";
			this->label_snk_crbs->Size = System::Drawing::Size(74, 16);
			this->label_snk_crbs->TabIndex = 47;
			this->label_snk_crbs->Text = L"Углеводы:";
			// 
			// label_snk_fts
			// 
			this->label_snk_fts->AutoSize = true;
			this->label_snk_fts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snk_fts->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_fts->Location = System::Drawing::Point(348, 890);
			this->label_snk_fts->Name = L"label_snk_fts";
			this->label_snk_fts->Size = System::Drawing::Size(48, 16);
			this->label_snk_fts->TabIndex = 46;
			this->label_snk_fts->Text = L"Жиры:";
			// 
			// label_snk_pr
			// 
			this->label_snk_pr->AutoSize = true;
			this->label_snk_pr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snk_pr->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_pr->Location = System::Drawing::Point(209, 890);
			this->label_snk_pr->Name = L"label_snk_pr";
			this->label_snk_pr->Size = System::Drawing::Size(50, 16);
			this->label_snk_pr->TabIndex = 45;
			this->label_snk_pr->Text = L"Белки:";
			// 
			// label_snk_cal
			// 
			this->label_snk_cal->AutoSize = true;
			this->label_snk_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_snk_cal->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label_snk_cal->Location = System::Drawing::Point(73, 890);
			this->label_snk_cal->Name = L"label_snk_cal";
			this->label_snk_cal->Size = System::Drawing::Size(66, 16);
			this->label_snk_cal->TabIndex = 44;
			this->label_snk_cal->Text = L"Калории:";
			// 
			// Snack_tabl
			// 
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Snack_tabl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->Snack_tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->Snack_tabl->DefaultCellStyle = dataGridViewCellStyle11;
			this->Snack_tabl->EnableHeadersVisualStyles = false;
			this->Snack_tabl->Location = System::Drawing::Point(28, 766);
			this->Snack_tabl->Name = L"Snack_tabl";
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::Silver;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->Snack_tabl->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->Snack_tabl->Size = System::Drawing::Size(543, 104);
			this->Snack_tabl->TabIndex = 43;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(289, 952);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 52;
			this->label1->Text = L"label25";
			// 
			// button_report
			// 
			this->button_report->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_report->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->button_report->Location = System::Drawing::Point(203, 968);
			this->button_report->Name = L"button_report";
			this->button_report->Size = System::Drawing::Size(206, 50);
			this->button_report->TabIndex = 53;
			this->button_report->Text = L"Сформировать отчёт о дне";
			this->button_report->UseVisualStyleBackColor = true;
			this->button_report->Click += gcnew System::EventHandler(this, &Diary::button_report_Click);
			// 
			// Diary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(609, 1033);
			this->Controls->Add(this->button_report);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_snk_crbs_dop);
			this->Controls->Add(this->label_snk_fts_dop);
			this->Controls->Add(this->label_snk_pr_dop);
			this->Controls->Add(this->label_snk_cal_dop);
			this->Controls->Add(this->label_snk_crbs);
			this->Controls->Add(this->label_snk_fts);
			this->Controls->Add(this->label_snk_pr);
			this->Controls->Add(this->label_snk_cal);
			this->Controls->Add(this->Snack_tabl);
			this->Controls->Add(this->label_dr_crbs_dop);
			this->Controls->Add(this->label_dr_fts_dop);
			this->Controls->Add(this->label_dr_pr_dop);
			this->Controls->Add(this->label_dr_cal_dop);
			this->Controls->Add(this->label_dr_crbs);
			this->Controls->Add(this->label_dr_fts);
			this->Controls->Add(this->label_dr_pr);
			this->Controls->Add(this->label_dr_cal);
			this->Controls->Add(this->Dinner_tabl);
			this->Controls->Add(this->label_lh_crbs_dop);
			this->Controls->Add(this->label_lh_fts_dop);
			this->Controls->Add(this->label_lh_pr_dop);
			this->Controls->Add(this->label_lh_cal_dop);
			this->Controls->Add(this->label_lh_crbs);
			this->Controls->Add(this->label_lh_fts);
			this->Controls->Add(this->label_lh_pr);
			this->Controls->Add(this->label_lh_cal);
			this->Controls->Add(this->Lunch_tabl);
			this->Controls->Add(this->label_br_crbs_dop);
			this->Controls->Add(this->label_br_fts_dop);
			this->Controls->Add(this->label_br_pr_dop);
			this->Controls->Add(this->label_br_cal_dop);
			this->Controls->Add(this->label_br_crbs);
			this->Controls->Add(this->label_br_fts);
			this->Controls->Add(this->label_br_pr);
			this->Controls->Add(this->label_br_cal);
			this->Controls->Add(this->label_snack_add);
			this->Controls->Add(this->textBox_snack);
			this->Controls->Add(this->label_dinner_add);
			this->Controls->Add(this->textBox_dinner);
			this->Controls->Add(this->label_lunch_add);
			this->Controls->Add(this->textBox_lunch);
			this->Controls->Add(this->label_breakfast_add);
			this->Controls->Add(this->Breakfast_tabl);
			this->Controls->Add(this->textBox_breakfast);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Diary";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Дневник питания";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Diary::Diary_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Diary::Diary_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &Diary::Diary_MouseEnter);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Breakfast_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lunch_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dinner_tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Snack_tabl))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Diary_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Owner->Show();
	}

	private: System::Void Diary_Load(System::Object^ sender, System::EventArgs^ e) {
		// Создаём массив ссылок на DataGridView
		array<DataGridView^>^ dgvArray = { Breakfast_tabl, Dinner_tabl, Lunch_tabl, Snack_tabl};

		// Используем цикл for each для инициализации каждой таблицы
		for each (DataGridView ^ dgv in dgvArray) {
			dgv->Columns->Add("Name", "Название");
			dgv->Columns->Add("Calories", "Калории");
			dgv->Columns->Add("Proteins", "Белки");
			dgv->Columns->Add("Fats", "Жиры");
			dgv->Columns->Add("Carbs", "Углеводы");
		}	
	}

	private: void OpenAddIngredientForm(String^ mealType) {
		// Открываем форму для добавления ингредиента
		FindIng^ Ingform = gcnew FindIng(mealType, userData);
		Ingform->Show();
		Ingform->Owner = this;
		this->Hide();
	}

	private: System::Void label_breakfast_add_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenAddIngredientForm("breakfast");
	}

	private: System::Void label_lunch_add_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenAddIngredientForm("lunch");
	}

	private: System::Void label_dinner_add_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenAddIngredientForm("dinner");
	}

	private: System::Void label_snack_add_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenAddIngredientForm("snack");
	}

	private: void UpdateAllDataGridViews()
	{
		// Обновление каждого DataGridView
		UpdateDataGridView(Breakfast_tabl, "breakfast");
		UpdateDataGridView(Dinner_tabl, "dinner");
		UpdateDataGridView(Lunch_tabl, "lunch");
		UpdateDataGridView(Snack_tabl, "snack");
	}


	private:
		// Метод для обновления одного DataGridView с данными из файла
		void UpdateDataGridView(DataGridView^ gridView, String^ mealType)
		{
			// Получаем имя пользователя из класса UserName
			String^ userName = userData->UserName;

			// Составляем путь к файлу относительно папки проекта
			String^ filePath = "users\\" + userName + "\\" + mealType + ".txt";

			// Чтение всех строк файла
			array<String^>^ lines = File::ReadAllLines(filePath);

			// Очищаем текущие данные в DataGridView
			gridView->Rows->Clear();

			// Добавляем данные в DataGridView
			for (int i = 0; i < lines->Length; i++)
			{
				// Разделяем строку на части по точке с запятой
				array<String^>^ columns = lines[i]->Split(';');

				// Проверяем, что данные правильно разделены
				if (columns->Length == 6)
				{
					// Преобразуем числа с запятой в формат с точкой (для использования в .NET)
					double calories = Convert::ToDouble(columns[1]);
					double protein = Convert::ToDouble(columns[2]);
					double fat = Convert::ToDouble(columns[3]);
					double carbs = Convert::ToDouble(columns[4]);

					// Добавляем строку в DataGridView: Название, Калории, Белки, Жиры, Углеводы
					gridView->Rows->Add(columns[0], columns[1], columns[2], columns[3], columns[4]);
				}
			}
		}

	private: void CalculateMacros()
	{
		// Инициализация переменных для сумм
		double totalCalories = 0;
		double totalProteins = 0;
		double totalFats = 0;
		double totalCarbs = 0;

		for (int i = 0; i < Breakfast_tabl->Rows->Count - 1; ++i)
		{
			totalCalories += Convert::ToDouble(Breakfast_tabl->Rows[i]->Cells["Calories"]->Value);
			totalProteins += Convert::ToDouble(Breakfast_tabl->Rows[i]->Cells["Proteins"]->Value);
			totalFats += Convert::ToDouble(Breakfast_tabl->Rows[i]->Cells["Fats"]->Value);
			totalCarbs += Convert::ToDouble(Breakfast_tabl->Rows[i]->Cells["Carbs"]->Value);
		}

		this->label_br_cal_dop->Text = totalCalories.ToString() + "кал";
		this->label_br_pr_dop->Text = totalProteins.ToString() + "г";
		this->label_br_fts_dop->Text = totalFats.ToString() + "г";
		this->label_br_crbs_dop->Text = totalCarbs.ToString() + "г";

		totalCalories = totalProteins = totalFats = totalCarbs = 0;

		for (int i = 0; i < Lunch_tabl->Rows->Count - 1; ++i)
		{
			totalCalories += Convert::ToDouble(Lunch_tabl->Rows[i]->Cells["Calories"]->Value);
			totalProteins += Convert::ToDouble(Lunch_tabl->Rows[i]->Cells["Proteins"]->Value);
			totalFats += Convert::ToDouble(Lunch_tabl->Rows[i]->Cells["Fats"]->Value);
			totalCarbs += Convert::ToDouble(Lunch_tabl->Rows[i]->Cells["Carbs"]->Value);
		}

		this->label_lh_cal_dop->Text = totalCalories.ToString() + "кал";
		this->label_lh_pr_dop->Text = totalProteins.ToString() + "г";
		this->label_lh_fts_dop->Text = totalFats.ToString() + "г";
		this->label_lh_crbs_dop->Text = totalCarbs.ToString() + "г";

		totalCalories = totalProteins = totalFats = totalCarbs = 0;

		for (int i = 0; i < Dinner_tabl->Rows->Count - 1; ++i)
		{
			totalCalories += Convert::ToDouble(Dinner_tabl->Rows[i]->Cells["Calories"]->Value);
			totalProteins += Convert::ToDouble(Dinner_tabl->Rows[i]->Cells["Proteins"]->Value);
			totalFats += Convert::ToDouble(Dinner_tabl->Rows[i]->Cells["Fats"]->Value);
			totalCarbs += Convert::ToDouble(Dinner_tabl->Rows[i]->Cells["Carbs"]->Value);
		}

		this->label_dr_cal_dop->Text = totalCalories.ToString() + "кал";
		this->label_dr_pr_dop->Text = totalProteins.ToString() + "г";
		this->label_dr_fts_dop->Text = totalFats.ToString() + "г";
		this->label_dr_crbs_dop->Text = totalCarbs.ToString() + "г";

		totalCalories = totalProteins = totalFats = totalCarbs = 0;

		for (int i = 0; i < Snack_tabl->Rows->Count - 1; ++i)
		{
			totalCalories += Convert::ToDouble(Snack_tabl->Rows[i]->Cells["Calories"]->Value);
			totalProteins += Convert::ToDouble(Snack_tabl->Rows[i]->Cells["Proteins"]->Value);
			totalFats += Convert::ToDouble(Snack_tabl->Rows[i]->Cells["Fats"]->Value);
			totalCarbs += Convert::ToDouble(Snack_tabl->Rows[i]->Cells["Carbs"]->Value);
		}

		this->label_snk_cal_dop->Text = totalCalories.ToString() + "кал";
		this->label_snk_pr_dop->Text = totalProteins.ToString() + "г";
		this->label_snk_fts_dop->Text = totalFats.ToString() + "г";
		this->label_snk_crbs_dop->Text = totalCarbs.ToString() + "г";
	}

	public: void CalculateAndSaveDiary() {
		DiaryHandler^ handler = gcnew DiaryHandler();

		// Сбрасываем общие значения
		handler->ResetTotals();

		// Вычисляем общие значения для всех таблиц
		handler->CalculateTotals(Breakfast_tabl);
		handler->CalculateTotals(Lunch_tabl);
		handler->CalculateTotals(Dinner_tabl);
		handler->CalculateTotals(Snack_tabl);

		// Получаем итоговые значения
		double totalCalories = handler->GetTotalCalories();
		double totalProteins = handler->GetTotalProteins();
		double totalFats = handler->GetTotalFats();
		double totalCarbs = handler->GetTotalCarbs();

		// Получаем текущую дату
		String^ currentDate = DateTime::Now.ToString("dd-MM-yyyy");

		// Читаем существующий файл Diary.txt
		// Получаем имя пользователя из класса UserName
		String^ userName = userData->UserName;
		// Составляем путь к файлу относительно папки проекта
		String^ diaryPath = "users\\" + userName + "\\" + "Diary.txt";
		array<String^>^ lines = File::Exists(diaryPath) ? File::ReadAllLines(diaryPath) : gcnew array<String^>(0);

		// Проверяем, есть ли текущая дата в файле
		bool dateExists = false;
		for each (String ^ line in lines) {
			if (line->StartsWith(currentDate)) {
				dateExists = true;
				break;
			}
		}

		// Формируем строку для записи
		String^ newEntry = currentDate + "; " + totalCalories + "; " + totalProteins + "; " + totalFats + "; " + totalCarbs;

		if (!dateExists) {
			// Если даты нет, добавляем её в файл
			StreamWriter^ writer = gcnew StreamWriter(diaryPath, true);
			writer->WriteLine(newEntry);
			writer->Close();
		}
		else {
			// Если дата есть, перезаписываем данные
			for (int i = 0; i < lines->Length; ++i) {
				if (lines[i]->StartsWith(currentDate)) {
					lines[i] = newEntry;
					break;
				}
			}
			File::WriteAllLines(diaryPath, lines);
		}
	}

	private: System::Void Diary_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		UpdateAllDataGridViews(); //Для обновления таблиц

		CalculateMacros(); // Для обновления label

		CalculateAndSaveDiary(); // Для обновления diary.txt
	}
	private: System::Void button_report_Click(System::Object^ sender, System::EventArgs^ e) {
		DiaryHandler^ handler = gcnew DiaryHandler();

		// Сбрасываем общие значения
		handler->ResetTotals();

		// Вычисляем общие значения для всех таблиц
		handler->CalculateTotals(Breakfast_tabl);
		handler->CalculateTotals(Lunch_tabl);
		handler->CalculateTotals(Dinner_tabl);
		handler->CalculateTotals(Snack_tabl);

		// Получаем итоговые значения
		double totalCalories = handler->GetTotalCalories();
		double totalProteins = handler->GetTotalProteins();
		double totalFats = handler->GetTotalFats();
		double totalCarbs = handler->GetTotalCarbs();

		// Формируем сообщение для пользователя
		String^ message = "Ваши дневные показатели:\n" +
			"Калории: " + totalCalories.ToString("F2") + "\n" +
			"Белки: " + totalProteins.ToString("F2") + " г\n" +
			"Жиры: " + totalFats.ToString("F2") + " г\n" +
			"Углеводы: " + totalCarbs.ToString("F2") + " г";

		// Показать сообщение
		MessageBox::Show(message, "Дневная сводка", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
