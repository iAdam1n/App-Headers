/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAStaticTableViewController.h>
#import <WhatsApp/PhoneConfirmationControllerDelegate.h>

@class UISwitch, WATableRow, WABadgedTableViewCell, NSString;

@interface ChatSettingsViewController : WAStaticTableViewController <PhoneConfirmationControllerDelegate> {

	UISwitch* _saveReceivedMediaSwitch;
	WATableRow* _blockedRow;
	WATableRow* _textSizeRow;
	WABadgedTableViewCell* _chatBackupCell;
	WATableRow* _archiveOrUnarchiveAllChatsRow;
	BOOL _isArchiveAllButtonShown;
	WATableRow* _clearAllChatsRow;
	WATableRow* _deleteAllChatsRow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(void)backupErrorBadgeUpdated:(id)arg1 ;
-(void)mediaRestoreStatusUpdated:(id)arg1 ;
-(void)setupTableView;
-(void)updateChatActionsSection;
-(void)showFontSizePicker;
-(void)switchSaveReceivedAction:(id)arg1 ;
-(void)updateChatBackupBadge;
-(void)archiveOrUnarchiveAllChatsAction;
-(void)clearChatHistoryAction;
-(void)deleteAllChats;
-(void)phoneConfirmationControllerDidFinish:(id)arg1 ;
-(void)phoneConfirmationControllerDidCancel:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

