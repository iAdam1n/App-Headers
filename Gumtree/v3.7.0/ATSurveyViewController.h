/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class ATSurvey, UITableView, UITableViewCell, ATCellTextView, ATCellTextField, NSString, NSMutableSet, NSDate, ATInteraction;

@interface ATSurveyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UITextViewDelegate> {

	ATSurvey* survey;
	UITableView* tableView;
	UITableViewCell* activeTextEntryCell;
	ATCellTextView* activeTextView;
	ATCellTextField* activeTextField;
	NSString* errorText;
	NSMutableSet* sentNotificationsAboutQuestionIDs;
	NSDate* startedSurveyDate;
	ATInteraction* _interaction;

}

@property (nonatomic,copy) ATInteraction * interaction;              //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,copy) NSString * errorText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerForKeyboardNotifications;
-(void)sendNotificationAboutTextQuestion:(id)arg1 ;
-(BOOL)questionHasExtraInfo:(id)arg1 ;
-(id)questionAtIndexPath:(id)arg1 ;
-(BOOL)sizeTextView:(id)arg1 ;
-(BOOL)validateSurvey;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(ATInteraction *)interaction;
-(void)setInteraction:(ATInteraction *)arg1 ;
-(id)initWithSurvey:(id)arg1 ;
-(void)textFieldChangedNotification:(id)arg1 ;
-(void)sendSurvey;
-(void)setErrorText:(NSString *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSString *)errorText;
-(void)scrollToBottom;
@end

