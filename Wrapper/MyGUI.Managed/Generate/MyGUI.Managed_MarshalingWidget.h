/*!
	@file
	@author		Albert Semenov
	@date		01/2009
	@module
*/
#pragma once

#include "../Marshaling.h"

namespace MyGUI
{
	namespace Managed
	{

		//InsertPoint

		ref class TabItem;
		template <> struct Convert<MyGUI::TabItem*>
		{
			typedef TabItem^ Type;
			static TabItem^ To(MyGUI::TabItem* _value);
			static MyGUI::TabItem* From(TabItem^ _value);
		};



		ref class MenuItem;
		template <> struct Convert<MyGUI::MenuItem*>
		{
			typedef MenuItem^ Type;
			static MenuItem^ To(MyGUI::MenuItem* _value);
			static MyGUI::MenuItem* From(MenuItem^ _value);
		};



		ref class Window;
		template <> struct Convert<MyGUI::Window*>
		{
			typedef Window^ Type;
			static Window^ To(MyGUI::Window* _value);
			static MyGUI::Window* From(Window^ _value);
		};



		ref class Widget;
		template <> struct Convert<MyGUI::Widget*>
		{
			typedef Widget^ Type;
			static Widget^ To(MyGUI::Widget* _value);
			static MyGUI::Widget* From(Widget^ _value);
		};



		ref class VScrollBar;
		template <> struct Convert<MyGUI::VScroll*>
		{
			typedef VScrollBar^ Type;
			static VScrollBar^ To(MyGUI::VScroll* _value);
			static MyGUI::VScroll* From(VScrollBar^ _value);
		};



		ref class TabBar;
		template <> struct Convert<MyGUI::Tab*>
		{
			typedef TabBar^ Type;
			static TabBar^ To(MyGUI::Tab* _value);
			static MyGUI::Tab* From(TabBar^ _value);
		};



		ref class StaticText;
		template <> struct Convert<MyGUI::StaticText*>
		{
			typedef StaticText^ Type;
			static StaticText^ To(MyGUI::StaticText* _value);
			static MyGUI::StaticText* From(StaticText^ _value);
		};



		ref class StaticImage;
		template <> struct Convert<MyGUI::StaticImage*>
		{
			typedef StaticImage^ Type;
			static StaticImage^ To(MyGUI::StaticImage* _value);
			static MyGUI::StaticImage* From(StaticImage^ _value);
		};



		ref class ScrollView;
		template <> struct Convert<MyGUI::ScrollView*>
		{
			typedef ScrollView^ Type;
			static ScrollView^ To(MyGUI::ScrollView* _value);
			static MyGUI::ScrollView* From(ScrollView^ _value);
		};



		ref class RenderBox;
		template <> struct Convert<MyGUI::RenderBox*>
		{
			typedef RenderBox^ Type;
			static RenderBox^ To(MyGUI::RenderBox* _value);
			static MyGUI::RenderBox* From(RenderBox^ _value);
		};



		ref class ProgressBar;
		template <> struct Convert<MyGUI::Progress*>
		{
			typedef ProgressBar^ Type;
			static ProgressBar^ To(MyGUI::Progress* _value);
			static MyGUI::Progress* From(ProgressBar^ _value);
		};



		ref class PopupMenu;
		template <> struct Convert<MyGUI::PopupMenu*>
		{
			typedef PopupMenu^ Type;
			static PopupMenu^ To(MyGUI::PopupMenu* _value);
			static MyGUI::PopupMenu* From(PopupMenu^ _value);
		};



		ref class MultiListBox;
		template <> struct Convert<MyGUI::MultiList*>
		{
			typedef MultiListBox^ Type;
			static MultiListBox^ To(MyGUI::MultiList* _value);
			static MyGUI::MultiList* From(MultiListBox^ _value);
		};



		ref class MessageBox;
		template <> struct Convert<MyGUI::Message*>
		{
			typedef MessageBox^ Type;
			static MessageBox^ To(MyGUI::Message* _value);
			static MyGUI::Message* From(MessageBox^ _value);
		};



		ref class MenuCtrl;
		template <> struct Convert<MyGUI::MenuCtrl*>
		{
			typedef MenuCtrl^ Type;
			static MenuCtrl^ To(MyGUI::MenuCtrl* _value);
			static MyGUI::MenuCtrl* From(MenuCtrl^ _value);
		};



		ref class MenuBar;
		template <> struct Convert<MyGUI::MenuBar*>
		{
			typedef MenuBar^ Type;
			static MenuBar^ To(MyGUI::MenuBar* _value);
			static MyGUI::MenuBar* From(MenuBar^ _value);
		};



		ref class ListBox;
		template <> struct Convert<MyGUI::List*>
		{
			typedef ListBox^ Type;
			static ListBox^ To(MyGUI::List* _value);
			static MyGUI::List* From(ListBox^ _value);
		};



		ref class ItemBox;
		template <> struct Convert<MyGUI::ItemBox*>
		{
			typedef ItemBox^ Type;
			static ItemBox^ To(MyGUI::ItemBox* _value);
			static MyGUI::ItemBox* From(ItemBox^ _value);
		};



		ref class HScrollBar;
		template <> struct Convert<MyGUI::HScroll*>
		{
			typedef HScrollBar^ Type;
			static HScrollBar^ To(MyGUI::HScroll* _value);
			static MyGUI::HScroll* From(HScrollBar^ _value);
		};



		ref class EditBox;
		template <> struct Convert<MyGUI::Edit*>
		{
			typedef EditBox^ Type;
			static EditBox^ To(MyGUI::Edit* _value);
			static MyGUI::Edit* From(EditBox^ _value);
		};



		ref class DDContainer;
		template <> struct Convert<MyGUI::DDContainer*>
		{
			typedef DDContainer^ Type;
			static DDContainer^ To(MyGUI::DDContainer* _value);
			static MyGUI::DDContainer* From(DDContainer^ _value);
		};



		ref class ComboBox;
		template <> struct Convert<MyGUI::ComboBox*>
		{
			typedef ComboBox^ Type;
			static ComboBox^ To(MyGUI::ComboBox* _value);
			static MyGUI::ComboBox* From(ComboBox^ _value);
		};



		ref class Canvas;
		template <> struct Convert<MyGUI::Canvas*>
		{
			typedef Canvas^ Type;
			static Canvas^ To(MyGUI::Canvas* _value);
			static MyGUI::Canvas* From(Canvas^ _value);
		};



		ref class Button;
		template <> struct Convert<MyGUI::Button*>
		{
			typedef Button^ Type;
			static Button^ To(MyGUI::Button* _value);
			static MyGUI::Button* From(Button^ _value);
		};


		
	} // namespace Managed
} // namespace MyGUI
