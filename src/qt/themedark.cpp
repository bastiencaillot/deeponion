// Copyright (c) 2017-2019 The DeepOnion developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php


#include "themedark.h"

void ThemeDark::init()
{
    font_family = "'Helvetica Neue'";
    
    status_bar_background = "#1A1A21";
    widgets_background = "#191a27";
    menu_background = "#282a3e";
    input_background = "#222435";
    frame_background = "#282a3e";
    selected_item_background = "#79a6d2";
    text_color = "#FFFFFF";
    alt_text_color = "#ffffff";
    alternate_background = "#36384a";
    tab_background = "#474757";
    secondary_label_color = "#898994";
    push_button_text_color = "#e9e8e8";
    push_button_border_color = "#65676b";
    push_button_background = "#22222b";
    selected_menu_item_background = "#1C1B15";
    tree_item_alternate_background = "#538cc6";
    progress_bar_background = "#3dc28b";
    tableview_text_color = "#D5D5D9";
    scrollbar_handle_color = "#C1C1C1";
    disabled_text_color = "#5b608e";
    
    selected_tab_background = title_background;
    table_header_background = title_background;


	mainMenuOverviewNormalBtnIco = ":/icons/OverviewS";
	mainMenuSendcoinsNormalBtnIco = ":/icons/SendCoinsS";
    mainMenuReceiveCoinsNormalBtnIco = ":/icons/ReceiveCoinsS";
    mainMenuTransactionsNormalBtnIco = ":/icons/TransactionsS";
    mainMenuAddressBookNormalBtnIco = ":/icons/AddressBookS";
    mainMenuMessagesNormalBtnIco = ":/icons/MessagesS";
    mainMenuExportNormalBtnIco = ":/icons/ExportUS";
    mainMenuUnlockWalletNormalBtnIco = ":/icons/lock_open_s";
    mainMenuLockWalletNormalBtnIco = ":/icons/lock_closed_s";
    mainMenuDeepVaultNormalBtnIco = ":/icons/deepvault_s";
            
   	mainMenuOverviewSelectedBtnIco = ":/icons/OverviewS";
   	mainMenuSendcoinsSelectedBtnIco = ":/icons/SendCoinsS";
   	mainMenuReceiveCoinsSelectedBtnIco = ":/icons/ReceiveCoinsS";
  	mainMenuTransactionsSelectedBtnIco = ":/icons/TransactionsS";
  	mainMenuAddressBookSelectedBtnIco = ":/icons/AddressBookS";
  	mainMenuMessagesSelectedBtnIco = ":/icons/MessagesS";
  	mainMenuExportSelectedBtnIco = ":/icons/ExportUS";
  	mainMenuUnlockWalletSelectedBtnIco = ":/icons/lock_open_s";
   	mainMenuLockWalletSelectedBtnIco = ":/icons/lock_closed_s";
    mainMenuDeepVaultSelectedBtnIco = ":/icons/deepvault_s";
	mainMenuExportDeactivatedBtnIco = ":/icons/export_disabled";
	
	informationIco = ":/icons/information";
	fontBiggerIco = ":/icons/fontbigger_dark";
	fontSmallerIco = ":/icons/fontsmaller_dark";
    hdEnabledIco = ":/icons/hd_enabled_white";
    hdDisabledIco = ":/icons/hd_disabled_white";
    warningIco = ":/icons/warning_white";
    deepVaultLogoIco = ":/icons/deepVaultLogoWhite";
    
    spinnerPath = ":/movies/spinner-%1";

    Theme::init();
}
