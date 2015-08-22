/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>

@class IGUserProfileGroupedTableViewCell, IGInsetLabel, IGButton, NSDateFormatter, UIBarButtonItem, NSArray, UITextField, NSString;

@interface IGEditProfileViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGGrowingTextViewDelegate, IGChangeEmailViewControllerDelegate> {

	IGUserProfileGroupedTableViewCell* _profileCell;
	IGInsetLabel* _characterCountLabel;
	IGButton* _confirmEmailButton;
	NSDateFormatter* _dateFormatter;
	UIBarButtonItem* _doneButton;
	NSArray* _textFields;
	UITextField* _currentField;
	BOOL _hasUnsavedChanges;
	BOOL _needEmailConfirm;
	BOOL _confirmedOnceInSession;
	long long _currentBioHeight;
	long long _dataState;
	long long _profilePictureState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onCancelModal;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(BOOL)growingTextViewShouldReturn:(id)arg1 ;
-(BOOL)growingTextViewShouldAnimateOnHeightChange:(id)arg1 ;
-(BOOL)prefersTabBarHidden;
-(void)confirmEmailDismissedWithSuccess:(BOOL)arg1 forEmail:(id)arg2 ;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(BOOL)scrollToAccessory:(id)arg1 ;
-(void)fetchUserData;
-(void)removeConfirmEmailButton;
-(BOOL)showConfirmEmailButton;
-(void)confirmEmailButtonTapped;
-(void)configureRequiredCell:(id)arg1 forIndexPath:(id)arg2 ;
-(BOOL)validateField:(id)arg1 withAlert:(BOOL)arg2 ;
-(id)formData;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
-(long long)pickerIndexForGender:(long long)arg1 ;
-(void)configureConfirmEmailButton;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(BOOL)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(long long)genderForPickerIndex:(long long)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setCurrentField:(id)arg1 ;
-(void)submit;
@end
