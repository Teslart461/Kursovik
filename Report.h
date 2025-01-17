#pragma once
#include "UserData.h"

namespace Kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для Report
	/// </summary>
	public ref class Report : public System::Windows::Forms::Form
	{
	public:
	private: UserData^ userData;
	public:
		Report(UserData^ data)
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
		~Report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::LightGray;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Alignment = System::Drawing::StringAlignment::Center;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->Color = System::Drawing::Color::LimeGreen;
			series1->Legend = L"Legend1";
			series1->LegendText = L"Калории";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(834, 429);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::LightGray;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Alignment = System::Drawing::StringAlignment::Center;
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(12, 485);
			this->chart2->Name = L"chart2";
			series2->BorderColor = System::Drawing::Color::White;
			series2->BorderWidth = 3;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series2->Color = System::Drawing::Color::Salmon;
			series2->Legend = L"Legend1";
			series2->LegendText = L"Белки";
			series2->Name = L"Series1";
			series3->BorderWidth = 3;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series3->Color = System::Drawing::Color::Gold;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Жиры";
			series3->Name = L"Series2";
			series4->BorderWidth = 3;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series4->Color = System::Drawing::Color::DodgerBlue;
			series4->Legend = L"Legend1";
			series4->LegendText = L"Углеводы";
			series4->Name = L"Series3";
			this->chart2->Series->Add(series2);
			this->chart2->Series->Add(series3);
			this->chart2->Series->Add(series4);
			this->chart2->Size = System::Drawing::Size(834, 429);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// Report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(858, 926);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Report";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Отчёт";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Report::Report_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Report::Report_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Report_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Owner->Show();
	}

	private: // Функция для вычисления среднего значения
		double CalculateAverage(List<double>^ values) {
			if (values->Count == 0)
				return 0;

			double sum = 0;
			for (int i = 0; i < values->Count; ++i) {
				sum += values[i];
			}
			return sum / values->Count;
		}

	private: System::Void Report_Load(System::Object^ sender, System::EventArgs^ e) {
		// Получаем имя пользователя из класса UserName
		String^ userName = userData->UserName;
		// Составляем путь к файлу относительно папки проекта
		String^ filePath = "users\\" + userName + "\\" + "Diary.txt";

		// Проверяем, существует ли файл
		if (!File::Exists(filePath)) {
			MessageBox::Show("Файл не найден!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Очищаем данные на графиках
		this->chart1->Series[0]->Points->Clear();
		this->chart2->Series[0]->Points->Clear();
		this->chart2->Series[1]->Points->Clear();
		this->chart2->Series[2]->Points->Clear();
		// Чтение строк из файла
		array<String^>^ lines = File::ReadAllLines(filePath);

		if (lines->Length == 0) {
			MessageBox::Show("Файл пустой или не содержит данных!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Списки для хранения значений
		List<double>^ caloriesList = gcnew List<double>();
		List<double>^ proteinsList = gcnew List<double>();
		List<double>^ fatsList = gcnew List<double>();
		List<double>^ carbsList = gcnew List<double>();

		// Процесс обработки каждой строки
		for each (String ^ line in lines) {
			array<String^>^ parts = line->Split(';');
			if (parts->Length < 5) continue;

			String^ date = parts[0]->Trim();
			double calories = Convert::ToDouble(parts[1]);
			double proteins = Convert::ToDouble(parts[2]);
			double fats = Convert::ToDouble(parts[3]);
			double carbs = Convert::ToDouble(parts[4]);

			// Добавляем данные для калорий
			this->chart1->Series[0]->Points->AddXY(date, calories);

			// Добавляем данные для белков, жиров и углеводов на второй график
			this->chart2->Series[0]->Points->AddXY(date, proteins);
			this->chart2->Series[1]->Points->AddXY(date, fats);
			this->chart2->Series[2]->Points->AddXY(date, carbs);

			// Добавляем данные в списки
			caloriesList->Add(calories);
			proteinsList->Add(proteins);
			fatsList->Add(fats);
			carbsList->Add(carbs);
		}

		// Вычисляем медианы
		double medianCalories = CalculateAverage(caloriesList);
		double medianProteins = CalculateAverage(proteinsList);
		double medianFats = CalculateAverage(fatsList);
		double medianCarbs = CalculateAverage(carbsList);

		// Формируем отчет
		String^ report = "Отчёт по данным:\n\n";
		report += "Медианные значения за период:\n";
		report += "Калории: " + medianCalories.ToString("0.00") + " ккал\n";
		report += "Белки: " + medianProteins.ToString("0.00") + " г\n";
		report += "Жиры: " + medianFats.ToString("0.00") + " г\n";
		report += "Углеводы: " + medianCarbs.ToString("0.00") + " г\n";

		// Отображаем сообщение с отчетом
		MessageBox::Show(report, "Дневной отчет", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
};
}
