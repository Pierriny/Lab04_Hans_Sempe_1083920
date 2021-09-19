#include <iostream>
#include <time.h>
#include <stdlib.h>
#pragma once

namespace Lab04HansSempe1083920 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::DataGridView^ Campo;
	private: System::Windows::Forms::Timer^ Tiempo;
	private: System::Windows::Forms::Button^ BttnStart;
	private: System::Windows::Forms::Button^ BttnReiniciar;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Campo = (gcnew System::Windows::Forms::DataGridView());
			this->Tiempo = (gcnew System::Windows::Forms::Timer(this->components));
			this->BttnStart = (gcnew System::Windows::Forms::Button());
			this->BttnReiniciar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(356, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 22);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Cada cuadro rojo representa un: ¡OUCH!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(18, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L".";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(18, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(15, 22);
			this->label1->TabIndex = 9;
			this->label1->Text = L".";
			// 
			// Campo
			// 
			this->Campo->BackgroundColor = System::Drawing::Color::White;
			this->Campo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Campo->Location = System::Drawing::Point(10, 152);
			this->Campo->Name = L"Campo";
			this->Campo->Size = System::Drawing::Size(892, 47);
			this->Campo->TabIndex = 6;
			// 
			// Tiempo
			// 
			this->Tiempo->Interval = 1000;
			this->Tiempo->Tick += gcnew System::EventHandler(this, &MyForm1::Tiempo_Tick);
			// 
			// BttnStart
			// 
			this->BttnStart->BackColor = System::Drawing::Color::Aqua;
			this->BttnStart->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BttnStart->ForeColor = System::Drawing::SystemColors::ControlText;
			this->BttnStart->Location = System::Drawing::Point(22, 29);
			this->BttnStart->Name = L"BttnStart";
			this->BttnStart->Size = System::Drawing::Size(112, 44);
			this->BttnStart->TabIndex = 12;
			this->BttnStart->Text = L"Start";
			this->BttnStart->UseVisualStyleBackColor = false;
			this->BttnStart->Click += gcnew System::EventHandler(this, &MyForm1::BttnStart_Click);
			// 
			// BttnReiniciar
			// 
			this->BttnReiniciar->BackColor = System::Drawing::Color::Aqua;
			this->BttnReiniciar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BttnReiniciar->Location = System::Drawing::Point(140, 30);
			this->BttnReiniciar->Name = L"BttnReiniciar";
			this->BttnReiniciar->Size = System::Drawing::Size(166, 44);
			this->BttnReiniciar->TabIndex = 13;
			this->BttnReiniciar->Text = L"Reiniciar Carrera";
			this->BttnReiniciar->UseVisualStyleBackColor = false;
			this->BttnReiniciar->Click += gcnew System::EventHandler(this, &MyForm1::BttnReiniciar_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(913, 210);
			this->Controls->Add(this->BttnReiniciar);
			this->Controls->Add(this->BttnStart);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Campo);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Campo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void BttnStart_Click(System::Object^ sender, System::EventArgs^ e) {
			//MyForm1label1.Text = "erbr";

			String^ Store = System::Convert::ToString("¡BANG!");
			String^ Storex = System::Convert::ToString("¡Y ARRANCAN!");

			label1->Text = Store;
			label2->Text = Storex;

			Campo->ColumnHeadersVisible = false;
			Campo->RowHeadersVisible = false;

			int Num_Fila = 1, Num_Columns = 80;

			for (int i = 0; i < Num_Columns; i++) {

				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;

				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				Campo->Columns->Add(nuevacolumna);
			}

			Campo->Rows[0]->Cells[0]->Value = "T";
			Campo->Rows[0]->Cells[0]->Value = "H";

			Tiempo->Enabled = true;
		}

		int* generarAtor(int limI, int limS) {
			int xx;
			xx = limI + rand() % (limS + 1 - limI);
			int* T = &xx;
			return T;
		}

		int* generarAlib(int limIi, int limSs) {
			int  yy;
			yy = limIi + rand() % (limSs + 1 - limIi);
			int* L = &yy;
			return L;
		}

		int p = 0;
		int k = 1;
		int t, l;


	private: System::Void Tiempo_Tick(System::Object^ sender, System::EventArgs^ e) {
		t = *generarAtor(1, 10);
		l = *generarAlib(1, 10);

		if (k >= 70) {
			Tiempo->Enabled = false;
			MessageBox::Show("¡LA TORTUGA GANA! ¡BRAVO!", "Ganador", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else if (p >= 70) {
			Tiempo->Enabled = false;
			MessageBox::Show("La liebre gana. Ni hablar", "Ganador", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		else
		{
			if (t == 1 || t == 2 || t == 3 || t == 4 || t == 5)
			{
				k++;
				Campo->Rows[0]->Cells[k]->Value = "T";
				Campo->Rows[0]->Cells[k - 1]->Value = " ";

			}
			if (t == 6 || t == 7) {

				if (k < 6)
				{
					if (k < 5)
					{
						if (k < 4)
						{
							if (k < 3)
							{
								if (k < 2)
								{
									if (k < 1)
									{
										Campo->Rows[0]->Cells[k]->Value = "T";
									}
									else {
										k = k - 1;
										Campo->Rows[0]->Cells[k]->Value = "T";
										Campo->Rows[0]->Cells[k + 1]->Value = " ";
									}
								}
								else {
									k = k - 2;
									Campo->Rows[0]->Cells[k]->Value = "T";
									Campo->Rows[0]->Cells[k + 2]->Value = " ";
								}
							}
							else {
								k = k - 3;
								Campo->Rows[0]->Cells[k]->Value = "T";
								Campo->Rows[0]->Cells[k + 3]->Value = " ";
							}
						}
						else {
							k = k - 4;
							Campo->Rows[0]->Cells[k]->Value = "T";
							Campo->Rows[0]->Cells[k + 4]->Value = " ";
						}
					}
					else {
						k = k - 5;
						Campo->Rows[0]->Cells[k]->Value = "T";
						Campo->Rows[0]->Cells[k + 5]->Value = " ";
					}
				}
				else {
					k = k - 6;
					Campo->Rows[0]->Cells[k]->Value = "T";
					Campo->Rows[0]->Cells[k + 6]->Value = " ";
				}


			}
			if (t == 8 || t == 9 || t == 10) {

				k = k + 3;
				Campo->Rows[0]->Cells[k]->Value = "T";
				Campo->Rows[0]->Cells[k - 3]->Value = " ";

			}

			if (l == 1 || l == 2) {
				Campo->Rows[0]->Cells[p]->Value = "H";
			}
			if (l == 3 || l == 4) {
				p = p + 9;
				Campo->Rows[0]->Cells[p]->Value = "H";
				Campo->Rows[0]->Cells[p - 9]->Value = " ";
			}
			if (l == 5) {

				if (p < 12) {

					if (p < 11) {

						if (p < 10) {

							if (p < 9) {

								if (p < 8) {

									if (p < 7) {

										if (p < 6) {

											if (p < 5) {

												if (p < 4) {

													if (p < 3) {

														if (p < 2) {

															if (p < 1) {
																Campo->Rows[0]->Cells[p]->Value = "H";
															}
															else {
																p = p - 1;
																Campo->Rows[0]->Cells[p]->Value = "H";
																Campo->Rows[0]->Cells[p + 1]->Value = " ";
															}
														}
														else {
															p = p - 2;
															Campo->Rows[0]->Cells[p]->Value = "H";
															Campo->Rows[0]->Cells[p + 2]->Value = " ";
														}
													}
													else {
														p = p - 3;
														Campo->Rows[0]->Cells[p]->Value = "H";
														Campo->Rows[0]->Cells[p + 3]->Value = " ";
													}
												}
												else {
													p = p - 4;
													Campo->Rows[0]->Cells[p]->Value = "H";
													Campo->Rows[0]->Cells[p + 4]->Value = " ";
												}
											}
											else {
												p = p - 5;
												Campo->Rows[0]->Cells[p]->Value = "H";
												Campo->Rows[0]->Cells[p + 5]->Value = " ";
											}
										}
										else {
											p = p - 6;
											Campo->Rows[0]->Cells[p]->Value = "H";
											Campo->Rows[0]->Cells[p + 6]->Value = " ";
										}
									}
									else {
										p = p - 7;
										Campo->Rows[0]->Cells[p]->Value = "H";
										Campo->Rows[0]->Cells[p + 7]->Value = " ";
									}
								}
								else {
									p = p - 8;
									Campo->Rows[0]->Cells[p]->Value = "H";
									Campo->Rows[0]->Cells[p + 8]->Value = " ";
								}
							}
							else {
								p = p - 9;
								Campo->Rows[0]->Cells[p]->Value = "H";
								Campo->Rows[0]->Cells[p + 9]->Value = " ";
							}
						}
						else {
							p = p - 10;
							Campo->Rows[0]->Cells[p]->Value = "H";
							Campo->Rows[0]->Cells[p + 10]->Value = " ";
						}
					}
					else {
						p = p - 11;
						Campo->Rows[0]->Cells[p]->Value = "H";
						Campo->Rows[0]->Cells[p + 11]->Value = " ";
					}
				}
				else {
					p = p - 12;
					Campo->Rows[0]->Cells[p]->Value = "H";
					Campo->Rows[0]->Cells[p + 12]->Value = " ";
				}
			}
			if (l == 6 || l == 7 || l == 8) {
				p++;
				Campo->Rows[0]->Cells[p]->Value = "H";
				Campo->Rows[0]->Cells[p - 1]->Value = " ";
			}
			if (l == 9 || l == 10) {

				if (p < 2) {

					if (p < 1) {

						Campo->Rows[0]->Cells[p]->Value = "H";
					}
					else {
						p = p - 1;
						Campo->Rows[0]->Cells[p]->Value = "H";
						Campo->Rows[0]->Cells[p + 1]->Value = " ";
					}
				}
				else {
					p = p - 2;
					Campo->Rows[0]->Cells[p]->Value = "H";
					Campo->Rows[0]->Cells[p + 2]->Value = " ";
				}
			}

			if (k == p) {
				Campo->Rows[0]->Cells[k]->Style->BackColor = Color::Red;
			}
		}

	}


	private: System::Void BttnReiniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		k = 0;
		p = 0;

		for (int g = 0; g < 79; g++) {

			Campo->Rows[0]->Cells[g]->Style->BackColor = Color::White;
			Campo->Rows[0]->Cells[g]->Value = " ";

		}

		Tiempo->Enabled = true;
	}
	

//ignorar lo de abajo
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Reiniciar_Click(System::Object^ sender, System::EventArgs^ e) {
}


};
}
