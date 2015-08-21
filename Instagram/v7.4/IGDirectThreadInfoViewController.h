/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGDirectToggleTableViewCellDelegate.h>

@protocol IGDirectThreadInfoDelegate;
@class IGDirectThread, IGTextField, NSArray, NSString;

@interface IGDirectThreadInfoViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGDirectToggleTableViewCellDelegate> {

	id<IGDirectThreadInfoDelegate> _delegate;
	IGDirectThread* _thread;
	IGTextField* _nameField;
	NSArray* _sections;

}

@property (assign,nonatomic,__weak) id<IGDirectThreadInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGDirectThread * thread;                                     //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) IGTextField * nameField;                                     //@synthesize nameField=_nameField - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                          //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cell:(id)arg1 didSwitchValueTo:(BOOL)arg2 ;
-(void)threadUpdated;
-(id)sectionsBasedOnThread:(id)arg1 ;
-(long long)itemTypeForIndexPath:(id)arg1 ;
-(void)showLeaveActionMenu;
-(void)leaveThread;
-(id)cellForGroupNameAtIndexPath:(id)arg1 ;
-(id)cellForMuteAtIndexPath:(id)arg1 ;
-(id)cellForUser:(id)arg1 atIndexPath:(id)arg2 ;
-(id)hideThreadCellAtIndexPath:(id)arg1 ;
-(id)addPeopleCellAtIndexPath:(id)arg1 ;
-(void)finishEditingName;
-(void)updateDoneButton:(BOOL)arg1 ;
-(BOOL)nameIsTooLong;
-(void)updateThreadNameToName:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGDirectThreadInfoDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<IGDirectThreadInfoDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithThread:(id)arg1 ;
-(IGTextField *)nameField;
-(void)setNameField:(IGTextField *)arg1 ;
-(IGDirectThread *)thread;
-(void)setThread:(IGDirectThread *)arg1 ;
@end

