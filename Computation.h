#pragma once

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Computation
	/// </summary>
	public ref class Computation : public System::Windows::Forms::Form
	{
	public:
		Computation(void)
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
		~Computation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:


	private: System::Windows::Forms::Label^ label_choice_gender;
	private: System::Windows::Forms::Label^ label_weight;
	private: System::Windows::Forms::Label^ label_height;
	private: System::Windows::Forms::Label^ label_age;
	private: System::Windows::Forms::Label^ label_PhysAct;
	private: System::Windows::Forms::TextBox^ textBox_weight;
	private: System::Windows::Forms::TextBox^ textBox_height;
	private: System::Windows::Forms::TextBox^ textBox_age;



	private: System::Windows::Forms::ComboBox^ comboBox_PhysAct;
	private: System::Windows::Forms::Label^ label_kg;
	private: System::Windows::Forms::Label^ label_santim;
	private: System::Windows::Forms::Label^ label_age_dop;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Label^ label_variant;

	private: System::Windows::Forms::Button^ button_comp;
	private: System::Windows::Forms::CheckBox^ checkBox_female;
	private: System::Windows::Forms::CheckBox^ checkBox_male;
	private: System::Windows::Forms::CheckBox^ checkBox_weight_gain;
	private: System::Windows::Forms::CheckBox^ checkBox_weight_loss;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox_female = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_male = (gcnew System::Windows::Forms::CheckBox());
			this->label_choice_gender = (gcnew System::Windows::Forms::Label());
			this->label_weight = (gcnew System::Windows::Forms::Label());
			this->label_height = (gcnew System::Windows::Forms::Label());
			this->label_age = (gcnew System::Windows::Forms::Label());
			this->label_PhysAct = (gcnew System::Windows::Forms::Label());
			this->textBox_weight = (gcnew System::Windows::Forms::TextBox());
			this->textBox_height = (gcnew System::Windows::Forms::TextBox());
			this->textBox_age = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_PhysAct = (gcnew System::Windows::Forms::ComboBox());
			this->label_kg = (gcnew System::Windows::Forms::Label());
			this->label_santim = (gcnew System::Windows::Forms::Label());
			this->label_age_dop = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox_weight_gain = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_weight_loss = (gcnew System::Windows::Forms::CheckBox());
			this->label_variant = (gcnew System::Windows::Forms::Label());
			this->button_comp = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox_female);
			this->panel1->Controls->Add(this->checkBox_male);
			this->panel1->Controls->Add(this->label_choice_gender);
			this->panel1->Location = System::Drawing::Point(168, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(136, 117);
			this->panel1->TabIndex = 0;
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &Computation::panel1_MouseEnter);
			// 
			// checkBox_female
			// 
			this->checkBox_female->AutoSize = true;
			this->checkBox_female->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_female->Location = System::Drawing::Point(19, 84);
			this->checkBox_female->Name = L"checkBox_female";
			this->checkBox_female->Size = System::Drawing::Size(85, 20);
			this->checkBox_female->TabIndex = 2;
			this->checkBox_female->Text = L"Женский";
			this->checkBox_female->UseVisualStyleBackColor = true;
			// 
			// checkBox_male
			// 
			this->checkBox_male->AutoSize = true;
			this->checkBox_male->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox_male->Location = System::Drawing::Point(20, 49);
			this->checkBox_male->Name = L"checkBox_male";
			this->checkBox_male->Size = System::Drawing::Size(84, 20);
			this->checkBox_male->TabIndex = 1;
			this->checkBox_male->Text = L"Мужской";
			this->checkBox_male->UseVisualStyleBackColor = true;
			// 
			// label_choice_gender
			// 
			this->label_choice_gender->AutoSize = true;
			this->label_choice_gender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label_choice_gender->Location = System::Drawing::Point(17, 17);
			this->label_choice_gender->Name = L"label_choice_gender";
			this->label_choice_gender->Size = System::Drawing::Size(102, 16);
			this->label_choice_gender->TabIndex = 0;
			this->label_choice_gender->Text = L"Выберите пол:";
			// 
			// label_weight
			// 
			this->label_weight->AutoSize = true;
			this->label_weight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_weight->Location = System::Drawing::Point(29, 29);
			this->label_weight->Name = L"label_weight";
			this->label_weight->Size = System::Drawing::Size(34, 16);
			this->label_weight->TabIndex = 1;
			this->label_weight->Text = L"Вес:";
			// 
			// label_height
			// 
			this->label_height->AutoSize = true;
			this->label_height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_height->Location = System::Drawing::Point(29, 78);
			this->label_height->Name = L"label_height";
			this->label_height->Size = System::Drawing::Size(41, 16);
			this->label_height->TabIndex = 2;
			this->label_height->Text = L"Рост:";
			// 
			// label_age
			// 
			this->label_age->AutoSize = true;
			this->label_age->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_age->Location = System::Drawing::Point(29, 132);
			this->label_age->Name = L"label_age";
			this->label_age->Size = System::Drawing::Size(65, 16);
			this->label_age->TabIndex = 3;
			this->label_age->Text = L"Возраст:";
			// 
			// label_PhysAct
			// 
			this->label_PhysAct->AutoSize = true;
			this->label_PhysAct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_PhysAct->Location = System::Drawing::Point(244, 33);
			this->label_PhysAct->Name = L"label_PhysAct";
			this->label_PhysAct->Size = System::Drawing::Size(168, 16);
			this->label_PhysAct->TabIndex = 4;
			this->label_PhysAct->Text = L"Физическая активность:";
			// 
			// textBox_weight
			// 
			this->textBox_weight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_weight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_weight->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_weight->Location = System::Drawing::Point(100, 29);
			this->textBox_weight->Name = L"textBox_weight";
			this->textBox_weight->Size = System::Drawing::Size(62, 20);
			this->textBox_weight->TabIndex = 5;
			// 
			// textBox_height
			// 
			this->textBox_height->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_height->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_height->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_height->Location = System::Drawing::Point(100, 78);
			this->textBox_height->Name = L"textBox_height";
			this->textBox_height->Size = System::Drawing::Size(62, 20);
			this->textBox_height->TabIndex = 6;
			// 
			// textBox_age
			// 
			this->textBox_age->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox_age->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox_age->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->textBox_age->Location = System::Drawing::Point(100, 132);
			this->textBox_age->Name = L"textBox_age";
			this->textBox_age->Size = System::Drawing::Size(62, 20);
			this->textBox_age->TabIndex = 7;
			// 
			// comboBox_PhysAct
			// 
			this->comboBox_PhysAct->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox_PhysAct->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->comboBox_PhysAct->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->comboBox_PhysAct->FormattingEnabled = true;
			this->comboBox_PhysAct->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Малоподвижный образ жизни", L"Легкая активность (1-3 раза в неделю тренировки)",
					L"Умеренная активность (3-5 тренировок в неделю)", L"Высокая активность (6-7 тренировок в неделю)", L"Очень высокая активность (профессиональные спортсмены)"
			});
			this->comboBox_PhysAct->Location = System::Drawing::Point(247, 77);
			this->comboBox_PhysAct->Name = L"comboBox_PhysAct";
			this->comboBox_PhysAct->Size = System::Drawing::Size(214, 21);
			this->comboBox_PhysAct->TabIndex = 8;
			// 
			// label_kg
			// 
			this->label_kg->AutoSize = true;
			this->label_kg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_kg->Location = System::Drawing::Point(168, 33);
			this->label_kg->Name = L"label_kg";
			this->label_kg->Size = System::Drawing::Size(20, 16);
			this->label_kg->TabIndex = 9;
			this->label_kg->Text = L"кг";
			// 
			// label_santim
			// 
			this->label_santim->AutoSize = true;
			this->label_santim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_santim->Location = System::Drawing::Point(168, 82);
			this->label_santim->Name = L"label_santim";
			this->label_santim->Size = System::Drawing::Size(23, 16);
			this->label_santim->TabIndex = 10;
			this->label_santim->Text = L"см";
			// 
			// label_age_dop
			// 
			this->label_age_dop->AutoSize = true;
			this->label_age_dop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_age_dop->Location = System::Drawing::Point(168, 136);
			this->label_age_dop->Name = L"label_age_dop";
			this->label_age_dop->Size = System::Drawing::Size(30, 16);
			this->label_age_dop->TabIndex = 11;
			this->label_age_dop->Text = L"лет";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->checkBox_weight_gain);
			this->panel2->Controls->Add(this->checkBox_weight_loss);
			this->panel2->Controls->Add(this->label_variant);
			this->panel2->Location = System::Drawing::Point(14, 179);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(148, 128);
			this->panel2->TabIndex = 12;
			// 
			// checkBox_weight_gain
			// 
			this->checkBox_weight_gain->AutoSize = true;
			this->checkBox_weight_gain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_weight_gain->Location = System::Drawing::Point(18, 95);
			this->checkBox_weight_gain->Name = L"checkBox_weight_gain";
			this->checkBox_weight_gain->Size = System::Drawing::Size(102, 20);
			this->checkBox_weight_gain->TabIndex = 2;
			this->checkBox_weight_gain->Text = L"Набор веса";
			this->checkBox_weight_gain->UseVisualStyleBackColor = true;
			// 
			// checkBox_weight_loss
			// 
			this->checkBox_weight_loss->AutoSize = true;
			this->checkBox_weight_loss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkBox_weight_loss->Location = System::Drawing::Point(18, 58);
			this->checkBox_weight_loss->Name = L"checkBox_weight_loss";
			this->checkBox_weight_loss->Size = System::Drawing::Size(98, 20);
			this->checkBox_weight_loss->TabIndex = 1;
			this->checkBox_weight_loss->Text = L"Похудение";
			this->checkBox_weight_loss->UseVisualStyleBackColor = true;
			// 
			// label_variant
			// 
			this->label_variant->AutoSize = true;
			this->label_variant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_variant->Location = System::Drawing::Point(17, 20);
			this->label_variant->Name = L"label_variant";
			this->label_variant->Size = System::Drawing::Size(120, 16);
			this->label_variant->TabIndex = 0;
			this->label_variant->Text = L"Выберите режим:";
			// 
			// button_comp
			// 
			this->button_comp->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button_comp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_comp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_comp->Location = System::Drawing::Point(247, 199);
			this->button_comp->Name = L"button_comp";
			this->button_comp->Size = System::Drawing::Size(170, 48);
			this->button_comp->TabIndex = 13;
			this->button_comp->Text = L"Рассчитать";
			this->button_comp->UseVisualStyleBackColor = false;
			this->button_comp->Click += gcnew System::EventHandler(this, &Computation::button_comp_Click);
			// 
			// Computation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(487, 313);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_comp);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label_age_dop);
			this->Controls->Add(this->label_santim);
			this->Controls->Add(this->label_kg);
			this->Controls->Add(this->comboBox_PhysAct);
			this->Controls->Add(this->textBox_age);
			this->Controls->Add(this->textBox_height);
			this->Controls->Add(this->textBox_weight);
			this->Controls->Add(this->label_PhysAct);
			this->Controls->Add(this->label_age);
			this->Controls->Add(this->label_height);
			this->Controls->Add(this->label_weight);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Computation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор калорий";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Computation::Computation_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Computation::Computation_Load);
			this->MouseEnter += gcnew System::EventHandler(this, &Computation::Computation_MouseEnter);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Computation_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(L"Добро пожаловать!\n"
			L"Вы находитесь в разделе, где сможете легко рассчитать свою суточную калорийность.\n"
			L"Просто введите необходимые данные, и вы получите всю важную информацию, которая поможет вам эффективно достичь ваших целей.\n"
			L"Будь то снижение веса, поддержание формы или набор массы.",
			L"Калькулятор калорий", MessageBoxButtons::OK, MessageBoxIcon::Information);
		this->panel2->Visible = false;
		this->button_comp->Visible = false;
		this->label_age->Visible = false;
		this->label_age_dop->Visible = false;
		this->label_height->Visible = false;
		this->label_santim->Visible = false;
		this->label_weight->Visible = false;
		this->label_kg->Visible = false;
		this->label_PhysAct->Visible = false;
		this->textBox_age->Visible = false;
		this->textBox_height->Visible = false;
		this->textBox_weight->Visible = false;
		this->comboBox_PhysAct->Visible = false;

	}
	private: System::Void Computation_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}

	private: System::Void Computation_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void button_comp_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			// Получаем данные из полей
			double weight = Convert::ToDouble(textBox_weight->Text);
			double height = Convert::ToDouble(textBox_height->Text);
			int age = Convert::ToInt32(textBox_age->Text);
			bool isMale = checkBox_male->Checked;

			// Рассчитываем BMR
			double BMR;
			if (isMale)
				BMR = 10 * weight + 6.25 * height - 5 * age + 5;
			else
				BMR = 10 * weight + 6.25 * height - 5 * age - 161;

			// Коэффициенты активности
			double activityFactor;
			switch (comboBox_PhysAct->SelectedIndex)
			{
			case 0: activityFactor = 1.2; break;
			case 1: activityFactor = 1.375; break;
			case 2: activityFactor = 1.55; break;
			case 3: activityFactor = 1.725; break;
			case 4: activityFactor = 1.9; break;
			default: activityFactor = 1.2; break;
			}

			// Расчет TDEE
			double TDEE = BMR * activityFactor;

			// Процентные соотношения для режимов
			double proteinPercent, fatPercent, carbPercent;

			if (checkBox_weight_loss->Checked) {
				// Для похудения
				proteinPercent = 0.3; // 30% калорий из белков
				fatPercent = 0.25;    // 25% калорий из жиров
				carbPercent = 0.45;   // 45% калорий из углеводов
			}
			else if (checkBox_weight_gain->Checked) {
				// Для набора массы
				proteinPercent = 0.25; // 25% калорий из белков
				fatPercent = 0.3;      // 30% калорий из жиров
				carbPercent = 0.45;    // 45% калорий из углеводов
			}
			else {
				// Для поддержания веса
				proteinPercent = 0.2; // 20% калорий из белков
				fatPercent = 0.25;    // 25% калорий из жиров
				carbPercent = 0.55;   // 55% калорий из углеводов
			}

			// Рассчитываем количество калорий и граммов для каждого макронутриента
			double proteinCalories = TDEE * proteinPercent;
			double fatCalories = TDEE * fatPercent;
			double carbCalories = TDEE * carbPercent;

			double protein = proteinCalories / 4; // Белки: 4 ккал на грамм
			double fat = fatCalories / 9;         // Жиры: 9 ккал на грамм
			double carbs = carbCalories / 4;      // Углеводы: 4 ккал на грамм

			MessageBox::Show(String::Format(L"Суточное потребление калорий: {1:F2}\nБелки: {2:F2} г\nЖиры: {3:F2} г\nУглеводы: {4:F2} г", BMR, TDEE, protein, fat, carbs),
				L"Результаты расчета", MessageBoxButtons::OK, MessageBoxIcon::Information);
			checkBox_weight_loss->Checked = false;
			checkBox_weight_gain->Checked = false;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(L"Ошибка ввода данных. Пожалуйста, проверьте значения.", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void panel1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox_female->Checked || checkBox_male->Checked) {
		this->panel1->Visible = false;
		this->panel2->Visible = true;
		this->button_comp->Visible = true;
		this->label_age->Visible = true;
		this->label_age_dop->Visible = true;
		this->label_height->Visible = true;
		this->label_santim->Visible = true;
		this->label_weight->Visible = true;
		this->label_kg->Visible = true;
		this->label_PhysAct->Visible = true;
		this->textBox_age->Visible = true;
		this->textBox_height->Visible = true;
		this->textBox_weight->Visible = true;
		this->comboBox_PhysAct->Visible = true;
	}
}
};
}
