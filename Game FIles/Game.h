#pragma once
#include "Poker.h"
#include "Player.h"
#include "Card.h"
#include <time.h>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Game : public System::Windows::Forms::Form
	{

		Player* p1;								//Creating pointer object of class Player

	public:

		//Default Constructor
		Game(void)
		{
			InitializeComponent();
		}

		//Parameterized Constructor
		Game(Player* p1)
		{
			InitializeComponent();
			panel1->Hide();						//Hiding panel 1 by default
			this->p1 = p1;						//Saving address of Player object of Form 1 in pointer object of Player of Form 2
			textBox1->Text = System::Convert::ToString(p1->getballance());		//Printing current balance of user in text box using getter function
			srand(time(NULL));
		}
	protected:

		//Default Destructor
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

		//Declaring all tools
	private: System::Windows::Forms::Panel^ place_bet;
	private: System::Windows::Forms::Button^ update_bet;
	private: System::Windows::Forms::Button^ redraw_card;
	private: System::Windows::Forms::Button^ draw_card;
	private: System::Windows::Forms::Label^ player_card;
	private: System::Windows::Forms::PictureBox^ user_card_img;
	private: System::Windows::Forms::TextBox^ bet_amount;
	private: System::Windows::Forms::Label^ place_bet_t;
	private: System::Windows::Forms::Button^ next_panel11;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ exit_game;
	private: System::Windows::Forms::Button^ replay;
	private: System::Windows::Forms::Label^ result_t;
	private: System::Windows::Forms::TextBox^ result_tb;
	private: System::Windows::Forms::TextBox^ computer_card_value_tb;
	private: System::Windows::Forms::TextBox^ user_card_value_tb;
	private: System::Windows::Forms::Label^ computer_card_value_t;
	private: System::Windows::Forms::Label^ user_card_value_t;
	private: System::Windows::Forms::PictureBox^ user_card_img_p12;
	private: System::Windows::Forms::PictureBox^ computer_card_img;
	private: System::Windows::Forms::Label^ computer_card;
	private: System::Windows::Forms::Label^ player_card_p12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

		//Frontend 

#pragma region Windows Form Designer generated code						
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->place_bet = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exit_game = (gcnew System::Windows::Forms::Button());
			this->replay = (gcnew System::Windows::Forms::Button());
			this->result_t = (gcnew System::Windows::Forms::Label());
			this->result_tb = (gcnew System::Windows::Forms::TextBox());
			this->computer_card_value_tb = (gcnew System::Windows::Forms::TextBox());
			this->user_card_value_tb = (gcnew System::Windows::Forms::TextBox());
			this->computer_card_value_t = (gcnew System::Windows::Forms::Label());
			this->user_card_value_t = (gcnew System::Windows::Forms::Label());
			this->user_card_img_p12 = (gcnew System::Windows::Forms::PictureBox());
			this->computer_card_img = (gcnew System::Windows::Forms::PictureBox());
			this->computer_card = (gcnew System::Windows::Forms::Label());
			this->player_card_p12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->next_panel11 = (gcnew System::Windows::Forms::Button());
			this->update_bet = (gcnew System::Windows::Forms::Button());
			this->redraw_card = (gcnew System::Windows::Forms::Button());
			this->draw_card = (gcnew System::Windows::Forms::Button());
			this->player_card = (gcnew System::Windows::Forms::Label());
			this->user_card_img = (gcnew System::Windows::Forms::PictureBox());
			this->bet_amount = (gcnew System::Windows::Forms::TextBox());
			this->place_bet_t = (gcnew System::Windows::Forms::Label());
			this->place_bet->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_card_img_p12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->computer_card_img))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_card_img))->BeginInit();
			this->SuspendLayout();
			// 
			// place_bet
			// 
			this->place_bet->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"place_bet.BackgroundImage")));
			this->place_bet->Controls->Add(this->panel1);
			this->place_bet->Controls->Add(this->textBox1);
			this->place_bet->Controls->Add(this->label1);
			this->place_bet->Controls->Add(this->next_panel11);
			this->place_bet->Controls->Add(this->update_bet);
			this->place_bet->Controls->Add(this->redraw_card);
			this->place_bet->Controls->Add(this->draw_card);
			this->place_bet->Controls->Add(this->player_card);
			this->place_bet->Controls->Add(this->user_card_img);
			this->place_bet->Controls->Add(this->bet_amount);
			this->place_bet->Controls->Add(this->place_bet_t);
			this->place_bet->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->place_bet->Location = System::Drawing::Point(0, 0);
			this->place_bet->Name = L"place_bet";
			this->place_bet->Size = System::Drawing::Size(591, 385);
			this->place_bet->TabIndex = 0;
			this->place_bet->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Game::place_bet_Paint);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->exit_game);
			this->panel1->Controls->Add(this->replay);
			this->panel1->Controls->Add(this->result_t);
			this->panel1->Controls->Add(this->result_tb);
			this->panel1->Controls->Add(this->computer_card_value_tb);
			this->panel1->Controls->Add(this->user_card_value_tb);
			this->panel1->Controls->Add(this->computer_card_value_t);
			this->panel1->Controls->Add(this->user_card_value_t);
			this->panel1->Controls->Add(this->user_card_img_p12);
			this->panel1->Controls->Add(this->computer_card_img);
			this->panel1->Controls->Add(this->computer_card);
			this->panel1->Controls->Add(this->player_card_p12);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(591, 385);
			this->panel1->TabIndex = 9;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Game::panel1_Paint);
			// 
			// exit_game
			// 
			this->exit_game->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->exit_game->ForeColor = System::Drawing::Color::White;
			this->exit_game->Location = System::Drawing::Point(351, 353);
			this->exit_game->Name = L"exit_game";
			this->exit_game->Size = System::Drawing::Size(76, 29);
			this->exit_game->TabIndex = 13;
			this->exit_game->Text = L"Exit";
			this->exit_game->UseVisualStyleBackColor = false;
			this->exit_game->Click += gcnew System::EventHandler(this, &Game::exit_game_Click);
			// 
			// replay
			// 
			this->replay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->replay->ForeColor = System::Drawing::Color::White;
			this->replay->Location = System::Drawing::Point(161, 353);
			this->replay->Name = L"replay";
			this->replay->Size = System::Drawing::Size(74, 29);
			this->replay->TabIndex = 12;
			this->replay->Text = L"Replay";
			this->replay->UseVisualStyleBackColor = false;
			this->replay->Click += gcnew System::EventHandler(this, &Game::replay_Click);
			// 
			// result_t
			// 
			this->result_t->AutoSize = true;
			this->result_t->BackColor = System::Drawing::Color::Transparent;
			this->result_t->Font = (gcnew System::Drawing::Font(L"Garamond", 16));
			this->result_t->ForeColor = System::Drawing::Color::White;
			this->result_t->Location = System::Drawing::Point(178, 305);
			this->result_t->Name = L"result_t";
			this->result_t->Size = System::Drawing::Size(70, 25);
			this->result_t->TabIndex = 11;
			this->result_t->Text = L"Result:";
			this->result_t->Click += gcnew System::EventHandler(this, &Game::result_t_Click);
			// 
			// result_tb
			// 
			this->result_tb->Location = System::Drawing::Point(254, 307);
			this->result_tb->Name = L"result_tb";
			this->result_tb->Size = System::Drawing::Size(152, 20);
			this->result_tb->TabIndex = 10;
			this->result_tb->TextChanged += gcnew System::EventHandler(this, &Game::result_tb_TextChanged);
			// 
			// computer_card_value_tb
			// 
			this->computer_card_value_tb->Location = System::Drawing::Point(422, 263);
			this->computer_card_value_tb->Name = L"computer_card_value_tb";
			this->computer_card_value_tb->Size = System::Drawing::Size(128, 20);
			this->computer_card_value_tb->TabIndex = 9;
			this->computer_card_value_tb->TextChanged += gcnew System::EventHandler(this, &Game::computer_card_value_tb_TextChanged);
			// 
			// user_card_value_tb
			// 
			this->user_card_value_tb->Location = System::Drawing::Point(87, 265);
			this->user_card_value_tb->Name = L"user_card_value_tb";
			this->user_card_value_tb->Size = System::Drawing::Size(130, 20);
			this->user_card_value_tb->TabIndex = 8;
			this->user_card_value_tb->TextChanged += gcnew System::EventHandler(this, &Game::user_card_value_tb_TextChanged);
			// 
			// computer_card_value_t
			// 
			this->computer_card_value_t->AutoSize = true;
			this->computer_card_value_t->BackColor = System::Drawing::Color::Transparent;
			this->computer_card_value_t->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->computer_card_value_t->ForeColor = System::Drawing::Color::White;
			this->computer_card_value_t->Location = System::Drawing::Point(367, 263);
			this->computer_card_value_t->Name = L"computer_card_value_t";
			this->computer_card_value_t->Size = System::Drawing::Size(49, 18);
			this->computer_card_value_t->TabIndex = 7;
			this->computer_card_value_t->Text = L"Value:";
			this->computer_card_value_t->Click += gcnew System::EventHandler(this, &Game::computer_card_value_t_Click);
			// 
			// user_card_value_t
			// 
			this->user_card_value_t->AutoSize = true;
			this->user_card_value_t->BackColor = System::Drawing::Color::Transparent;
			this->user_card_value_t->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->user_card_value_t->ForeColor = System::Drawing::Color::White;
			this->user_card_value_t->Location = System::Drawing::Point(32, 267);
			this->user_card_value_t->Name = L"user_card_value_t";
			this->user_card_value_t->Size = System::Drawing::Size(49, 18);
			this->user_card_value_t->TabIndex = 6;
			this->user_card_value_t->Text = L"Value:";
			this->user_card_value_t->Click += gcnew System::EventHandler(this, &Game::user_card_value_t_Click);
			// 
			// user_card_img_p12
			// 
			this->user_card_img_p12->ImageLocation = L"..\\Database\\Card_PNG\\Default.png";
			this->user_card_img_p12->Location = System::Drawing::Point(86, 86);
			this->user_card_img_p12->Name = L"user_card_img_p12";
			this->user_card_img_p12->Size = System::Drawing::Size(131, 171);
			this->user_card_img_p12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->user_card_img_p12->TabIndex = 5;
			this->user_card_img_p12->TabStop = false;
			this->user_card_img_p12->Click += gcnew System::EventHandler(this, &Game::user_card_img_p12_Click);
			// 
			// computer_card_img
			// 
			this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\Default.png";
			this->computer_card_img->Location = System::Drawing::Point(422, 88);
			this->computer_card_img->Name = L"computer_card_img";
			this->computer_card_img->Size = System::Drawing::Size(128, 169);
			this->computer_card_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->computer_card_img->TabIndex = 4;
			this->computer_card_img->TabStop = false;
			this->computer_card_img->Click += gcnew System::EventHandler(this, &Game::computer_card_img_Click);
			// 
			// computer_card
			// 
			this->computer_card->AutoSize = true;
			this->computer_card->BackColor = System::Drawing::Color::Transparent;
			this->computer_card->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->computer_card->ForeColor = System::Drawing::Color::White;
			this->computer_card->Location = System::Drawing::Point(389, 44);
			this->computer_card->Name = L"computer_card";
			this->computer_card->Size = System::Drawing::Size(193, 30);
			this->computer_card->TabIndex = 1;
			this->computer_card->Text = L"Computer\'s Card";
			this->computer_card->Click += gcnew System::EventHandler(this, &Game::computer_card_Click);
			// 
			// player_card_p12
			// 
			this->player_card_p12->AutoSize = true;
			this->player_card_p12->BackColor = System::Drawing::Color::Transparent;
			this->player_card_p12->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->player_card_p12->ForeColor = System::Drawing::Color::White;
			this->player_card_p12->Location = System::Drawing::Point(92, 44);
			this->player_card_p12->Name = L"player_card_p12";
			this->player_card_p12->Size = System::Drawing::Size(125, 30);
			this->player_card_p12->TabIndex = 0;
			this->player_card_p12->Text = L"Your Card";
			this->player_card_p12->Click += gcnew System::EventHandler(this, &Game::player_card_p12_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(203, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(106, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Game::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(31, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 27);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Current Balance:";
			this->label1->Click += gcnew System::EventHandler(this, &Game::label1_Click);
			// 
			// next_panel11
			// 
			this->next_panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->next_panel11->Enabled = false;
			this->next_panel11->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->next_panel11->ForeColor = System::Drawing::Color::White;
			this->next_panel11->Location = System::Drawing::Point(359, 297);
			this->next_panel11->Name = L"next_panel11";
			this->next_panel11->Size = System::Drawing::Size(133, 39);
			this->next_panel11->TabIndex = 8;
			this->next_panel11->Text = L"Next";
			this->next_panel11->UseVisualStyleBackColor = false;
			this->next_panel11->Click += gcnew System::EventHandler(this, &Game::next_panel11_Click);
			// 
			// update_bet
			// 
			this->update_bet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->update_bet->Enabled = false;
			this->update_bet->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->update_bet->ForeColor = System::Drawing::Color::White;
			this->update_bet->Location = System::Drawing::Point(359, 242);
			this->update_bet->Name = L"update_bet";
			this->update_bet->Size = System::Drawing::Size(133, 39);
			this->update_bet->TabIndex = 7;
			this->update_bet->Text = L"Update Bet";
			this->update_bet->UseVisualStyleBackColor = false;
			this->update_bet->Click += gcnew System::EventHandler(this, &Game::update_bet_Click);
			// 
			// redraw_card
			// 
			this->redraw_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->redraw_card->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->redraw_card->ForeColor = System::Drawing::Color::White;
			this->redraw_card->Location = System::Drawing::Point(359, 181);
			this->redraw_card->Name = L"redraw_card";
			this->redraw_card->Size = System::Drawing::Size(133, 39);
			this->redraw_card->TabIndex = 6;
			this->redraw_card->Text = L"Redraw";
			this->redraw_card->UseVisualStyleBackColor = false;
			this->redraw_card->Click += gcnew System::EventHandler(this, &Game::redraw_card_Click);
			// 
			// draw_card
			// 
			this->draw_card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->draw_card->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->draw_card->ForeColor = System::Drawing::Color::White;
			this->draw_card->Location = System::Drawing::Point(359, 123);
			this->draw_card->Name = L"draw_card";
			this->draw_card->Size = System::Drawing::Size(133, 39);
			this->draw_card->TabIndex = 5;
			this->draw_card->Text = L"Draw";
			this->draw_card->UseVisualStyleBackColor = false;
			this->draw_card->Click += gcnew System::EventHandler(this, &Game::draw_card_Click);
			// 
			// player_card
			// 
			this->player_card->AutoSize = true;
			this->player_card->BackColor = System::Drawing::Color::Transparent;
			this->player_card->Font = (gcnew System::Drawing::Font(L"Garamond", 22));
			this->player_card->ForeColor = System::Drawing::Color::White;
			this->player_card->Location = System::Drawing::Point(145, 76);
			this->player_card->Name = L"player_card";
			this->player_card->Size = System::Drawing::Size(132, 34);
			this->player_card->TabIndex = 4;
			this->player_card->Text = L"Your card";
			this->player_card->Click += gcnew System::EventHandler(this, &Game::player_card_Click);
			// 
			// user_card_img
			// 
			this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\Default.png";
			this->user_card_img->Location = System::Drawing::Point(137, 123);
			this->user_card_img->Name = L"user_card_img";
			this->user_card_img->Size = System::Drawing::Size(152, 221);
			this->user_card_img->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->user_card_img->TabIndex = 3;
			this->user_card_img->TabStop = false;
			this->user_card_img->Click += gcnew System::EventHandler(this, &Game::user_card_img_Click);
			// 
			// bet_amount
			// 
			this->bet_amount->Location = System::Drawing::Point(448, 36);
			this->bet_amount->Name = L"bet_amount";
			this->bet_amount->Size = System::Drawing::Size(113, 20);
			this->bet_amount->TabIndex = 2;
			this->bet_amount->TextChanged += gcnew System::EventHandler(this, &Game::bet_amount_TextChanged);
			this->bet_amount->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::bet_amount_KeyDown);
			// 
			// place_bet_t
			// 
			this->place_bet_t->AutoSize = true;
			this->place_bet_t->BackColor = System::Drawing::Color::Transparent;
			this->place_bet_t->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->place_bet_t->ForeColor = System::Drawing::Color::White;
			this->place_bet_t->Location = System::Drawing::Point(336, 28);
			this->place_bet_t->Name = L"place_bet_t";
			this->place_bet_t->Size = System::Drawing::Size(105, 27);
			this->place_bet_t->TabIndex = 1;
			this->place_bet_t->Text = L"Place Bet:";
			this->place_bet_t->Click += gcnew System::EventHandler(this, &Game::place_bet_t_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 384);
			this->Controls->Add(this->place_bet);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Game";
			this->Text = L"Game";
			this->place_bet->ResumeLayout(false);
			this->place_bet->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_card_img_p12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->computer_card_img))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->user_card_img))->EndInit();
			this->ResumeLayout(false);

		}

		//Declaring some variables
	private:
		float bet;
		int u_value;
		int c_value;
		int cvalue = 0;
		int c2value = 0;
		int cfamily = 0;
		int c2family = 0;
		String^ c_v = " ";
		String^ c_f = " ";
		String^ c2_v = " ";
		String^ c2_f = " ";

		void c_draw()			//Function for computer card draw
		{
			Card c2;			//Declaring object c2 of class Card
			switch (c2.getcard())		//Using getter to get card number
			{
				//Using switch statement to change location of displayed card
			case 1: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AS.png"; break;
			case 2: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2S.png"; break;
			case 3: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3S.png"; break;
			case 4: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4S.png"; break;
			case 5: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5S.png"; break;
			case 6: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6S.png"; break;
			case 7: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7S.png"; break;
			case 8: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8S.png"; break;
			case 9: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9S.png"; break;
			case 10: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10S.png"; break;
			case 11: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JS.png"; break;
			case 12: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QS.png"; break;
			case 13: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KS.png"; break;
			case 14: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AH.png"; break;
			case 15: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2H.png"; break;
			case 16: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3H.png"; break;
			case 17: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4H.png"; break;
			case 18: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5H.png"; break;
			case 19: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6H.png"; break;
			case 20: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7H.png"; break;
			case 21: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8H.png"; break;
			case 22: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9H.png"; break;
			case 23: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10H.png"; break;
			case 24: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JH.png"; break;
			case 25: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QH.png"; break;
			case 26: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KH.png"; break;
			case 27: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AC.png"; break;
			case 28: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2C.png"; break;
			case 29: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3C.png"; break;
			case 30: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4C.png"; break;
			case 31: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5C.png"; break;
			case 32: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6C.png"; break;
			case 33: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7C.png"; break;
			case 34: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8C.png"; break;
			case 35: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9C.png"; break;
			case 36: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10C.png"; break;
			case 37: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JC.png"; break;
			case 38: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QC.png"; break;
			case 39: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KC.png"; break;
			case 40: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AD.png"; break;
			case 41: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2D.png"; break;
			case 42: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3D.png"; break;
			case 43: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4D.png"; break;
			case 44: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5D.png"; break;
			case 45: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6D.png"; break;
			case 46: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7D.png"; break;
			case 47: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8D.png"; break;
			case 48: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9D.png"; break;
			case 49: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10D.png"; break;
			case 50: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JD.png"; break;
			case 51: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QD.png"; break;
			case 52: this->computer_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KD.png"; break;
			}
			c2value = c2.getvalue();		//using getter to save value of card
			c2family = c2.getfamily();		//using getter to save family of card
			c2_v = c2.get_string_value();	//using function to save value in letters for printing reasons
			c2_f = c2.get_string_family();	//using getter to save family for printing reasons
		}

		void draw() {					//Draw function for user
			draw_card->Enabled = false;		//draw_card button disables when card drawn to prevent more card being drawn
			bet_amount->ReadOnly = true;	//cannot change bet amount once card drawn
			update_bet->Enabled = true;		//can update bet once card drawn
			Card c;					//Object c of class card
			switch (c.getcard())
			{
			case 1: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AS.png"; break;
			case 2: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2S.png"; break;
			case 3: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3S.png"; break;
			case 4: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4S.png"; break;
			case 5: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5S.png"; break;
			case 6: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6S.png"; break;
			case 7: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7S.png"; break;
			case 8: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8S.png"; break;
			case 9: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9S.png"; break;
			case 10: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10S.png"; break;
			case 11: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JS.png"; break;
			case 12: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QS.png"; break;
			case 13: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KS.png"; break;
			case 14: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AH.png"; break;
			case 15: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2H.png"; break;
			case 16: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3H.png"; break;
			case 17: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4H.png"; break;
			case 18: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5H.png"; break;
			case 19: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6H.png"; break;
			case 20: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7H.png"; break;
			case 21: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8H.png"; break;
			case 22: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9H.png"; break;
			case 23: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10H.png"; break;
			case 24: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JH.png"; break;
			case 25: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QH.png"; break;
			case 26: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KH.png"; break;
			case 27: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AC.png"; break;
			case 28: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2C.png"; break;
			case 29: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3C.png"; break;
			case 30: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4C.png"; break;
			case 31: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5C.png"; break;
			case 32: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6C.png"; break;
			case 33: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7C.png"; break;
			case 34: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8C.png"; break;
			case 35: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9C.png"; break;
			case 36: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10C.png"; break;
			case 37: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JC.png"; break;
			case 38: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QC.png"; break;
			case 39: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KC.png"; break;
			case 40: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\AD.png"; break;
			case 41: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\2D.png"; break;
			case 42: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\3D.png"; break;
			case 43: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\4D.png"; break;
			case 44: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\5D.png"; break;
			case 45: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\6D.png"; break;
			case 46: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\7D.png"; break;
			case 47: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\8D.png"; break;
			case 48: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\9D.png"; break;
			case 49: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\10D.png"; break;
			case 50: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\JD.png"; break;
			case 51: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\QD.png"; break;
			case 52: this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\KD.png"; break;
			}
			cvalue = c.getvalue();
			cfamily = c.getfamily();
			c_v = c.get_string_value();
			c_f = c.get_string_family();
		}

		void reset() {						//Function to reset details when replaying
			next_panel11->Enabled = false;
			draw_card->Enabled = true;
			bet_amount->ReadOnly = false;
			this->user_card_img->ImageLocation = L"..\\Database\\Card_PNG\\Default.png";
			bet_amount->Text = "";
		}

#pragma endregion
	private: System::Void place_bet_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {					//Panel11 -> place_bet
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {									//Panel11 -> textbox -> textbox1 
		textBox1->Text = System::Convert::ToString(p1->getballance());				//Printing current user balance
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void place_bet_t_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel11 -> text1 -> place_bet_t
	}
	private: System::Void bet_amount_TextChanged(System::Object^ sender, System::EventArgs^ e) {								//Panel11 -> textbox1 ->bet_amount
	}
	private: System::Void draw_card_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel11 -> button1 -> draw_card
		bet = System::Convert::ToInt16(bet_amount->Text);
		if (bet_amount->Text == " " || bet == 0)
		{
			MessageBox::Show("Please enter a value to succeed", "Enter bet amount", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			if (bet > p1->getballance())		//if user balance less than bet
			{
				MessageBox::Show("Sorry not enough balance.", "Not enough balance", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				draw();			//draw card
				next_panel11->Enabled = true;		//next panel button enables
			}
		}
	}
	private: System::Void update_bet_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel11 -> button2 -> update_bet
		float c = p1->getballance();
		if (c - (bet * 0.3) <= 0)
		{
			MessageBox::Show("You cannot update bet because you dont have enough balance", "Bet update error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			MessageBox::Show("You can now update bet", "Update bet", MessageBoxButtons::OK, MessageBoxIcon::Information);
			p1->modifyballance(-(0.3 * bet));
			textBox1->Text = System::Convert::ToString(p1->getballance());
			bet_amount->ReadOnly = false;
			update_bet->Enabled = false;
		}
	}
	private: System::Void redraw_card_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel11 -> button3 -> redraw_card
		if (p1->getballance() - (0.5 * bet) <= 0)			//If not enough balance
		{
			MessageBox::Show("You cannot redraw because you dont have enough balance", "Redraw failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			p1->modifyballance(-(.5 * bet));			//Deducts 50% of bet amount from user balance
			textBox1->Text = System::Convert::ToString(p1->getballance());			//current balance updates
			draw();										//New card drawn
		}
	}
	private: System::Void player_card_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel11 -> text2 -> player_card
	}
	private: System::Void user_card_img_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel11 -> picturebox1 -> user_card-_img
	}
	private: System::Void next_panel11_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel11 -> button4 -> next_panel11
		bet = System::Convert::ToInt16(bet_amount->Text);
		if (bet > p1->getballance())							//rechecking balance and bet amount to prevent loophole of updating bet to get around balance limitations 
			MessageBox::Show("Not enough Balance in wallet. Enter Valid amount", "Not enough Balance", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else {
			panel1->Show();			//next panels shows
			c_draw();				//computer draws card
			this->user_card_img_p12->ImageLocation = user_card_img->ImageLocation;			//User drawn card location copied to new image box of next panel
			user_card_value_tb->Text = c_v + " of " + c_f;							//prining user card details
			computer_card_value_tb->Text = c2_v + " of " + c2_f;					//printing computer card details

			if (cvalue > c2value)			//User won
			{
				result_tb->Text = "You won the bet";
				p1->modifyballance(bet);
				MessageBox::Show("You won the bet based on your card value. Bet amount added into your ballance", "You won", MessageBoxButtons::OK, MessageBoxIcon::None);
			}
			else if (cvalue < c2value)
			{
				result_tb->Text = "You lost the bet";
				p1->modifyballance(-bet);
				MessageBox::Show("You lost the bet based on your card value. Bet amount subtracted from your balance", "You lost", MessageBoxButtons::OK, MessageBoxIcon::None);
			}
			else
			{
				if (cfamily > c2family)
				{
					MessageBox::Show("You won the bet based on your card suit. You will get half the amount of bet", "You won", MessageBoxButtons::OK, MessageBoxIcon::None);
					result_tb->Text = "You won the bet";
					p1->modifyballance(bet / 2);
				}
				else if (cfamily < c2family)
				{
					MessageBox::Show("You lost the bet based on your card suit. You will loose half the amount of bet", "You lost", MessageBoxButtons::OK, MessageBoxIcon::None);
					result_tb->Text = "You lost the bet";
					p1->modifyballance(-bet / 2);
				}
				else
				{
					user_card_value_tb->Text = c_v + " of " + c_f;
					computer_card_value_tb->Text = c2_v + " of " + c2_f;
					MessageBox::Show("Since the value and suit of the card both are same. Its a draw. You wont lose any balance", "Its a draw", MessageBoxButtons::OK, MessageBoxIcon::None);
					result_tb->Text = "Draw";
				}
			}
		}
	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {						//Panel12 -> panel1
	}
	private: System::Void player_card_p12_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel12 -> text1 -> player_card
	}
	private: System::Void computer_card_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel12 -> text2 -> computer_card
	}
	private: System::Void user_card_img_p12_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel12 -> picture1 -> user_card_img_p12
	}
	private: System::Void computer_card_img_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel12 -> picture1 -> computer_card_img
	}
	private: System::Void user_card_value_t_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel12 -> text3 -> user_card_value_t
	}
	private: System::Void computer_card_value_t_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel12 -> text4 -> computer_card_value_t
	}
	private: System::Void user_card_value_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {						//Panel12 -> textbox1 -> user_card_value_tb
	}
	private: System::Void computer_card_value_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel12 -> textbox2 -> computer_card_value_tb
	}
	private: System::Void result_t_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel12 -> text5 -> result_t
	}
	private: System::Void result_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {									//Panel12 -> text2 -> result_tb
	}
	private: System::Void exit_game_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel12 -> button1 -> exit_game
		this->Hide();				//Hides current form
	}
	private: System::Void replay_Click(System::Object^ sender, System::EventArgs^ e) {											//Panel12 -> button2 -> replay
		reset();
		textBox1->Text = System::Convert::ToString(p1->getballance());
		panel1->Hide();
		update_bet->Enabled = false;
	}

		   //Enter Key Coding
	private: System::Void bet_amount_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
		{
			draw_card->PerformClick();
		}
	}
};
}
//fin