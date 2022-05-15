#pragma once
#include <iostream>
#include <fstream>					//file implementation
#include <string>
#include <msclr\marshal_cppstd.h>   //for converting system string to std string
#include <windows.h>
#include "Card.h"
#include "Player.h"
#include "Game.h"

namespace Project {

	//Creating Object of class Player
	Player p1;

	using namespace System;										//Using Namespaces
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Poker : public System::Windows::Forms::Form				//Declaring all tools
	{
	private: System::Windows::Forms::Panel^ leaderboard;
	private: System::Windows::Forms::Label^ leaderboard_text;
	private: System::Windows::Forms::Label^ leaderboard_sr;
	private: System::Windows::Forms::Label^ leaderboard_score;
	private: System::Windows::Forms::Label^ leaderboard_name;
	private: System::Windows::Forms::Label^ sr1;
	private: System::Windows::Forms::Label^ sr3;
	private: System::Windows::Forms::TextBox^ bottom_user_score;
	private: System::Windows::Forms::TextBox^ bottom_user_name;
	private: System::Windows::Forms::TextBox^ mid_user_score;
	private: System::Windows::Forms::TextBox^ mid_user_name;
	private: System::Windows::Forms::TextBox^ top_user_score;
	private: System::Windows::Forms::TextBox^ top_user_name;
	private: System::Windows::Forms::Button^ leaderboard_back;
	private: System::Windows::Forms::Panel^ Login;
	private: System::Windows::Forms::Label^ login_text;
	private: System::Windows::Forms::Label^ login_password;
	private: System::Windows::Forms::Label^ login_username;
	private: System::Windows::Forms::Button^ login_button_4;
	private: System::Windows::Forms::TextBox^ login_password_enter;
	private: System::Windows::Forms::TextBox^ login_username_enter;
	private: System::Windows::Forms::Panel^ Signup;
	private: System::Windows::Forms::TextBox^ signup_password_enter;
	private: System::Windows::Forms::TextBox^ signup_username_enter;
	private: System::Windows::Forms::Label^ signup_password;
	private: System::Windows::Forms::Label^ signup_username;
	private: System::Windows::Forms::Label^ signup_text;
	private: System::Windows::Forms::Button^ signup_button_5;
	private: System::Windows::Forms::Button^ terms_button;
	private: System::Windows::Forms::CheckBox^ agree_terms;
	private: System::Windows::Forms::TextBox^ signup_c_password_enter;
	private: System::Windows::Forms::Label^ signup_c_password;
	private: System::Windows::Forms::Button^ login_back_button;
	private: System::Windows::Forms::Panel^ terms;
	private: System::Windows::Forms::Label^ term4;
	private: System::Windows::Forms::Label^ term3;
	private: System::Windows::Forms::Label^ term2;
	private: System::Windows::Forms::Label^ term1;
	private: System::Windows::Forms::Label^ terms_text;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ Welcome_panel;
	private: System::Windows::Forms::CheckBox^ rules_cb;
	private: System::Windows::Forms::Button^ log_out;
	private: System::Windows::Forms::Button^ play_7;
	private: System::Windows::Forms::Button^ add_balance;
	private: System::Windows::Forms::Button^ Rules;
	private: System::Windows::Forms::TextBox^ current_balance_tb;
	private: System::Windows::Forms::TextBox^ current_username;
	private: System::Windows::Forms::Label^ current_balance;
	private: System::Windows::Forms::Label^ username_7;
	private: System::Windows::Forms::Label^ welcome_heading_7;
	private: System::Windows::Forms::Panel^ add_balance_panel;
	private: System::Windows::Forms::TextBox^ keycode_tb;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ key_code;
	private: System::Windows::Forms::Label^ add_credit;
	private: System::Windows::Forms::Label^ add_balance_heading;
	private: System::Windows::Forms::Button^ backto_welcome;
	private: System::Windows::Forms::Button^ faq;
	private: System::Windows::Forms::Button^ add_balance_button;
	private: System::Windows::Forms::Panel^ faq_panel;
	private: System::Windows::Forms::Button^ bakto_add_balance;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ faq_q2;
	private: System::Windows::Forms::Label^ faq_a1;
	private: System::Windows::Forms::Label^ faq_q1;
	private: System::Windows::Forms::Label^ faq_heading;
	private: System::Windows::Forms::Panel^ rules_panel;
	private: System::Windows::Forms::Button^ back_rules;
	private: System::Windows::Forms::Label^ rules_text;
	private: System::Windows::Forms::Label^ rules_heading;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::ImageList^ imageList2;
	private: System::Windows::Forms::Button^ back_signup;
	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Label^ sr2;
	private: System::Windows::Forms::Panel^ main_menu;
	private: System::Windows::Forms::Label^ game_title;
	private: System::Windows::Forms::Button^ exit_button;
	private: System::Windows::Forms::Button^ play_button;
	private: System::Windows::Forms::Button^ leaderboard_button;
	private: System::Windows::Forms::Panel^ login_screen;
	private: System::Windows::Forms::Button^ signup_button;
	private: System::Windows::Forms::Button^ login_button;
	private: System::Windows::Forms::Label^ welcome_text;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ login_back;
	private: System::ComponentModel::IContainer^ components;

	public:							//Creating default constructor
		Poker(void)
		{
			InitializeComponent();
			//Hiding all panels other than the 1st panel at run time
			/*2*/ login_screen->Hide();
			/*3*/ leaderboard->Hide();
			/*4*/ Signup->Hide();
			/*5*/ terms->Hide();
			/*6*/ Login->Hide();
			/*7*/ Welcome_panel->Hide();
			/*8*/ add_balance_panel->Hide();
			/*9*/ faq_panel->Hide();
			/*10*/ rules_panel->Hide();
		}

	protected:
		~Poker()					///Default destructor to clean up any resources being used
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Poker::typeid));
			this->main_menu = (gcnew System::Windows::Forms::Panel());
			this->login_screen = (gcnew System::Windows::Forms::Panel());
			this->Signup = (gcnew System::Windows::Forms::Panel());
			this->back_signup = (gcnew System::Windows::Forms::Button());
			this->terms = (gcnew System::Windows::Forms::Panel());
			this->term4 = (gcnew System::Windows::Forms::Label());
			this->term3 = (gcnew System::Windows::Forms::Label());
			this->term2 = (gcnew System::Windows::Forms::Label());
			this->term1 = (gcnew System::Windows::Forms::Label());
			this->terms_text = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->signup_button_5 = (gcnew System::Windows::Forms::Button());
			this->terms_button = (gcnew System::Windows::Forms::Button());
			this->agree_terms = (gcnew System::Windows::Forms::CheckBox());
			this->signup_c_password_enter = (gcnew System::Windows::Forms::TextBox());
			this->signup_c_password = (gcnew System::Windows::Forms::Label());
			this->signup_password_enter = (gcnew System::Windows::Forms::TextBox());
			this->signup_username_enter = (gcnew System::Windows::Forms::TextBox());
			this->signup_password = (gcnew System::Windows::Forms::Label());
			this->signup_username = (gcnew System::Windows::Forms::Label());
			this->signup_text = (gcnew System::Windows::Forms::Label());
			this->leaderboard = (gcnew System::Windows::Forms::Panel());
			this->leaderboard_back = (gcnew System::Windows::Forms::Button());
			this->bottom_user_score = (gcnew System::Windows::Forms::TextBox());
			this->bottom_user_name = (gcnew System::Windows::Forms::TextBox());
			this->mid_user_score = (gcnew System::Windows::Forms::TextBox());
			this->mid_user_name = (gcnew System::Windows::Forms::TextBox());
			this->top_user_score = (gcnew System::Windows::Forms::TextBox());
			this->top_user_name = (gcnew System::Windows::Forms::TextBox());
			this->sr3 = (gcnew System::Windows::Forms::Label());
			this->sr2 = (gcnew System::Windows::Forms::Label());
			this->sr1 = (gcnew System::Windows::Forms::Label());
			this->leaderboard_score = (gcnew System::Windows::Forms::Label());
			this->leaderboard_name = (gcnew System::Windows::Forms::Label());
			this->leaderboard_sr = (gcnew System::Windows::Forms::Label());
			this->leaderboard_text = (gcnew System::Windows::Forms::Label());
			this->login_back = (gcnew System::Windows::Forms::Button());
			this->signup_button = (gcnew System::Windows::Forms::Button());
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->welcome_text = (gcnew System::Windows::Forms::Label());
			this->exit_button = (gcnew System::Windows::Forms::Button());
			this->play_button = (gcnew System::Windows::Forms::Button());
			this->leaderboard_button = (gcnew System::Windows::Forms::Button());
			this->game_title = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::Panel());
			this->Welcome_panel = (gcnew System::Windows::Forms::Panel());
			this->add_balance_panel = (gcnew System::Windows::Forms::Panel());
			this->faq_panel = (gcnew System::Windows::Forms::Panel());
			this->bakto_add_balance = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->faq_q2 = (gcnew System::Windows::Forms::Label());
			this->faq_a1 = (gcnew System::Windows::Forms::Label());
			this->faq_q1 = (gcnew System::Windows::Forms::Label());
			this->faq_heading = (gcnew System::Windows::Forms::Label());
			this->faq = (gcnew System::Windows::Forms::Button());
			this->add_balance_button = (gcnew System::Windows::Forms::Button());
			this->keycode_tb = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->key_code = (gcnew System::Windows::Forms::Label());
			this->add_credit = (gcnew System::Windows::Forms::Label());
			this->add_balance_heading = (gcnew System::Windows::Forms::Label());
			this->backto_welcome = (gcnew System::Windows::Forms::Button());
			this->rules_panel = (gcnew System::Windows::Forms::Panel());
			this->rules_text = (gcnew System::Windows::Forms::Label());
			this->back_rules = (gcnew System::Windows::Forms::Button());
			this->rules_heading = (gcnew System::Windows::Forms::Label());
			this->rules_cb = (gcnew System::Windows::Forms::CheckBox());
			this->log_out = (gcnew System::Windows::Forms::Button());
			this->play_7 = (gcnew System::Windows::Forms::Button());
			this->add_balance = (gcnew System::Windows::Forms::Button());
			this->Rules = (gcnew System::Windows::Forms::Button());
			this->current_balance_tb = (gcnew System::Windows::Forms::TextBox());
			this->current_username = (gcnew System::Windows::Forms::TextBox());
			this->current_balance = (gcnew System::Windows::Forms::Label());
			this->username_7 = (gcnew System::Windows::Forms::Label());
			this->welcome_heading_7 = (gcnew System::Windows::Forms::Label());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->login_password_enter = (gcnew System::Windows::Forms::TextBox());
			this->login_username_enter = (gcnew System::Windows::Forms::TextBox());
			this->login_password = (gcnew System::Windows::Forms::Label());
			this->login_username = (gcnew System::Windows::Forms::Label());
			this->login_text = (gcnew System::Windows::Forms::Label());
			this->login_button_4 = (gcnew System::Windows::Forms::Button());
			this->login_back_button = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->main_menu->SuspendLayout();
			this->login_screen->SuspendLayout();
			this->Signup->SuspendLayout();
			this->terms->SuspendLayout();
			this->leaderboard->SuspendLayout();
			this->Login->SuspendLayout();
			this->Welcome_panel->SuspendLayout();
			this->add_balance_panel->SuspendLayout();
			this->faq_panel->SuspendLayout();
			this->rules_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_menu
			// 
			this->main_menu->AutoSize = true;
			this->main_menu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->main_menu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"main_menu.BackgroundImage")));
			this->main_menu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->main_menu->Controls->Add(this->login_screen);
			this->main_menu->Controls->Add(this->exit_button);
			this->main_menu->Controls->Add(this->play_button);
			this->main_menu->Controls->Add(this->leaderboard_button);
			this->main_menu->Controls->Add(this->game_title);
			this->main_menu->Location = System::Drawing::Point(-1, 2);
			this->main_menu->Name = L"main_menu";
			this->main_menu->Size = System::Drawing::Size(597, 454);
			this->main_menu->TabIndex = 0;
			this->main_menu->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::main_menu_Paint);
			// 
			// login_screen
			// 
			this->login_screen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"login_screen.BackgroundImage")));
			this->login_screen->Controls->Add(this->Signup);
			this->login_screen->Controls->Add(this->leaderboard);
			this->login_screen->Controls->Add(this->login_back);
			this->login_screen->Controls->Add(this->signup_button);
			this->login_screen->Controls->Add(this->login_button);
			this->login_screen->Controls->Add(this->welcome_text);
			this->login_screen->Location = System::Drawing::Point(0, 0);
			this->login_screen->Name = L"login_screen";
			this->login_screen->Size = System::Drawing::Size(594, 389);
			this->login_screen->TabIndex = 6;
			this->login_screen->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::login_screen_Paint);
			// 
			// Signup
			// 
			this->Signup->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Signup->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Signup.BackgroundImage")));
			this->Signup->Controls->Add(this->back_signup);
			this->Signup->Controls->Add(this->terms);
			this->Signup->Controls->Add(this->signup_button_5);
			this->Signup->Controls->Add(this->terms_button);
			this->Signup->Controls->Add(this->agree_terms);
			this->Signup->Controls->Add(this->signup_c_password_enter);
			this->Signup->Controls->Add(this->signup_c_password);
			this->Signup->Controls->Add(this->signup_password_enter);
			this->Signup->Controls->Add(this->signup_username_enter);
			this->Signup->Controls->Add(this->signup_password);
			this->Signup->Controls->Add(this->signup_username);
			this->Signup->Controls->Add(this->signup_text);
			this->Signup->Location = System::Drawing::Point(0, 0);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(591, 386);
			this->Signup->TabIndex = 19;
			this->Signup->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::Signup_Paint);
			// 
			// back_signup
			// 
			this->back_signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->back_signup->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->back_signup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_signup->ForeColor = System::Drawing::Color::White;
			this->back_signup->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->back_signup->Location = System::Drawing::Point(495, 22);
			this->back_signup->Name = L"back_signup";
			this->back_signup->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->back_signup->Size = System::Drawing::Size(71, 35);
			this->back_signup->TabIndex = 23;
			this->back_signup->Text = L"Back";
			this->back_signup->UseVisualStyleBackColor = false;
			this->back_signup->Click += gcnew System::EventHandler(this, &Poker::back_signup_Click);
			// 
			// terms
			// 
			this->terms->AutoScroll = true;
			this->terms->BackColor = System::Drawing::SystemColors::Control;
			this->terms->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"terms.BackgroundImage")));
			this->terms->Controls->Add(this->term4);
			this->terms->Controls->Add(this->term3);
			this->terms->Controls->Add(this->term2);
			this->terms->Controls->Add(this->term1);
			this->terms->Controls->Add(this->terms_text);
			this->terms->Controls->Add(this->button1);
			this->terms->Location = System::Drawing::Point(60, 72);
			this->terms->Name = L"terms";
			this->terms->Size = System::Drawing::Size(448, 247);
			this->terms->TabIndex = 22;
			this->terms->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::terms_Paint);
			// 
			// term4
			// 
			this->term4->AutoSize = true;
			this->term4->BackColor = System::Drawing::Color::Transparent;
			this->term4->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->term4->ForeColor = System::Drawing::Color::Ivory;
			this->term4->Location = System::Drawing::Point(67, 148);
			this->term4->Name = L"term4";
			this->term4->Size = System::Drawing::Size(0, 22);
			this->term4->TabIndex = 27;
			this->term4->Click += gcnew System::EventHandler(this, &Poker::term4_Click);
			// 
			// term3
			// 
			this->term3->AutoSize = true;
			this->term3->BackColor = System::Drawing::Color::Transparent;
			this->term3->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->term3->ForeColor = System::Drawing::Color::Ivory;
			this->term3->Location = System::Drawing::Point(67, 119);
			this->term3->Name = L"term3";
			this->term3->Size = System::Drawing::Size(0, 22);
			this->term3->TabIndex = 26;
			this->term3->Click += gcnew System::EventHandler(this, &Poker::term3_Click);
			// 
			// term2
			// 
			this->term2->AutoSize = true;
			this->term2->BackColor = System::Drawing::Color::Transparent;
			this->term2->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->term2->ForeColor = System::Drawing::Color::Ivory;
			this->term2->Location = System::Drawing::Point(67, 93);
			this->term2->Name = L"term2";
			this->term2->Size = System::Drawing::Size(0, 22);
			this->term2->TabIndex = 25;
			this->term2->Click += gcnew System::EventHandler(this, &Poker::term2_Click);
			// 
			// term1
			// 
			this->term1->AutoSize = true;
			this->term1->BackColor = System::Drawing::Color::Transparent;
			this->term1->Font = (gcnew System::Drawing::Font(L"Garamond", 12));
			this->term1->ForeColor = System::Drawing::Color::Ivory;
			this->term1->Location = System::Drawing::Point(30, 65);
			this->term1->Name = L"term1";
			this->term1->Size = System::Drawing::Size(504, 132);
			this->term1->TabIndex = 24;
			this->term1->Text = resources->GetString(L"term1.Text");
			this->term1->Click += gcnew System::EventHandler(this, &Poker::term1_Click);
			// 
			// terms_text
			// 
			this->terms_text->AutoSize = true;
			this->terms_text->BackColor = System::Drawing::Color::Transparent;
			this->terms_text->Font = (gcnew System::Drawing::Font(L"Garamond", 24));
			this->terms_text->ForeColor = System::Drawing::Color::Ivory;
			this->terms_text->Location = System::Drawing::Point(81, 8);
			this->terms_text->Name = L"terms_text";
			this->terms_text->Size = System::Drawing::Size(367, 45);
			this->terms_text->TabIndex = 23;
			this->terms_text->Text = L"Terms and Conditions";
			this->terms_text->Click += gcnew System::EventHandler(this, &Poker::terms_text_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(172, 184);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 39);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Poker::button1_Click);
			// 
			// signup_button_5
			// 
			this->signup_button_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->signup_button_5->Enabled = false;
			this->signup_button_5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->signup_button_5->ForeColor = System::Drawing::Color::White;
			this->signup_button_5->Location = System::Drawing::Point(327, 293);
			this->signup_button_5->Name = L"signup_button_5";
			this->signup_button_5->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->signup_button_5->Size = System::Drawing::Size(140, 50);
			this->signup_button_5->TabIndex = 20;
			this->signup_button_5->Text = L"Sign Up";
			this->signup_button_5->UseVisualStyleBackColor = false;
			this->signup_button_5->Click += gcnew System::EventHandler(this, &Poker::signup_button_5_Click);
			// 
			// terms_button
			// 
			this->terms_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->terms_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->terms_button->ForeColor = System::Drawing::Color::White;
			this->terms_button->Location = System::Drawing::Point(144, 293);
			this->terms_button->Name = L"terms_button";
			this->terms_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->terms_button->Size = System::Drawing::Size(140, 50);
			this->terms_button->TabIndex = 19;
			this->terms_button->Text = L"Terms";
			this->terms_button->UseVisualStyleBackColor = false;
			this->terms_button->Click += gcnew System::EventHandler(this, &Poker::terms_button_Click);
			// 
			// agree_terms
			// 
			this->agree_terms->AutoSize = true;
			this->agree_terms->BackColor = System::Drawing::Color::Transparent;
			this->agree_terms->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->agree_terms->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->agree_terms->Location = System::Drawing::Point(143, 249);
			this->agree_terms->Name = L"agree_terms";
			this->agree_terms->Size = System::Drawing::Size(434, 34);
			this->agree_terms->TabIndex = 14;
			this->agree_terms->Text = L"I agree to the Terms and Conditions  ";
			this->agree_terms->UseVisualStyleBackColor = false;
			this->agree_terms->CheckedChanged += gcnew System::EventHandler(this, &Poker::agree_terms_CheckedChanged);
			this->agree_terms->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::agree_terms_KeyDown);
			// 
			// signup_c_password_enter
			// 
			this->signup_c_password_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signup_c_password_enter->Location = System::Drawing::Point(297, 210);
			this->signup_c_password_enter->Name = L"signup_c_password_enter";
			this->signup_c_password_enter->Size = System::Drawing::Size(201, 34);
			this->signup_c_password_enter->TabIndex = 13;
			this->signup_c_password_enter->UseSystemPasswordChar = true;
			this->signup_c_password_enter->TextChanged += gcnew System::EventHandler(this, &Poker::signup_c_password_enter_TextChanged);
			this->signup_c_password_enter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::signup_c_password_enter_KeyDown);
			// 
			// signup_c_password
			// 
			this->signup_c_password->AutoSize = true;
			this->signup_c_password->BackColor = System::Drawing::Color::Transparent;
			this->signup_c_password->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_c_password->ForeColor = System::Drawing::Color::LightYellow;
			this->signup_c_password->Location = System::Drawing::Point(84, 207);
			this->signup_c_password->Name = L"signup_c_password";
			this->signup_c_password->Size = System::Drawing::Size(217, 30);
			this->signup_c_password->TabIndex = 12;
			this->signup_c_password->Text = L"Confirm Password:";
			this->signup_c_password->Click += gcnew System::EventHandler(this, &Poker::signup_c_password_Click);
			// 
			// signup_password_enter
			// 
			this->signup_password_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signup_password_enter->Location = System::Drawing::Point(205, 165);
			this->signup_password_enter->Name = L"signup_password_enter";
			this->signup_password_enter->Size = System::Drawing::Size(293, 34);
			this->signup_password_enter->TabIndex = 11;
			this->signup_password_enter->UseSystemPasswordChar = true;
			this->signup_password_enter->TextChanged += gcnew System::EventHandler(this, &Poker::signup_password_enter_TextChanged);
			this->signup_password_enter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::signup_password_enter_KeyDown);
			// 
			// signup_username_enter
			// 
			this->signup_username_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->signup_username_enter->Location = System::Drawing::Point(207, 116);
			this->signup_username_enter->Name = L"signup_username_enter";
			this->signup_username_enter->Size = System::Drawing::Size(291, 34);
			this->signup_username_enter->TabIndex = 10;
			this->signup_username_enter->TextChanged += gcnew System::EventHandler(this, &Poker::signup_username_enter_TextChanged);
			this->signup_username_enter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::signup_username_enter_KeyDown);
			// 
			// signup_password
			// 
			this->signup_password->AutoSize = true;
			this->signup_password->BackColor = System::Drawing::Color::Transparent;
			this->signup_password->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_password->ForeColor = System::Drawing::Color::Ivory;
			this->signup_password->Location = System::Drawing::Point(88, 163);
			this->signup_password->Name = L"signup_password";
			this->signup_password->Size = System::Drawing::Size(120, 30);
			this->signup_password->TabIndex = 9;
			this->signup_password->Text = L"Password:";
			this->signup_password->Click += gcnew System::EventHandler(this, &Poker::signup_password_Click);
			// 
			// signup_username
			// 
			this->signup_username->AutoSize = true;
			this->signup_username->BackColor = System::Drawing::Color::Transparent;
			this->signup_username->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_username->ForeColor = System::Drawing::Color::Ivory;
			this->signup_username->Location = System::Drawing::Point(84, 119);
			this->signup_username->Name = L"signup_username";
			this->signup_username->Size = System::Drawing::Size(125, 30);
			this->signup_username->TabIndex = 8;
			this->signup_username->Text = L"Username:";
			this->signup_username->Click += gcnew System::EventHandler(this, &Poker::signup_username_Click);
			// 
			// signup_text
			// 
			this->signup_text->AutoSize = true;
			this->signup_text->BackColor = System::Drawing::Color::Transparent;
			this->signup_text->Font = (gcnew System::Drawing::Font(L"Garamond", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_text->ForeColor = System::Drawing::Color::Ivory;
			this->signup_text->Location = System::Drawing::Point(196, 39);
			this->signup_text->Name = L"signup_text";
			this->signup_text->Size = System::Drawing::Size(254, 78);
			this->signup_text->TabIndex = 4;
			this->signup_text->Text = L"Sign Up";
			this->signup_text->Click += gcnew System::EventHandler(this, &Poker::signup_text_Click);
			// 
			// leaderboard
			// 
			this->leaderboard->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leaderboard.BackgroundImage")));
			this->leaderboard->Controls->Add(this->leaderboard_back);
			this->leaderboard->Controls->Add(this->bottom_user_score);
			this->leaderboard->Controls->Add(this->bottom_user_name);
			this->leaderboard->Controls->Add(this->mid_user_score);
			this->leaderboard->Controls->Add(this->mid_user_name);
			this->leaderboard->Controls->Add(this->top_user_score);
			this->leaderboard->Controls->Add(this->top_user_name);
			this->leaderboard->Controls->Add(this->sr3);
			this->leaderboard->Controls->Add(this->sr2);
			this->leaderboard->Controls->Add(this->sr1);
			this->leaderboard->Controls->Add(this->leaderboard_score);
			this->leaderboard->Controls->Add(this->leaderboard_name);
			this->leaderboard->Controls->Add(this->leaderboard_sr);
			this->leaderboard->Controls->Add(this->leaderboard_text);
			this->leaderboard->Location = System::Drawing::Point(3, 0);
			this->leaderboard->Name = L"leaderboard";
			this->leaderboard->Size = System::Drawing::Size(591, 389);
			this->leaderboard->TabIndex = 7;
			this->leaderboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::leaderboard_Paint);
			// 
			// leaderboard_back
			// 
			this->leaderboard_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->leaderboard_back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderboard_back->ForeColor = System::Drawing::Color::White;
			this->leaderboard_back->Location = System::Drawing::Point(231, 309);
			this->leaderboard_back->Name = L"leaderboard_back";
			this->leaderboard_back->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->leaderboard_back->Size = System::Drawing::Size(140, 50);
			this->leaderboard_back->TabIndex = 17;
			this->leaderboard_back->Text = L"Back";
			this->leaderboard_back->UseVisualStyleBackColor = false;
			this->leaderboard_back->Click += gcnew System::EventHandler(this, &Poker::leaderboard_back_Click);
			// 
			// bottom_user_score
			// 
			this->bottom_user_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bottom_user_score->Location = System::Drawing::Point(315, 253);
			this->bottom_user_score->Name = L"bottom_user_score";
			this->bottom_user_score->ReadOnly = true;
			this->bottom_user_score->Size = System::Drawing::Size(166, 34);
			this->bottom_user_score->TabIndex = 14;
			this->bottom_user_score->TextChanged += gcnew System::EventHandler(this, &Poker::bottom_user_score_TextChanged);
			// 
			// bottom_user_name
			// 
			this->bottom_user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bottom_user_name->Location = System::Drawing::Point(118, 253);
			this->bottom_user_name->Name = L"bottom_user_name";
			this->bottom_user_name->ReadOnly = true;
			this->bottom_user_name->Size = System::Drawing::Size(166, 34);
			this->bottom_user_name->TabIndex = 13;
			this->bottom_user_name->TextChanged += gcnew System::EventHandler(this, &Poker::bottom_user_name_TextChanged);
			// 
			// mid_user_score
			// 
			this->mid_user_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mid_user_score->Location = System::Drawing::Point(315, 203);
			this->mid_user_score->Name = L"mid_user_score";
			this->mid_user_score->ReadOnly = true;
			this->mid_user_score->Size = System::Drawing::Size(166, 34);
			this->mid_user_score->TabIndex = 12;
			this->mid_user_score->TextChanged += gcnew System::EventHandler(this, &Poker::mid_user_score_TextChanged);
			// 
			// mid_user_name
			// 
			this->mid_user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mid_user_name->Location = System::Drawing::Point(118, 201);
			this->mid_user_name->Name = L"mid_user_name";
			this->mid_user_name->ReadOnly = true;
			this->mid_user_name->Size = System::Drawing::Size(166, 34);
			this->mid_user_name->TabIndex = 11;
			this->mid_user_name->TextChanged += gcnew System::EventHandler(this, &Poker::mid_user_name_TextChanged);
			// 
			// top_user_score
			// 
			this->top_user_score->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->top_user_score->Location = System::Drawing::Point(315, 151);
			this->top_user_score->Name = L"top_user_score";
			this->top_user_score->ReadOnly = true;
			this->top_user_score->Size = System::Drawing::Size(166, 34);
			this->top_user_score->TabIndex = 10;
			this->top_user_score->TextChanged += gcnew System::EventHandler(this, &Poker::top_user_score_TextChanged);
			// 
			// top_user_name
			// 
			this->top_user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->top_user_name->Location = System::Drawing::Point(118, 151);
			this->top_user_name->Name = L"top_user_name";
			this->top_user_name->Size = System::Drawing::Size(166, 34);
			this->top_user_name->TabIndex = 9;
			this->top_user_name->TextChanged += gcnew System::EventHandler(this, &Poker::top_user_name_TextChanged);
			// 
			// sr3
			// 
			this->sr3->AutoSize = true;
			this->sr3->BackColor = System::Drawing::Color::Transparent;
			this->sr3->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->sr3->ForeColor = System::Drawing::Color::Ivory;
			this->sr3->Location = System::Drawing::Point(65, 253);
			this->sr3->Name = L"sr3";
			this->sr3->Size = System::Drawing::Size(40, 38);
			this->sr3->TabIndex = 8;
			this->sr3->Text = L"3.";
			this->sr3->Click += gcnew System::EventHandler(this, &Poker::sr3_Click);
			// 
			// sr2
			// 
			this->sr2->AutoSize = true;
			this->sr2->BackColor = System::Drawing::Color::Transparent;
			this->sr2->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->sr2->ForeColor = System::Drawing::Color::Ivory;
			this->sr2->Location = System::Drawing::Point(65, 203);
			this->sr2->Name = L"sr2";
			this->sr2->Size = System::Drawing::Size(40, 38);
			this->sr2->TabIndex = 7;
			this->sr2->Text = L"2.";
			this->sr2->Click += gcnew System::EventHandler(this, &Poker::sr2_Click);
			// 
			// sr1
			// 
			this->sr1->AutoSize = true;
			this->sr1->BackColor = System::Drawing::Color::Transparent;
			this->sr1->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->sr1->ForeColor = System::Drawing::Color::Ivory;
			this->sr1->Location = System::Drawing::Point(65, 150);
			this->sr1->Name = L"sr1";
			this->sr1->Size = System::Drawing::Size(40, 38);
			this->sr1->TabIndex = 6;
			this->sr1->Text = L"1.";
			this->sr1->Click += gcnew System::EventHandler(this, &Poker::sr1_Click);
			// 
			// leaderboard_score
			// 
			this->leaderboard_score->AutoSize = true;
			this->leaderboard_score->BackColor = System::Drawing::Color::Transparent;
			this->leaderboard_score->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->leaderboard_score->ForeColor = System::Drawing::Color::Ivory;
			this->leaderboard_score->Location = System::Drawing::Point(366, 112);
			this->leaderboard_score->Name = L"leaderboard_score";
			this->leaderboard_score->Size = System::Drawing::Size(89, 38);
			this->leaderboard_score->TabIndex = 5;
			this->leaderboard_score->Text = L"Score";
			this->leaderboard_score->Click += gcnew System::EventHandler(this, &Poker::leaderboard_score_Click);
			// 
			// leaderboard_name
			// 
			this->leaderboard_name->AutoSize = true;
			this->leaderboard_name->BackColor = System::Drawing::Color::Transparent;
			this->leaderboard_name->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->leaderboard_name->ForeColor = System::Drawing::Color::Ivory;
			this->leaderboard_name->Location = System::Drawing::Point(159, 112);
			this->leaderboard_name->Name = L"leaderboard_name";
			this->leaderboard_name->Size = System::Drawing::Size(97, 38);
			this->leaderboard_name->TabIndex = 4;
			this->leaderboard_name->Text = L"Name";
			this->leaderboard_name->Click += gcnew System::EventHandler(this, &Poker::leaderboard_name_Click);
			// 
			// leaderboard_sr
			// 
			this->leaderboard_sr->AutoSize = true;
			this->leaderboard_sr->BackColor = System::Drawing::Color::Transparent;
			this->leaderboard_sr->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->leaderboard_sr->ForeColor = System::Drawing::Color::Ivory;
			this->leaderboard_sr->Location = System::Drawing::Point(52, 112);
			this->leaderboard_sr->Name = L"leaderboard_sr";
			this->leaderboard_sr->Size = System::Drawing::Size(76, 38);
			this->leaderboard_sr->TabIndex = 3;
			this->leaderboard_sr->Text = L"Sr# ";
			this->leaderboard_sr->Click += gcnew System::EventHandler(this, &Poker::leaderboard_sr_Click);
			// 
			// leaderboard_text
			// 
			this->leaderboard_text->AutoSize = true;
			this->leaderboard_text->BackColor = System::Drawing::Color::Transparent;
			this->leaderboard_text->Font = (gcnew System::Drawing::Font(L"Garamond", 42));
			this->leaderboard_text->ForeColor = System::Drawing::Color::Ivory;
			this->leaderboard_text->Location = System::Drawing::Point(153, 23);
			this->leaderboard_text->Name = L"leaderboard_text";
			this->leaderboard_text->Size = System::Drawing::Size(375, 78);
			this->leaderboard_text->TabIndex = 2;
			this->leaderboard_text->Text = L"Leaderboard";
			this->leaderboard_text->Click += gcnew System::EventHandler(this, &Poker::leaderboard_text_Click);
			// 
			// login_back
			// 
			this->login_back->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->login_back->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->login_back->ForeColor = System::Drawing::Color::White;
			this->login_back->Location = System::Drawing::Point(70, 243);
			this->login_back->Name = L"login_back";
			this->login_back->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->login_back->Size = System::Drawing::Size(140, 50);
			this->login_back->TabIndex = 16;
			this->login_back->Text = L"Back";
			this->login_back->UseVisualStyleBackColor = false;
			this->login_back->Click += gcnew System::EventHandler(this, &Poker::login_back_Click);
			// 
			// signup_button
			// 
			this->signup_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->signup_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->signup_button->ForeColor = System::Drawing::Color::White;
			this->signup_button->Location = System::Drawing::Point(70, 155);
			this->signup_button->Name = L"signup_button";
			this->signup_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->signup_button->Size = System::Drawing::Size(140, 50);
			this->signup_button->TabIndex = 6;
			this->signup_button->Text = L"Sign up";
			this->signup_button->UseVisualStyleBackColor = false;
			this->signup_button->Click += gcnew System::EventHandler(this, &Poker::signup_button_Click);
			// 
			// login_button
			// 
			this->login_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->login_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button->ForeColor = System::Drawing::Color::White;
			this->login_button->Location = System::Drawing::Point(70, 65);
			this->login_button->Name = L"login_button";
			this->login_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->login_button->Size = System::Drawing::Size(140, 50);
			this->login_button->TabIndex = 5;
			this->login_button->Text = L"Log in";
			this->login_button->UseVisualStyleBackColor = false;
			this->login_button->Click += gcnew System::EventHandler(this, &Poker::login_button_Click);
			// 
			// welcome_text
			// 
			this->welcome_text->AutoSize = true;
			this->welcome_text->BackColor = System::Drawing::Color::Transparent;
			this->welcome_text->Font = (gcnew System::Drawing::Font(L"Garamond", 42));
			this->welcome_text->ForeColor = System::Drawing::Color::Ivory;
			this->welcome_text->Location = System::Drawing::Point(291, 82);
			this->welcome_text->Name = L"welcome_text";
			this->welcome_text->Size = System::Drawing::Size(288, 78);
			this->welcome_text->TabIndex = 1;
			this->welcome_text->Text = L"Welcome";
			this->welcome_text->Click += gcnew System::EventHandler(this, &Poker::welcome_text_Click);
			// 
			// exit_button
			// 
			this->exit_button->BackColor = System::Drawing::Color::DimGray;
			this->exit_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit_button->ForeColor = System::Drawing::Color::White;
			this->exit_button->Location = System::Drawing::Point(231, 309);
			this->exit_button->Name = L"exit_button";
			this->exit_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->exit_button->Size = System::Drawing::Size(140, 50);
			this->exit_button->TabIndex = 5;
			this->exit_button->Text = L"Exit";
			this->exit_button->UseVisualStyleBackColor = false;
			this->exit_button->Click += gcnew System::EventHandler(this, &Poker::exit_button_Click);
			// 
			// play_button
			// 
			this->play_button->BackColor = System::Drawing::Color::Gray;
			this->play_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->play_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->play_button->ForeColor = System::Drawing::Color::White;
			this->play_button->Location = System::Drawing::Point(231, 174);
			this->play_button->Name = L"play_button";
			this->play_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->play_button->Size = System::Drawing::Size(140, 50);
			this->play_button->TabIndex = 4;
			this->play_button->Text = L"Play";
			this->play_button->UseVisualStyleBackColor = false;
			this->play_button->Click += gcnew System::EventHandler(this, &Poker::play_button_Click);
			// 
			// leaderboard_button
			// 
			this->leaderboard_button->BackColor = System::Drawing::Color::Gray;
			this->leaderboard_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderboard_button->ForeColor = System::Drawing::Color::White;
			this->leaderboard_button->Location = System::Drawing::Point(231, 243);
			this->leaderboard_button->Name = L"leaderboard_button";
			this->leaderboard_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->leaderboard_button->Size = System::Drawing::Size(140, 50);
			this->leaderboard_button->TabIndex = 2;
			this->leaderboard_button->Text = L"Leaderboard";
			this->leaderboard_button->UseVisualStyleBackColor = false;
			this->leaderboard_button->Click += gcnew System::EventHandler(this, &Poker::leaderboard_button_Click);
			// 
			// game_title
			// 
			this->game_title->AutoSize = true;
			this->game_title->BackColor = System::Drawing::Color::Transparent;
			this->game_title->Font = (gcnew System::Drawing::Font(L"Segoe Script", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->game_title->ForeColor = System::Drawing::Color::LightSteelBlue;
			this->game_title->Location = System::Drawing::Point(146, 30);
			this->game_title->Name = L"game_title";
			this->game_title->Size = System::Drawing::Size(363, 133);
			this->game_title->TabIndex = 0;
			this->game_title->Text = L"P♠KER";
			this->game_title->Click += gcnew System::EventHandler(this, &Poker::game_title_Click);
			// 
			// Login
			// 
			this->Login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Login.BackgroundImage")));
			this->Login->Controls->Add(this->Welcome_panel);
			this->Login->Controls->Add(this->login_password_enter);
			this->Login->Controls->Add(this->login_username_enter);
			this->Login->Controls->Add(this->login_password);
			this->Login->Controls->Add(this->login_username);
			this->Login->Controls->Add(this->login_text);
			this->Login->Controls->Add(this->login_button_4);
			this->Login->Controls->Add(this->login_back_button);
			this->Login->Location = System::Drawing::Point(-1, 2);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(594, 387);
			this->Login->TabIndex = 1;
			this->Login->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::Login_Paint);
			// 
			// Welcome_panel
			// 
			this->Welcome_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Welcome_panel.BackgroundImage")));
			this->Welcome_panel->Controls->Add(this->add_balance_panel);
			this->Welcome_panel->Controls->Add(this->rules_panel);
			this->Welcome_panel->Controls->Add(this->rules_cb);
			this->Welcome_panel->Controls->Add(this->log_out);
			this->Welcome_panel->Controls->Add(this->play_7);
			this->Welcome_panel->Controls->Add(this->add_balance);
			this->Welcome_panel->Controls->Add(this->Rules);
			this->Welcome_panel->Controls->Add(this->current_balance_tb);
			this->Welcome_panel->Controls->Add(this->current_username);
			this->Welcome_panel->Controls->Add(this->current_balance);
			this->Welcome_panel->Controls->Add(this->username_7);
			this->Welcome_panel->Controls->Add(this->welcome_heading_7);
			this->Welcome_panel->Controls->Add(this->refresh);
			this->Welcome_panel->Location = System::Drawing::Point(0, 0);
			this->Welcome_panel->Name = L"Welcome_panel";
			this->Welcome_panel->Size = System::Drawing::Size(591, 386);
			this->Welcome_panel->TabIndex = 2;
			this->Welcome_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::Welcome_panel_Paint);
			// 
			// add_balance_panel
			// 
			this->add_balance_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_balance_panel.BackgroundImage")));
			this->add_balance_panel->Controls->Add(this->faq_panel);
			this->add_balance_panel->Controls->Add(this->faq);
			this->add_balance_panel->Controls->Add(this->add_balance_button);
			this->add_balance_panel->Controls->Add(this->keycode_tb);
			this->add_balance_panel->Controls->Add(this->textBox1);
			this->add_balance_panel->Controls->Add(this->key_code);
			this->add_balance_panel->Controls->Add(this->add_credit);
			this->add_balance_panel->Controls->Add(this->add_balance_heading);
			this->add_balance_panel->Controls->Add(this->backto_welcome);
			this->add_balance_panel->Location = System::Drawing::Point(3, 0);
			this->add_balance_panel->Name = L"add_balance_panel";
			this->add_balance_panel->Size = System::Drawing::Size(588, 385);
			this->add_balance_panel->TabIndex = 26;
			this->add_balance_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::add_balance_panel_Paint);
			// 
			// faq_panel
			// 
			this->faq_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"faq_panel.BackgroundImage")));
			this->faq_panel->Controls->Add(this->bakto_add_balance);
			this->faq_panel->Controls->Add(this->label1);
			this->faq_panel->Controls->Add(this->faq_q2);
			this->faq_panel->Controls->Add(this->faq_a1);
			this->faq_panel->Controls->Add(this->faq_q1);
			this->faq_panel->Controls->Add(this->faq_heading);
			this->faq_panel->Location = System::Drawing::Point(76, 50);
			this->faq_panel->Name = L"faq_panel";
			this->faq_panel->Size = System::Drawing::Size(427, 281);
			this->faq_panel->TabIndex = 3;
			this->faq_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::faq_panel_Paint);
			// 
			// bakto_add_balance
			// 
			this->bakto_add_balance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->bakto_add_balance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->bakto_add_balance->ForeColor = System::Drawing::Color::White;
			this->bakto_add_balance->Location = System::Drawing::Point(313, 12);
			this->bakto_add_balance->Name = L"bakto_add_balance";
			this->bakto_add_balance->Size = System::Drawing::Size(84, 50);
			this->bakto_add_balance->TabIndex = 25;
			this->bakto_add_balance->Text = L"Back";
			this->bakto_add_balance->UseVisualStyleBackColor = false;
			this->bakto_add_balance->Click += gcnew System::EventHandler(this, &Poker::bakto_add_balance_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 14));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(45, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(434, 81);
			this->label1->TabIndex = 11;
			this->label1->Text = L"• Everyone has a starting balance of 0.\r\n   Please refer to your closest game dev"
				L"eloper\r\n   to add balance.";
			this->label1->Click += gcnew System::EventHandler(this, &Poker::label1_Click);
			// 
			// faq_q2
			// 
			this->faq_q2->AutoSize = true;
			this->faq_q2->BackColor = System::Drawing::Color::Transparent;
			this->faq_q2->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->faq_q2->ForeColor = System::Drawing::Color::Ivory;
			this->faq_q2->Location = System::Drawing::Point(15, 150);
			this->faq_q2->Name = L"faq_q2";
			this->faq_q2->Size = System::Drawing::Size(322, 34);
			this->faq_q2->TabIndex = 10;
			this->faq_q2->Text = L"2. How can I add balance\?";
			this->faq_q2->Click += gcnew System::EventHandler(this, &Poker::faq_q2_Click);
			// 
			// faq_a1
			// 
			this->faq_a1->AutoSize = true;
			this->faq_a1->BackColor = System::Drawing::Color::Transparent;
			this->faq_a1->Font = (gcnew System::Drawing::Font(L"Garamond", 14));
			this->faq_a1->ForeColor = System::Drawing::Color::White;
			this->faq_a1->Location = System::Drawing::Point(40, 82);
			this->faq_a1->Name = L"faq_a1";
			this->faq_a1->Size = System::Drawing::Size(448, 81);
			this->faq_a1->TabIndex = 9;
			this->faq_a1->Text = L"• Keycode is held by Game Developers and is \r\n   basically a masterkey which woul"
				L"d allow you\r\n   to add balance.";
			this->faq_a1->Click += gcnew System::EventHandler(this, &Poker::faq_a1_Click);
			// 
			// faq_q1
			// 
			this->faq_q1->AutoSize = true;
			this->faq_q1->BackColor = System::Drawing::Color::Transparent;
			this->faq_q1->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->faq_q1->ForeColor = System::Drawing::Color::Ivory;
			this->faq_q1->Location = System::Drawing::Point(11, 52);
			this->faq_q1->Name = L"faq_q1";
			this->faq_q1->Size = System::Drawing::Size(272, 34);
			this->faq_q1->TabIndex = 8;
			this->faq_q1->Text = L"1. What is a Keycode\?";
			this->faq_q1->Click += gcnew System::EventHandler(this, &Poker::faq_q1_Click);
			// 
			// faq_heading
			// 
			this->faq_heading->AutoSize = true;
			this->faq_heading->BackColor = System::Drawing::Color::Transparent;
			this->faq_heading->Font = (gcnew System::Drawing::Font(L"Garamond", 32));
			this->faq_heading->ForeColor = System::Drawing::Color::Ivory;
			this->faq_heading->Location = System::Drawing::Point(162, 4);
			this->faq_heading->Name = L"faq_heading";
			this->faq_heading->Size = System::Drawing::Size(136, 61);
			this->faq_heading->TabIndex = 7;
			this->faq_heading->Text = L"FAQ";
			this->faq_heading->Click += gcnew System::EventHandler(this, &Poker::faq_heading_Click);
			// 
			// faq
			// 
			this->faq->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->faq->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->faq->ForeColor = System::Drawing::Color::White;
			this->faq->Location = System::Drawing::Point(136, 248);
			this->faq->Name = L"faq";
			this->faq->Size = System::Drawing::Size(140, 50);
			this->faq->TabIndex = 23;
			this->faq->Text = L"FAQ";
			this->faq->UseVisualStyleBackColor = false;
			this->faq->Click += gcnew System::EventHandler(this, &Poker::faq_Click);
			// 
			// add_balance_button
			// 
			this->add_balance_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->add_balance_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->add_balance_button->ForeColor = System::Drawing::Color::White;
			this->add_balance_button->Location = System::Drawing::Point(316, 248);
			this->add_balance_button->Name = L"add_balance_button";
			this->add_balance_button->Size = System::Drawing::Size(140, 50);
			this->add_balance_button->TabIndex = 22;
			this->add_balance_button->Text = L"Add";
			this->add_balance_button->UseVisualStyleBackColor = false;
			this->add_balance_button->Click += gcnew System::EventHandler(this, &Poker::add_balance_button_Click);
			// 
			// keycode_tb
			// 
			this->keycode_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->keycode_tb->Location = System::Drawing::Point(278, 170);
			this->keycode_tb->Name = L"keycode_tb";
			this->keycode_tb->Size = System::Drawing::Size(175, 37);
			this->keycode_tb->TabIndex = 10;
			this->keycode_tb->UseSystemPasswordChar = true;
			this->keycode_tb->TextChanged += gcnew System::EventHandler(this, &Poker::keycode_tb_TextChanged);
			this->keycode_tb->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::keycode_tb_KeyDown);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(229, 124);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(224, 37);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Poker::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::textBox1_KeyDown);
			// 
			// key_code
			// 
			this->key_code->AutoSize = true;
			this->key_code->BackColor = System::Drawing::Color::Transparent;
			this->key_code->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->key_code->ForeColor = System::Drawing::Color::Ivory;
			this->key_code->Location = System::Drawing::Point(131, 170);
			this->key_code->Name = L"key_code";
			this->key_code->Size = System::Drawing::Size(156, 38);
			this->key_code->TabIndex = 8;
			this->key_code->Text = L"Key Code:";
			this->key_code->Click += gcnew System::EventHandler(this, &Poker::key_code_Click);
			// 
			// add_credit
			// 
			this->add_credit->AutoSize = true;
			this->add_credit->BackColor = System::Drawing::Color::Transparent;
			this->add_credit->Font = (gcnew System::Drawing::Font(L"Garamond", 20));
			this->add_credit->ForeColor = System::Drawing::Color::Ivory;
			this->add_credit->Location = System::Drawing::Point(131, 121);
			this->add_credit->Name = L"add_credit";
			this->add_credit->Size = System::Drawing::Size(106, 38);
			this->add_credit->TabIndex = 7;
			this->add_credit->Text = L"Credit:";
			this->add_credit->Click += gcnew System::EventHandler(this, &Poker::add_credit_Click);
			// 
			// add_balance_heading
			// 
			this->add_balance_heading->AutoSize = true;
			this->add_balance_heading->BackColor = System::Drawing::Color::Transparent;
			this->add_balance_heading->Font = (gcnew System::Drawing::Font(L"Garamond", 42));
			this->add_balance_heading->ForeColor = System::Drawing::Color::Ivory;
			this->add_balance_heading->Location = System::Drawing::Point(145, 35);
			this->add_balance_heading->Name = L"add_balance_heading";
			this->add_balance_heading->Size = System::Drawing::Size(377, 78);
			this->add_balance_heading->TabIndex = 6;
			this->add_balance_heading->Text = L"Add Balance";
			this->add_balance_heading->Click += gcnew System::EventHandler(this, &Poker::add_balance_heading_Click);
			// 
			// backto_welcome
			// 
			this->backto_welcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->backto_welcome->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->backto_welcome->ForeColor = System::Drawing::Color::White;
			this->backto_welcome->Location = System::Drawing::Point(481, 23);
			this->backto_welcome->Name = L"backto_welcome";
			this->backto_welcome->Size = System::Drawing::Size(84, 50);
			this->backto_welcome->TabIndex = 24;
			this->backto_welcome->Text = L"Back";
			this->backto_welcome->UseVisualStyleBackColor = false;
			this->backto_welcome->Click += gcnew System::EventHandler(this, &Poker::backto_welcome_Click);
			// 
			// rules_panel
			// 
			this->rules_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rules_panel.BackgroundImage")));
			this->rules_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rules_panel->Controls->Add(this->rules_text);
			this->rules_panel->Controls->Add(this->back_rules);
			this->rules_panel->Controls->Add(this->rules_heading);
			this->rules_panel->Location = System::Drawing::Point(69, 62);
			this->rules_panel->Name = L"rules_panel";
			this->rules_panel->Size = System::Drawing::Size(451, 275);
			this->rules_panel->TabIndex = 26;
			this->rules_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Poker::rules_panel_Paint);
			// 
			// rules_text
			// 
			this->rules_text->AutoSize = true;
			this->rules_text->BackColor = System::Drawing::Color::Transparent;
			this->rules_text->Font = (gcnew System::Drawing::Font(L"Garamond", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rules_text->ForeColor = System::Drawing::Color::Ivory;
			this->rules_text->Location = System::Drawing::Point(14, 75);
			this->rules_text->Name = L"rules_text";
			this->rules_text->Size = System::Drawing::Size(540, 243);
			this->rules_text->TabIndex = 28;
			this->rules_text->Text = resources->GetString(L"rules_text.Text");
			this->rules_text->Click += gcnew System::EventHandler(this, &Poker::rules_text_Click);
			// 
			// back_rules
			// 
			this->back_rules->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->back_rules->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->back_rules->ForeColor = System::Drawing::Color::White;
			this->back_rules->Location = System::Drawing::Point(348, 21);
			this->back_rules->Name = L"back_rules";
			this->back_rules->Size = System::Drawing::Size(81, 40);
			this->back_rules->TabIndex = 29;
			this->back_rules->Text = L"Back";
			this->back_rules->UseVisualStyleBackColor = false;
			this->back_rules->Click += gcnew System::EventHandler(this, &Poker::back_rules_Click);
			// 
			// rules_heading
			// 
			this->rules_heading->AutoSize = true;
			this->rules_heading->BackColor = System::Drawing::Color::Transparent;
			this->rules_heading->Font = (gcnew System::Drawing::Font(L"Garamond", 32));
			this->rules_heading->ForeColor = System::Drawing::Color::Ivory;
			this->rules_heading->Location = System::Drawing::Point(169, 16);
			this->rules_heading->Name = L"rules_heading";
			this->rules_heading->Size = System::Drawing::Size(141, 61);
			this->rules_heading->TabIndex = 27;
			this->rules_heading->Text = L"Rules";
			this->rules_heading->Click += gcnew System::EventHandler(this, &Poker::rules_heading_Click);
			// 
			// rules_cb
			// 
			this->rules_cb->AutoSize = true;
			this->rules_cb->BackColor = System::Drawing::Color::Transparent;
			this->rules_cb->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->rules_cb->ForeColor = System::Drawing::Color::White;
			this->rules_cb->Location = System::Drawing::Point(204, 337);
			this->rules_cb->Name = L"rules_cb";
			this->rules_cb->Size = System::Drawing::Size(265, 35);
			this->rules_cb->TabIndex = 25;
			this->rules_cb->Text = L"I have read the Rules";
			this->rules_cb->UseVisualStyleBackColor = false;
			this->rules_cb->CheckedChanged += gcnew System::EventHandler(this, &Poker::rules_cb_CheckedChanged);
			// 
			// log_out
			// 
			this->log_out->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->log_out->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->log_out->ForeColor = System::Drawing::Color::White;
			this->log_out->Location = System::Drawing::Point(36, 26);
			this->log_out->Name = L"log_out";
			this->log_out->Size = System::Drawing::Size(102, 50);
			this->log_out->TabIndex = 24;
			this->log_out->Text = L"Log out";
			this->log_out->UseVisualStyleBackColor = false;
			this->log_out->Click += gcnew System::EventHandler(this, &Poker::log_out_Click);
			// 
			// play_7
			// 
			this->play_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->play_7->Enabled = false;
			this->play_7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->play_7->ForeColor = System::Drawing::Color::White;
			this->play_7->Location = System::Drawing::Point(305, 211);
			this->play_7->Name = L"play_7";
			this->play_7->Size = System::Drawing::Size(140, 50);
			this->play_7->TabIndex = 23;
			this->play_7->Text = L"Play";
			this->play_7->UseVisualStyleBackColor = false;
			this->play_7->Click += gcnew System::EventHandler(this, &Poker::play_7_Click);
			// 
			// add_balance
			// 
			this->add_balance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->add_balance->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->add_balance->ForeColor = System::Drawing::Color::White;
			this->add_balance->Location = System::Drawing::Point(142, 269);
			this->add_balance->Name = L"add_balance";
			this->add_balance->Size = System::Drawing::Size(140, 50);
			this->add_balance->TabIndex = 22;
			this->add_balance->Text = L"Add Balance";
			this->add_balance->UseVisualStyleBackColor = false;
			this->add_balance->Click += gcnew System::EventHandler(this, &Poker::add_balance_Click);
			// 
			// Rules
			// 
			this->Rules->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->Rules->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->Rules->ForeColor = System::Drawing::Color::White;
			this->Rules->Location = System::Drawing::Point(142, 211);
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(140, 50);
			this->Rules->TabIndex = 21;
			this->Rules->Text = L"Rules";
			this->Rules->UseVisualStyleBackColor = false;
			this->Rules->Click += gcnew System::EventHandler(this, &Poker::Rules_Click);
			// 
			// current_balance_tb
			// 
			this->current_balance_tb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->current_balance_tb->Location = System::Drawing::Point(253, 155);
			this->current_balance_tb->Name = L"current_balance_tb";
			this->current_balance_tb->ReadOnly = true;
			this->current_balance_tb->Size = System::Drawing::Size(192, 37);
			this->current_balance_tb->TabIndex = 9;
			this->current_balance_tb->TextChanged += gcnew System::EventHandler(this, &Poker::current_balance_tb_TextChanged);
			// 
			// current_username
			// 
			this->current_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->current_username->Location = System::Drawing::Point(228, 111);
			this->current_username->Name = L"current_username";
			this->current_username->ReadOnly = true;
			this->current_username->Size = System::Drawing::Size(218, 37);
			this->current_username->TabIndex = 8;
			this->current_username->TextChanged += gcnew System::EventHandler(this, &Poker::current_username_TextChanged);
			// 
			// current_balance
			// 
			this->current_balance->AutoSize = true;
			this->current_balance->BackColor = System::Drawing::Color::Transparent;
			this->current_balance->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->current_balance->ForeColor = System::Drawing::Color::Ivory;
			this->current_balance->Location = System::Drawing::Point(141, 154);
			this->current_balance->Name = L"current_balance";
			this->current_balance->Size = System::Drawing::Size(110, 34);
			this->current_balance->TabIndex = 7;
			this->current_balance->Text = L"Balance:";
			this->current_balance->Click += gcnew System::EventHandler(this, &Poker::current_balance_Click);
			// 
			// username_7
			// 
			this->username_7->AutoSize = true;
			this->username_7->BackColor = System::Drawing::Color::Transparent;
			this->username_7->Font = (gcnew System::Drawing::Font(L"Garamond", 18));
			this->username_7->ForeColor = System::Drawing::Color::Ivory;
			this->username_7->Location = System::Drawing::Point(141, 110);
			this->username_7->Name = L"username_7";
			this->username_7->Size = System::Drawing::Size(92, 34);
			this->username_7->TabIndex = 6;
			this->username_7->Text = L"Name:";
			this->username_7->Click += gcnew System::EventHandler(this, &Poker::username_7_Click);
			// 
			// welcome_heading_7
			// 
			this->welcome_heading_7->AutoSize = true;
			this->welcome_heading_7->BackColor = System::Drawing::Color::Transparent;
			this->welcome_heading_7->Font = (gcnew System::Drawing::Font(L"Garamond", 42));
			this->welcome_heading_7->ForeColor = System::Drawing::Color::Ivory;
			this->welcome_heading_7->Location = System::Drawing::Point(180, 26);
			this->welcome_heading_7->Name = L"welcome_heading_7";
			this->welcome_heading_7->Size = System::Drawing::Size(288, 78);
			this->welcome_heading_7->TabIndex = 5;
			this->welcome_heading_7->Text = L"Welcome";
			this->welcome_heading_7->Click += gcnew System::EventHandler(this, &Poker::welcome_heading_7_Click);
			// 
			// refresh
			// 
			this->refresh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->refresh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F));
			this->refresh->ForeColor = System::Drawing::Color::White;
			this->refresh->Location = System::Drawing::Point(305, 267);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(140, 50);
			this->refresh->TabIndex = 26;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = false;
			this->refresh->Click += gcnew System::EventHandler(this, &Poker::refresh_Click);
			// 
			// login_password_enter
			// 
			this->login_password_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->login_password_enter->Location = System::Drawing::Point(269, 216);
			this->login_password_enter->Name = L"login_password_enter";
			this->login_password_enter->Size = System::Drawing::Size(168, 34);
			this->login_password_enter->TabIndex = 7;
			this->login_password_enter->UseSystemPasswordChar = true;
			this->login_password_enter->TextChanged += gcnew System::EventHandler(this, &Poker::login_password_enter_TextChanged);
			this->login_password_enter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::login_password_enter_KeyDown);
			// 
			// login_username_enter
			// 
			this->login_username_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->login_username_enter->Location = System::Drawing::Point(269, 158);
			this->login_username_enter->Name = L"login_username_enter";
			this->login_username_enter->Size = System::Drawing::Size(168, 34);
			this->login_username_enter->TabIndex = 6;
			this->login_username_enter->TextChanged += gcnew System::EventHandler(this, &Poker::login_username_enter_TextChanged);
			this->login_username_enter->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Poker::login_username_enter_KeyDown);
			// 
			// login_password
			// 
			this->login_password->AutoSize = true;
			this->login_password->BackColor = System::Drawing::Color::Transparent;
			this->login_password->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_password->ForeColor = System::Drawing::Color::Ivory;
			this->login_password->Location = System::Drawing::Point(149, 216);
			this->login_password->Name = L"login_password";
			this->login_password->Size = System::Drawing::Size(120, 30);
			this->login_password->TabIndex = 5;
			this->login_password->Text = L"Password:";
			this->login_password->Click += gcnew System::EventHandler(this, &Poker::login_password_Click);
			// 
			// login_username
			// 
			this->login_username->AutoSize = true;
			this->login_username->BackColor = System::Drawing::Color::Transparent;
			this->login_username->Font = (gcnew System::Drawing::Font(L"Garamond", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_username->ForeColor = System::Drawing::Color::Ivory;
			this->login_username->Location = System::Drawing::Point(145, 165);
			this->login_username->Name = L"login_username";
			this->login_username->Size = System::Drawing::Size(125, 30);
			this->login_username->TabIndex = 4;
			this->login_username->Text = L"Username:";
			this->login_username->Click += gcnew System::EventHandler(this, &Poker::login_username_Click);
			// 
			// login_text
			// 
			this->login_text->AutoSize = true;
			this->login_text->BackColor = System::Drawing::Color::Transparent;
			this->login_text->Font = (gcnew System::Drawing::Font(L"Garamond", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_text->ForeColor = System::Drawing::Color::Ivory;
			this->login_text->Location = System::Drawing::Point(217, 59);
			this->login_text->Name = L"login_text";
			this->login_text->Size = System::Drawing::Size(219, 78);
			this->login_text->TabIndex = 3;
			this->login_text->Text = L"Log In";
			this->login_text->Click += gcnew System::EventHandler(this, &Poker::login_text_Click);
			// 
			// login_button_4
			// 
			this->login_button_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->login_button_4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_button_4->ForeColor = System::Drawing::Color::White;
			this->login_button_4->Location = System::Drawing::Point(153, 283);
			this->login_button_4->Name = L"login_button_4";
			this->login_button_4->Size = System::Drawing::Size(140, 50);
			this->login_button_4->TabIndex = 22;
			this->login_button_4->Text = L"Log In";
			this->login_button_4->UseVisualStyleBackColor = false;
			this->login_button_4->Click += gcnew System::EventHandler(this, &Poker::login_button_4_Click);
			// 
			// login_back_button
			// 
			this->login_back_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->login_back_button->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_back_button->ForeColor = System::Drawing::Color::White;
			this->login_back_button->Location = System::Drawing::Point(325, 283);
			this->login_back_button->Name = L"login_back_button";
			this->login_back_button->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->login_back_button->Size = System::Drawing::Size(140, 50);
			this->login_back_button->TabIndex = 22;
			this->login_back_button->Text = L"Back";
			this->login_back_button->UseVisualStyleBackColor = false;
			this->login_back_button->Click += gcnew System::EventHandler(this, &Poker::login_back_button_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// Poker
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(588, 387);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->main_menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Poker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Poker";
			this->Load += gcnew System::EventHandler(this, &Poker::Poker_Load);
			this->main_menu->ResumeLayout(false);
			this->main_menu->PerformLayout();
			this->login_screen->ResumeLayout(false);
			this->login_screen->PerformLayout();
			this->Signup->ResumeLayout(false);
			this->Signup->PerformLayout();
			this->terms->ResumeLayout(false);
			this->terms->PerformLayout();
			this->leaderboard->ResumeLayout(false);
			this->leaderboard->PerformLayout();
			this->Login->ResumeLayout(false);
			this->Login->PerformLayout();
			this->Welcome_panel->ResumeLayout(false);
			this->Welcome_panel->PerformLayout();
			this->add_balance_panel->ResumeLayout(false);
			this->add_balance_panel->PerformLayout();
			this->faq_panel->ResumeLayout(false);
			this->faq_panel->PerformLayout();
			this->rules_panel->ResumeLayout(false);
			this->rules_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		//Backend

	private:					//Creating variables

		//For Leaderboard
		String^ top_name;
		String^ mid_name;
		String^ bottom_name;
		int top_score;
		int mid_score;
		int bottom_score;

		//For Signup
		String^ new_username;
		String^ new_password;
		String^ confirm_password;

		//User Details
		String^ current_user;
		String^ current_user_balance;

		//Creating Methods/Functions
	private:
		void leaderboardcreate()						//Creating function for creating leaderboard
		{
			std::string top = "N/A";
			std::string top2 = "N/A";
			std::string top3 = "N/A";
			int first = 0;
			int second = 0;
			int third = 0;
			std::string n;
			int b;

			std::ifstream file2("..\\Database\\leaderboard.txt");		//Filling implementation for leaderboard
			while (file2 >> n >> b)
			{
				if (b > first)
				{
					third = second;
					top3 = top2;
					second = first;
					top2 = top;
					first = b;
					top = n;
				}
				else if (b > second)
				{
					third = second;
					top3 = top2;
					second = b;
					top2 = n;
				}
				else if (b > third)
				{
					third = b;
					top3 = n;
				}
			}

			top_score = first;
			mid_score = second;
			bottom_score = third;
			top_name = gcnew String(top.c_str());				//converts std string into system string. Username read from the file in this case
			mid_name = gcnew String(top2.c_str());
			bottom_name = gcnew String(top3.c_str());

			top_user_name->Text = top_name;				//Showing current 1st name in leaderboard
			mid_user_name->Text = mid_name;				//Showing current 2nd name in leaderboard
			bottom_user_name->Text = bottom_name;		//Showing current 3rd name in leaderboard
			top_user_score->Text = System::Convert::ToString(top_score);			//Converting the score from integer to string to display it as text in textbox
			mid_user_score->Text = System::Convert::ToString(mid_score);
			bottom_user_score->Text = System::Convert::ToString(bottom_score);
		}

		void update_leaderboard() {								//Creating function for updating leaderboard
			std::ofstream file2("..\\Database\\leaderboard.txt", std::ios::app);			//appending file to write
			file2 << p1.getname() << std::endl << p1.getballance() << std::endl << std::endl;  //writing the line
		}

		void clear() {										//Creating a function to clear all textbox (to prevent data leak)
			login_username_enter->Text = "";
			login_password_enter->Text = "";

			signup_username_enter->Text = "";
			signup_password_enter->Text = "";
			signup_c_password_enter->Text = "";
			agree_terms->Checked = !agree_terms;

			textBox1->Text = "";
			keycode_tb->Text = "";
			rules_cb->Checked = !rules_cb;

			new_username = "";
			new_password = "";
			confirm_password = "";
		}

		//Defining all tools (panel, button textbox etc) used in the form - Backend

#pragma endregion
	private: System::Void Poker_Load(System::Object^ sender, System::EventArgs^ e) {									//Windows Form
	}
	private: System::Void main_menu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {			//Panel1 -> main_menu
	}
	private: System::Void game_title_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel1 -> Text1 -> game_title
	}
	private: System::Void play_button_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel1 -> Button1 -> play_button
		/*2*/ login_screen->Show();		//Showing the login screen panel when button is pressed
	}
	private: System::Void leaderboard_button_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel1 -> Button2 -> leaderboard_button
		leaderboardcreate();			//creating the leaderboard when button is pressed
		/*3*/ leaderboard->Show();		//Showing the leaderboard panel when button is pressed
		/*2*/ login_screen->Show();		//Showing previous panel i.e., panel 2 so that the third panel is visible
	}
	private: System::Void exit_button_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel1 -> Button3 -> exit_button
		Application::Exit();		//Closing the application when exit button pressed	
	}

	private: System::Void login_screen_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {		//Panel2 -> login_screen
	}
	private: System::Void welcome_text_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel2 -> Text1 -> welcome_text
	}
	private: System::Void login_button_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel2 -> Button1 -> login_button
		/*6*/ Login->Show();
		/*4*/ Signup->Show();
		/*3*/ leaderboard->Show();
	}
	private: System::Void signup_button_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel2 -> Button2 -> signup_button
		/*4*/ Signup->Show();
	}
	private: System::Void login_back_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel2 -> Button3 ->login_back
		/*2*/ login_screen->Hide();
	}

	private: System::Void leaderboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {		//Panel3 -> leaderboard
	}
	private: System::Void leaderboard_text_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> Text1 -> leaderboard_text
	}
	private: System::Void leaderboard_sr_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel3 -> Text2 -> leaderboard_sr
	}
	private: System::Void leaderboard_name_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> Text3 -> leaderboard_name
	}
	private: System::Void leaderboard_score_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> Text4 -> leaderboard_score
	}
	private: System::Void sr1_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel3 -> Text5 -> sr1
	}
	private: System::Void sr2_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel3 -> Text6 -> sr2
	}
	private: System::Void sr3_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel3 -> Text7 -> sr3
	}
	private: System::Void top_user_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> TextBox1 -> top_user_name	
	}
	private: System::Void mid_user_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> TextBox2 -> mid_user_name
	}
	private: System::Void bottom_user_name_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel3 -> TextBox3 -> bottom_user_name
	}
	private: System::Void top_user_score_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel3 -> TextBox4 -> top_user_score
	}
	private: System::Void mid_user_score_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel3 -> TextBox5 -> mid_user_score
	}
	private: System::Void bottom_user_score_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel3 -> TextBox6 -> bottom_user_score
	}
	private: System::Void leaderboard_back_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel3 -> Button1 -> leaderboard_back
		/*2*/ login_screen->Hide();
		/*3*/ leaderboard->Hide();
	}

	private: System::Void Signup_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {				//Panel4 -> Signup
	}
	private: System::Void signup_text_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel4 -> Text1 -> Signup_text
	}
	private: System::Void signup_username_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel4 -> Text2 -> signup_username
	}
	private: System::Void signup_password_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel4 -> Text3 -> signup_password
	}
	private: System::Void signup_c_password_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel4 -> Text4 -> signup_c_password
	}

	private: System::Void signup_username_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) {				//Panel4 -> Textbox1 -> signup_username_enter
		new_username = signup_username_enter->Text;
	}
	private: System::Void signup_password_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) {				//Panel4 -> Textbox2 -> signup_password_enter
		new_password = signup_password_enter->Text;
	}
	private: System::Void signup_c_password_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) {			//Panel4 -> Textbox3 -> signup_c_password_enter
		confirm_password = signup_c_password_enter->Text;
	}
	private: System::Void agree_terms_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel4 -> Checkbox1 -> agree_terms
		if (agree_terms->Checked)					//If checkbox is checked
			signup_button_5->Enabled = true;		//Button is enabled
		else
			signup_button_5->Enabled = false;		//Else button is disabled
	}
	private: System::Void terms_button_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel4 -> Button1 -> terms_button
		/*5*/ terms->Show();
	}
	private: System::Void signup_button_5_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel4 -> Button2 -> signup_button_5
		std::string un, pass;
		bool flag = true;
		if (signup_username_enter->Text == "" || signup_password_enter->Text == "" || signup_c_password_enter->Text == "")		 //Make sure all the fields have been filled
			MessageBox::Show("Please fill all the fields", "Data not entered", MessageBoxButtons::OK, MessageBoxIcon::Error);    //error box appears
		else
		{
			if (confirm_password == new_password)
			{
				msclr::interop::marshal_context context;											//to convert system strin (String^) into std string
				std::string standardusername = context.marshal_as<std::string>(new_username);		//conversion of username
				std::string standardpassword = context.marshal_as<std::string>(new_password);		//conversion of password

				std::ifstream file("..\\Database\\database.txt", std::ios::app);
				while (file >> un >> pass)
				{
					if (un == standardusername)
					{
						MessageBox::Show("Username already taken. Please select a new one", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
						flag = false;
						break;
					}
					else
						flag = true;

				}
				if (flag == true)
				{
					std::ofstream file2("..\\Database\\database.txt", std::ios::app);//appending file to write
					file2 << standardusername << std::endl << standardpassword << std::endl << std::endl;  //writing the line
					MessageBox::Show("Credentials Saved Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					clear();
					/*3*/ leaderboard->Hide();
					/*4*/ Signup->Hide();
					/*5*/ Login->Hide();
				}
			}
			else
				MessageBox::Show("Passwords do not match", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void back_signup_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel4 -> Button3 -> back_signup
		clear();						//prevent data leak
		/*3*/ leaderboard->Hide();
		/*4*/ Signup->Hide();
	}

	private: System::Void terms_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {				//Panel5 -> terms
	}
	private: System::Void terms_text_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel5 -> text1 -> terms_text
	}

	private: System::Void term1_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel5 -> text2 -> term1
	}
	private: System::Void term2_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel5 -> text3 -> term2
	}
	private: System::Void term3_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel5 -> text4 -> term3
	}
	private: System::Void term4_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel5 -> text5 -> term4
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel5 -> button1 -> button1
		/*5*/ terms->Hide();
	}

	private: System::Void Login_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {				//Panel6 -> Login
	}
	private: System::Void login_text_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel6 -> Text1 -> login_text
	}
	private: System::Void login_username_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel6 -> Text2 -> login_username
	}
	private: System::Void login_password_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel6 -> Text1 -> login_passowrd
	}
	private: System::Void login_username_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) {				//Panel6 -> TextBox1 -> login_username_enter
	}
	private: System::Void login_password_enter_TextChanged(System::Object^ sender, System::EventArgs^ e) {				//Panel6 -> TextBox2 -> login_password_enter
	}
	private: System::Void login_button_4_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel6 -> Button1 -> login_button_4
		if (login_username_enter->Text == "" || login_password_enter->Text == "")                //Check whether all fields have been entered or not
			MessageBox::Show("Please fill all the fields", "Data not entered", MessageBoxButtons::OK, MessageBoxIcon::Error);    //error box appears
		else
		{
			String^ n;
			std::string name;
			bool exist = false;			 //check whether user credentials exist or not
			std::string un;              //username read from the file
			std::string pass;            //password read from the file
			std::ifstream file("..\\Database\\database.txt");   //open default database file
			while (file >> un >> pass)                //checks end of file
			{
				String^ str2 = gcnew String(un.c_str());       //converts std string into system string. Username read from the file in this case
				String^ str3 = gcnew String(pass.c_str());     //converts std password read from the file into system string
				if (login_username_enter->Text == str2 && login_password_enter->Text == str3)   //comparison
				{
					current_user = str2;
					n = current_user;
					name = un;
					exist = true;
				}
			}
			file.close();								      //file close function
			if (exist == true)
			{
				MessageBox::Show("Logged In Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				p1.setname(name);			//Saving player name using object - OOP
				clear();
				Welcome_panel->Show();
				current_username->Text = gcnew String((p1.getname()).c_str());
				current_balance_tb->Text = Convert::ToString(p1.getballance());
			}
			else
			{
				MessageBox::Show("Incorrect Username or Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void login_back_button_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel6 -> Button2 -> login_back_button
		clear();
		/*3*/ leaderboard->Hide();
		/*4*/ Signup->Hide();
		/*6*/ Login->Hide();
	}

	private: System::Void Welcome_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {		//Panel7 -> Welcome
	}
	private: System::Void welcome_heading_7_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel7 -> text1 -> welcome_heading
	}
	private: System::Void username_7_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel7 -> text2 -> username
	}

	private: System::Void current_balance_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel7 -> text3 -> current_balance
	}

	private: System::Void current_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {					//Panel7 -> textbox1 -> username

	}
	private: System::Void current_balance_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {				//Panel7 -> textbox2 -> balance

	}
	private: System::Void Rules_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel7 -> button1 -> Rules
		/*8*/ rules_panel->Show();
	}
	private: System::Void play_7_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel7 -> button2 -> Play
		Game^ game = gcnew Game(&p1);				//Creating new form - using parameterized constructor to send and save object address
		game->ShowDialog();							//Showing new form
	}
	private: System::Void add_balance_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel7 -> button3 -> add_balance
		/*9*/ add_balance_panel->Show();
	}
	private: System::Void log_out_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel7 -> button4 -> log_out
		MessageBox::Show("Logged Out Successful\nRemaining Balance has been cashed out.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		update_leaderboard();
		p1.setballance(0);				//using setter for balance to reset balance to 0
		clear();
		/*3*/ leaderboard->Hide();
		/*4*/ Signup->Hide();
		/*6*/ Login->Hide();
		/*7*/ Welcome_panel->Hide();
	}
	private: System::Void rules_cb_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {						//Panel7 -> checkbox1 -> read_rules
		if (rules_cb->Checked)					//If checkbox is checked
			play_7->Enabled = true;				//Button is enabled
		else
			play_7->Enabled = false;			//Else button is disabled
	}
	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel7 -> button 5 -> refresh
		current_balance_tb->Text = Convert::ToString(p1.getballance());					//using getter for balance
	}

	private: System::Void rules_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {		//Panel8 -> Rules
	}
	private: System::Void rules_heading_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel8 -> text1 -> rules heading
	}
	private: System::Void rules_text_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel8 -> text2 -> rules
	}
	private: System::Void back_rules_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel8 -> button1 -> back button
		/*8*/ rules_panel->Hide();
	}

	private: System::Void add_balance_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {	//Panel9 -> add_balance
	}
	private: System::Void add_balance_heading_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel9 -> text1 -> heading
	}
	private: System::Void add_credit_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel9 -> text2 -> add_credit
	}
	private: System::Void key_code_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel9 -> text3 -> key_code
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {							//Panel9 -> textbox1 -> credit
	}
	private: System::Void keycode_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {						//Panel9 -> textbox2 -> keycode
	}
	private: System::Void faq_Click(System::Object^ sender, System::EventArgs^ e) {										//Panel9 -> button1
		/*10*/ faq_panel->Show();
	}
	private: System::Void add_balance_button_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel9 -> button1 -> add balance
		int newbal;

		if (keycode_tb->Text != "OOPS")
			MessageBox::Show("Invalid Keycode", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			MessageBox::Show("Credit Added Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			newbal = System::Convert::ToInt32(textBox1->Text);
			p1.modifyballance(newbal);													//using modify balance funtion to change user balance
			current_balance_tb->Text = Convert::ToString(p1.getballance());				//using getter for balance
			add_balance_panel->Hide();
		}
		clear();
	}
	private: System::Void backto_welcome_Click(System::Object^ sender, System::EventArgs^ e) {							//Panel9 -> button1 -> back to welcome
		clear();
		/*9*/ add_balance_panel->Hide();
	}

	private: System::Void faq_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {			//Panel10 -> FAQ
	}
	private: System::Void faq_heading_Click(System::Object^ sender, System::EventArgs^ e) {								//Panel10 -> text1 -> faq heading
	}
	private: System::Void faq_q1_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel10-> text2 -> faq question 1
	}
	private: System::Void faq_a1_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel10-> text3 -> faq answer 1
	}
	private: System::Void faq_q2_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel10-> text4 -> faq question 2
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {									//Panel10-> text5 -> faq answer 1
	}
	private: System::Void bakto_add_balance_Click(System::Object^ sender, System::EventArgs^ e) {						//Panel10 -> button1 -> back to add panel
		/*10*/ faq_panel->Hide();
	}

	   //Enter Key Coding
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		keycode_tb->Focus();
	}
}
private: System::Void keycode_tb_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		add_balance_button->PerformClick();
	}
}
private: System::Void login_username_enter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		login_password_enter->Focus();
	}
}
private: System::Void login_password_enter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		login_button_4->PerformClick();
	}
}
private: System::Void signup_username_enter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		signup_password_enter->Focus();
	}
}
private: System::Void signup_password_enter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		signup_c_password_enter->Focus();
	}
}
private: System::Void signup_c_password_enter_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		agree_terms->Checked = true;
	}
}
private: System::Void agree_terms_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		signup_button_5->PerformClick();
	}
}
};
}
//fin