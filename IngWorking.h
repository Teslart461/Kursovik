#pragma once

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для IngWorking
	/// </summary>
	public ref class IngWorking : public System::Windows::Forms::Form
	{
	public:
		IngWorking(void)
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
		~IngWorking()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox_red_ing;
	private: System::Windows::Forms::CheckBox^ checkBox_del_ing;
	private: System::Windows::Forms::Label^ label_action;


	private: System::Windows::Forms::CheckBox^ checkBox_add_ing;
	private: System::Windows::Forms::TextBox^ textBox_fibers;
	private: System::Windows::Forms::Label^ label_fiber;
	private: System::Windows::Forms::TextBox^ textBox_carbs;
	private: System::Windows::Forms::Label^ label_cals;
	private: System::Windows::Forms::TextBox^ textBox_fats;
	private: System::Windows::Forms::Label^ label_fats;
	private: System::Windows::Forms::TextBox^ textBox_proteins;
	private: System::Windows::Forms::Label^ label_proteins;
	private: System::Windows::Forms::TextBox^ textBox_cal;
	private: System::Windows::Forms::Label^ label_cal;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label_name;



	private: System::Windows::Forms::Label^ label_gramm_dop_1;

	private: System::Windows::Forms::Label^ label_cal_dop;
	private: System::Windows::Forms::Label^ label_gramm_dop_2;
	private: System::Windows::Forms::Label^ label_gramm_dop_4;
	private: System::Windows::Forms::Label^ label_gramm_dop_3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button_redact;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label_del_or_red;
	private: System::Windows::Forms::Button^ button_ok;


	private: System::Windows::Forms::TextBox^ textBox_name_search;
	private: System::Windows::Forms::Button^ button_cancel;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox_red_ing = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_del_ing = (gcnew System::Windows::Forms::CheckBox());
			this->label_action = (gcnew System::Windows::Forms::Label());
			this->checkBox_add_ing = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_fibers = (gcnew System::Windows::Forms::TextBox());
			this->label_fiber = (gcnew System::Windows::Forms::Label());
			this->textBox_carbs = (gcnew System::Windows::Forms::TextBox());
			this->label_cals = (gcnew System::Windows::Forms::Label());
			this->textBox_fats = (gcnew System::Windows::Forms::TextBox());
			this->label_fats = (gcnew System::Windows::Forms::Label());
			this->textBox_proteins = (gcnew System::Windows::Forms::TextBox());
			this->label_proteins = (gcnew System::Windows::Forms::Label());
			this->textBox_cal = (gcnew System::Windows::Forms::TextBox());
			this->label_cal = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_gramm_dop_1 = (gcnew System::Windows::Forms::Label());
			this->label_cal_dop = (gcnew System::Windows::Forms::Label());
			this->label_gramm_dop_2 = (gcnew System::Windows::Forms::Label());
			this->label_gramm_dop_4 = (gcnew System::Windows::Forms::Label());
			this->label_gramm_dop_3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button_cancel = (gcnew System::Windows::Forms::Button());
			this->button_redact = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button_ok = (gcnew System::Windows::Forms::Button());
			this->textBox_name_search = (gcnew System::Windows::Forms::TextBox());
			this->label_del_or_red = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox_red_ing);
			this->panel1->Controls->Add(this->checkBox_del_ing);
			this->panel1->Controls->Add(this->label_action);
			this->panel1->Controls->Add(this->checkBox_add_ing);
			this->panel1->Location = System::Drawing::Point(15, 15);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(241, 194);
			this->panel1->TabIndex = 1;
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &IngWorking::panel1_MouseEnter);
			// 
			// checkBox_red_ing
			// 
			this->checkBox_red_ing->AutoSize = true;
			this->checkBox_red_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_red_ing->Location = System::Drawing::Point(25, 149);
			this->checkBox_red_ing->Name = L"checkBox_red_ing";
			this->checkBox_red_ing->Size = System::Drawing::Size(207, 20);
			this->checkBox_red_ing->TabIndex = 3;
			this->checkBox_red_ing->Text = L"Редактировать ингредиент";
			this->checkBox_red_ing->UseVisualStyleBackColor = true;
			// 
			// checkBox_del_ing
			// 
			this->checkBox_del_ing->AutoSize = true;
			this->checkBox_del_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_del_ing->Location = System::Drawing::Point(25, 104);
			this->checkBox_del_ing->Name = L"checkBox_del_ing";
			this->checkBox_del_ing->Size = System::Drawing::Size(161, 20);
			this->checkBox_del_ing->TabIndex = 2;
			this->checkBox_del_ing->Text = L"Удалить ингредиент";
			this->checkBox_del_ing->UseVisualStyleBackColor = true;
			// 
			// label_action
			// 
			this->label_action->AutoSize = true;
			this->label_action->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_action->Location = System::Drawing::Point(21, 17);
			this->label_action->Name = L"label_action";
			this->label_action->Size = System::Drawing::Size(197, 20);
			this->label_action->TabIndex = 1;
			this->label_action->Text = L"Что вы хотите сделать\?";
			// 
			// checkBox_add_ing
			// 
			this->checkBox_add_ing->AutoSize = true;
			this->checkBox_add_ing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_add_ing->Location = System::Drawing::Point(25, 60);
			this->checkBox_add_ing->Name = L"checkBox_add_ing";
			this->checkBox_add_ing->Size = System::Drawing::Size(169, 20);
			this->checkBox_add_ing->TabIndex = 0;
			this->checkBox_add_ing->Text = L"Добавить ингредиент";
			this->checkBox_add_ing->UseVisualStyleBackColor = true;
			// 
			// textBox_fibers
			// 
			this->textBox_fibers->Location = System::Drawing::Point(213, 365);
			this->textBox_fibers->Name = L"textBox_fibers";
			this->textBox_fibers->Size = System::Drawing::Size(75, 20);
			this->textBox_fibers->TabIndex = 25;
			// 
			// label_fiber
			// 
			this->label_fiber->AutoSize = true;
			this->label_fiber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_fiber->Location = System::Drawing::Point(22, 366);
			this->label_fiber->Name = L"label_fiber";
			this->label_fiber->Size = System::Drawing::Size(128, 16);
			this->label_fiber->TabIndex = 24;
			this->label_fiber->Text = L"Пищевые волокна:";
			// 
			// textBox_carbs
			// 
			this->textBox_carbs->Location = System::Drawing::Point(213, 296);
			this->textBox_carbs->Name = L"textBox_carbs";
			this->textBox_carbs->Size = System::Drawing::Size(75, 20);
			this->textBox_carbs->TabIndex = 23;
			// 
			// label_cals
			// 
			this->label_cals->AutoSize = true;
			this->label_cals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cals->Location = System::Drawing::Point(22, 297);
			this->label_cals->Name = L"label_cals";
			this->label_cals->Size = System::Drawing::Size(74, 16);
			this->label_cals->TabIndex = 22;
			this->label_cals->Text = L"Углеводы:";
			// 
			// textBox_fats
			// 
			this->textBox_fats->Location = System::Drawing::Point(213, 223);
			this->textBox_fats->Name = L"textBox_fats";
			this->textBox_fats->Size = System::Drawing::Size(75, 20);
			this->textBox_fats->TabIndex = 21;
			// 
			// label_fats
			// 
			this->label_fats->AutoSize = true;
			this->label_fats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_fats->Location = System::Drawing::Point(22, 224);
			this->label_fats->Name = L"label_fats";
			this->label_fats->Size = System::Drawing::Size(48, 16);
			this->label_fats->TabIndex = 20;
			this->label_fats->Text = L"Жиры:";
			// 
			// textBox_proteins
			// 
			this->textBox_proteins->Location = System::Drawing::Point(213, 154);
			this->textBox_proteins->Name = L"textBox_proteins";
			this->textBox_proteins->Size = System::Drawing::Size(75, 20);
			this->textBox_proteins->TabIndex = 19;
			// 
			// label_proteins
			// 
			this->label_proteins->AutoSize = true;
			this->label_proteins->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_proteins->Location = System::Drawing::Point(22, 155);
			this->label_proteins->Name = L"label_proteins";
			this->label_proteins->Size = System::Drawing::Size(50, 16);
			this->label_proteins->TabIndex = 18;
			this->label_proteins->Text = L"Белки:";
			// 
			// textBox_cal
			// 
			this->textBox_cal->Location = System::Drawing::Point(213, 87);
			this->textBox_cal->Name = L"textBox_cal";
			this->textBox_cal->Size = System::Drawing::Size(75, 20);
			this->textBox_cal->TabIndex = 17;
			// 
			// label_cal
			// 
			this->label_cal->AutoSize = true;
			this->label_cal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cal->Location = System::Drawing::Point(22, 88);
			this->label_cal->Name = L"label_cal";
			this->label_cal->Size = System::Drawing::Size(103, 16);
			this->label_cal->TabIndex = 16;
			this->label_cal->Text = L"Калорийность:";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(213, 20);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_name->Size = System::Drawing::Size(180, 20);
			this->textBox_name->TabIndex = 15;
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(22, 21);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(164, 16);
			this->label_name->TabIndex = 14;
			this->label_name->Text = L"Название ингредиента:";
			// 
			// label_gramm_dop_1
			// 
			this->label_gramm_dop_1->AutoSize = true;
			this->label_gramm_dop_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_gramm_dop_1->Location = System::Drawing::Point(304, 155);
			this->label_gramm_dop_1->Name = L"label_gramm_dop_1";
			this->label_gramm_dop_1->Size = System::Drawing::Size(13, 16);
			this->label_gramm_dop_1->TabIndex = 27;
			this->label_gramm_dop_1->Text = L"г";
			// 
			// label_cal_dop
			// 
			this->label_cal_dop->AutoSize = true;
			this->label_cal_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_cal_dop->Location = System::Drawing::Point(304, 88);
			this->label_cal_dop->Name = L"label_cal_dop";
			this->label_cal_dop->Size = System::Drawing::Size(30, 16);
			this->label_cal_dop->TabIndex = 26;
			this->label_cal_dop->Text = L"кал";
			// 
			// label_gramm_dop_2
			// 
			this->label_gramm_dop_2->AutoSize = true;
			this->label_gramm_dop_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_gramm_dop_2->Location = System::Drawing::Point(304, 224);
			this->label_gramm_dop_2->Name = L"label_gramm_dop_2";
			this->label_gramm_dop_2->Size = System::Drawing::Size(13, 16);
			this->label_gramm_dop_2->TabIndex = 28;
			this->label_gramm_dop_2->Text = L"г";
			// 
			// label_gramm_dop_4
			// 
			this->label_gramm_dop_4->AutoSize = true;
			this->label_gramm_dop_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_gramm_dop_4->Location = System::Drawing::Point(304, 366);
			this->label_gramm_dop_4->Name = L"label_gramm_dop_4";
			this->label_gramm_dop_4->Size = System::Drawing::Size(13, 16);
			this->label_gramm_dop_4->TabIndex = 30;
			this->label_gramm_dop_4->Text = L"г";
			// 
			// label_gramm_dop_3
			// 
			this->label_gramm_dop_3->AutoSize = true;
			this->label_gramm_dop_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_gramm_dop_3->Location = System::Drawing::Point(304, 297);
			this->label_gramm_dop_3->Name = L"label_gramm_dop_3";
			this->label_gramm_dop_3->Size = System::Drawing::Size(13, 16);
			this->label_gramm_dop_3->TabIndex = 29;
			this->label_gramm_dop_3->Text = L"г";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button_cancel);
			this->panel2->Controls->Add(this->button_redact);
			this->panel2->Controls->Add(this->button_delete);
			this->panel2->Controls->Add(this->button_add);
			this->panel2->Controls->Add(this->label_name);
			this->panel2->Controls->Add(this->label_gramm_dop_4);
			this->panel2->Controls->Add(this->textBox_name);
			this->panel2->Controls->Add(this->label_gramm_dop_3);
			this->panel2->Controls->Add(this->label_cal);
			this->panel2->Controls->Add(this->label_gramm_dop_2);
			this->panel2->Controls->Add(this->textBox_cal);
			this->panel2->Controls->Add(this->label_gramm_dop_1);
			this->panel2->Controls->Add(this->label_proteins);
			this->panel2->Controls->Add(this->label_cal_dop);
			this->panel2->Controls->Add(this->textBox_proteins);
			this->panel2->Controls->Add(this->textBox_fibers);
			this->panel2->Controls->Add(this->label_fats);
			this->panel2->Controls->Add(this->label_fiber);
			this->panel2->Controls->Add(this->textBox_fats);
			this->panel2->Controls->Add(this->textBox_carbs);
			this->panel2->Controls->Add(this->label_cals);
			this->panel2->Location = System::Drawing::Point(40, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(418, 516);
			this->panel2->TabIndex = 31;
			// 
			// button_cancel
			// 
			this->button_cancel->BackColor = System::Drawing::Color::Gray;
			this->button_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_cancel->Location = System::Drawing::Point(220, 426);
			this->button_cancel->Name = L"button_cancel";
			this->button_cancel->Size = System::Drawing::Size(173, 47);
			this->button_cancel->TabIndex = 34;
			this->button_cancel->Text = L"Отмена";
			this->button_cancel->UseVisualStyleBackColor = false;
			this->button_cancel->Click += gcnew System::EventHandler(this, &IngWorking::button_cancel_Click);
			// 
			// button_redact
			// 
			this->button_redact->BackColor = System::Drawing::Color::Gray;
			this->button_redact->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_redact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_redact->Location = System::Drawing::Point(74, 426);
			this->button_redact->Name = L"button_redact";
			this->button_redact->Size = System::Drawing::Size(79, 47);
			this->button_redact->TabIndex = 33;
			this->button_redact->Text = L"Ок";
			this->button_redact->UseVisualStyleBackColor = false;
			this->button_redact->Click += gcnew System::EventHandler(this, &IngWorking::button_redact_Click);
			// 
			// button_delete
			// 
			this->button_delete->BackColor = System::Drawing::Color::Gray;
			this->button_delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(25, 426);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(173, 47);
			this->button_delete->TabIndex = 32;
			this->button_delete->Text = L"Удалить";
			this->button_delete->UseVisualStyleBackColor = false;
			this->button_delete->Click += gcnew System::EventHandler(this, &IngWorking::button_delete_Click);
			// 
			// button_add
			// 
			this->button_add->BackColor = System::Drawing::Color::Gray;
			this->button_add->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(25, 426);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(173, 47);
			this->button_add->TabIndex = 31;
			this->button_add->Text = L"Добавить";
			this->button_add->UseVisualStyleBackColor = false;
			this->button_add->Click += gcnew System::EventHandler(this, &IngWorking::button_add_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button_ok);
			this->panel3->Controls->Add(this->textBox_name_search);
			this->panel3->Controls->Add(this->label_del_or_red);
			this->panel3->Location = System::Drawing::Point(15, 15);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(241, 196);
			this->panel3->TabIndex = 32;
			// 
			// button_ok
			// 
			this->button_ok->BackColor = System::Drawing::Color::Gray;
			this->button_ok->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ok->Location = System::Drawing::Point(83, 149);
			this->button_ok->Name = L"button_ok";
			this->button_ok->Size = System::Drawing::Size(80, 34);
			this->button_ok->TabIndex = 2;
			this->button_ok->Text = L"Ок";
			this->button_ok->UseVisualStyleBackColor = false;
			this->button_ok->Click += gcnew System::EventHandler(this, &IngWorking::button_ok_Click);
			// 
			// textBox_name_search
			// 
			this->textBox_name_search->Location = System::Drawing::Point(25, 104);
			this->textBox_name_search->MaximumSize = System::Drawing::Size(197, 20);
			this->textBox_name_search->Name = L"textBox_name_search";
			this->textBox_name_search->Size = System::Drawing::Size(197, 20);
			this->textBox_name_search->TabIndex = 1;
			// 
			// label_del_or_red
			// 
			this->label_del_or_red->AutoSize = true;
			this->label_del_or_red->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_del_or_red->Location = System::Drawing::Point(21, 17);
			this->label_del_or_red->Name = L"label_del_or_red";
			this->label_del_or_red->Size = System::Drawing::Size(201, 60);
			this->label_del_or_red->TabIndex = 0;
			this->label_del_or_red->Text = L"Введите название \r\nингредиента,\r\nкоторый хотите удалить:\r\n";
			this->label_del_or_red->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IngWorking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(478, 591);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"IngWorking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Управление ингредиентами";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &IngWorking::IngWorking_FormClosed);
			this->Load += gcnew System::EventHandler(this, &IngWorking::IngWorking_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void IngWorking_Load(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show(L"Добро пожаловать в управление ингредиентами!\n\n"
			L"Здесь вы можете:\n"
			L"- Добавить новый ингредиент в базу.\n"
			L"- Редактировать характеристики существующих ингредиентов.\n"
			L"- Удалить ингредиенты, которые больше не используются.\n\n"
			L"Каждому ингредиенту указываются:\n"
			L"- Название\n"
			L"- Калории\n"
			L"- Белки\n"
			L"- Жиры\n"
			L"- Углеводы\n"
			L"- Пищевые волокна\n\n"
			L"Не забудьте сохранить изменения, чтобы они отразились в базе данных!",
			L"Управление ингредиентами", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->ClientSize = System::Drawing::Size(293, 242);
		this->panel2->Visible = false;
		this->panel3->Visible = false;
	}

	private: System::Void IngWorking_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}

	private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox_add_ing->Checked || checkBox_del_ing->Checked || checkBox_red_ing->Checked) {
			this->panel1->Visible = false;
		}
		if (checkBox_del_ing->Checked) {
			this->ClientSize = System::Drawing::Size(280, 242);
			this->panel3->Visible = true;
			this->label_del_or_red->Text = L"Введите название \r\nингредиента,\r\nкоторый хотите удалить:\r\n";
			this->button_redact->Visible = false;
			this->button_add->Visible = false;
		}
		else if (checkBox_red_ing->Checked) {
			this->ClientSize = System::Drawing::Size(280, 242);
			this->panel3->Visible = true;
			this->label_del_or_red->Text = L"Введите название \r\nингредиента,\r\nкоторый хотите изменить:\r\n";
			this->button_delete->Visible = false;
			this->button_add->Visible = false;
		}
		else if (checkBox_add_ing->Checked) {
			this->panel2->Visible = true;
			this->ClientSize = System::Drawing::Size(510, 594);
			this->button_delete->Visible = false;
			this->button_redact->Visible = false;
		}
	}
	
	private: System::Void button_ok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ingredientName = textBox_name_search->Text;

		if (String::IsNullOrWhiteSpace(ingredientName)) {
			MessageBox::Show("Введите название ингредиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		this->panel3->Visible = false;
		this->ClientSize = System::Drawing::Size(510, 594);
		this->panel2->Visible = true;
		if (checkBox_red_ing->Checked) {
			this->button_redact->Visible = true;
			this->button_cancel->Visible = true;
			this->textBox_name->ReadOnly = true;
		}
		if (checkBox_del_ing->Checked) {
			this->button_delete->Visible = true;
			this->button_cancel->Visible = true;
			this->textBox_name->ReadOnly = true;
			this->textBox_cal->ReadOnly = true;
			this->textBox_proteins->ReadOnly = true;
			this->textBox_fats->ReadOnly = true;
			this->textBox_carbs->ReadOnly = true;
			this->textBox_fibers->ReadOnly = true;
		}

		// Чтение файла
		try {
			array<String^>^ lines = File::ReadAllLines("ingredients.txt");
			bool found = false;

			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 6 && parts[0]->Equals(ingredientName, StringComparison::OrdinalIgnoreCase)) {
					// Заполнение полей для редактирования
					textBox_name->Text = parts[0];
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
				MessageBox::Show("Ингредиент не найден.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
				// Очистка текстовых полей
				ClearTextBoxes();
				DoneIt();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка чтения файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
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

	private: bool IsNumber(String^ text) {
		// Заменяем запятую на точку
		text = text->Replace(".", ",");
		double result;
		return Double::TryParse(text, result) && result >= 0;
	}

	private: System::Void button_redact_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ingredientName = textBox_name->Text;

		try {
			array<String^>^ lines = File::ReadAllLines("ingredients.txt");
			String^ updatedContent = "";
			bool found = false;

			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 6 && parts[0]->Equals(ingredientName, StringComparison::OrdinalIgnoreCase)) {
					// Проверка новых значений
					if (!ValidateInputs()) {
						return;
					}

					// Обновление строки
					String^ updatedLine = String::Format("{0};{1};{2};{3};{4};{5}",
					ingredientName,
					textBox_cal->Text,
					textBox_proteins->Text,
					textBox_fats->Text,
					textBox_carbs->Text,
					textBox_fibers->Text);

					updatedContent += updatedLine + Environment::NewLine;
					found = true;
				}
				else {
					updatedContent += line + Environment::NewLine;
				}
			}

			if (found) {
				File::WriteAllText("ingredients.txt", updatedContent);
				MessageBox::Show("Ингредиент успешно обновлён.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Ингредиент не найден.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			// Очистка текстовых полей
			ClearTextBoxes();
			DoneIt();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка записи файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ingredientName = textBox_name->Text;

		try {
			array<String^>^ lines = File::ReadAllLines("ingredients.txt");
			String^ updatedContent = "";
			bool found = false;

			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 6 && parts[0]->Equals(ingredientName, StringComparison::OrdinalIgnoreCase)) {
					// Пропускаем эту строку (удаляем ингредиент)
					found = true;
				}
				else {
					updatedContent += line + Environment::NewLine;
				}
			}

			if (found) {
				File::WriteAllText("ingredients.txt", updatedContent);
				MessageBox::Show("Ингредиент успешно удалён.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Ингредиент не найден.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

			// Очистка текстовых полей
			ClearTextBoxes();
			DoneIt();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка обработки файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем данные из текстовых полей
		String^ ingredientName = textBox_name->Text;
		String^ calories = textBox_cal->Text;
		String^ proteins = textBox_proteins->Text;
		String^ fats = textBox_fats->Text;
		String^ carbs = textBox_carbs->Text;
		String^ fiber = textBox_fibers->Text;

		// Проверка на заполненность названия
		if (String::IsNullOrWhiteSpace(ingredientName)) {
			MessageBox::Show("Введите название ингредиента.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Проверка других полей
		if (!ValidateInputs()) {
			return;
		}

		try {
			// Проверяем, существует ли ингредиент
			array<String^>^ lines = File::ReadAllLines("ingredients.txt");
			for each (String ^ line in lines) {
				array<String^>^ parts = line->Split(';');
				if (parts->Length >= 1 && parts[0]->Equals(ingredientName, StringComparison::OrdinalIgnoreCase)) {
					MessageBox::Show("Ингредиент с таким названием уже существует.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			// Формируем новую строку для добавления
			String^ newIngredient = String::Format("{0};{1};{2};{3};{4};{5}",
				ingredientName, calories, proteins, fats, carbs, fiber);

			// Добавляем строку в файл
			File::AppendAllText("ingredients.txt", newIngredient + Environment::NewLine);
			MessageBox::Show("Ингредиент успешно добавлен.", "Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Очистка текстовых полей
			ClearTextBoxes();
			DoneIt();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Ошибка записи файла: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

		private: void ClearTextBoxes() {
		// Очистка всех текстовых полей
		textBox_name_search->Clear();
		textBox_name->Clear();
		textBox_cal->Clear();
		textBox_proteins->Clear();
		textBox_fats->Clear();
		textBox_carbs->Clear();
		textBox_fibers->Clear();
		}

		private: void DoneIt() {
			this->ClientSize = System::Drawing::Size(293, 242);
			this->panel2->Visible = false;
			this->panel3->Visible = false;
			this->panel1->Visible = true;
			this->checkBox_red_ing->Checked = false;
			this->checkBox_del_ing->Checked = false;
			this->checkBox_add_ing->Checked = false;

			this->textBox_name->ReadOnly = false;
			this->textBox_cal->ReadOnly = false;
			this->textBox_proteins->ReadOnly = false;
			this->textBox_fats->ReadOnly = false;
			this->textBox_carbs->ReadOnly = false;
			this->textBox_fibers->ReadOnly = false;

			this->button_delete->Visible = true;
			this->button_redact->Visible = true;
			this->button_add->Visible = true;
		}

	private: System::Void button_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистка текстовых полей
		ClearTextBoxes();
		DoneIt();
	}
};
}
