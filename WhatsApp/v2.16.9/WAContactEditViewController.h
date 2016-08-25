/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:06 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <WhatsApp/WAContactEditingHeaderViewDelegate.h>
#import <WhatsApp/WAAddressBookLabelPickerDelegate.h>
#import <WhatsApp/WAAddressBookCountryPickerDelegate.h>
#import <WhatsApp/WAAddressBookFieldPickerDelegate.h>
#import <WhatsApp/WAContactMultiValueEditingCellDelegate.h>
#import <WhatsApp/WAContactAddressEditingCellDelegate.h>
#import <WhatsApp/WASinglePhotoPickerControllerDelegate.h>

@protocol WAContactEditViewControllerDelegate;
@class NSArray, NSIndexPath, UITableView, WAContactEditingHeaderView, WAMergedContact, NSString;

@interface WAContactEditViewController : WAViewController <UITableViewDataSource, UITableViewDelegate, WAContactEditingHeaderViewDelegate, WAAddressBookLabelPickerDelegate, WAAddressBookCountryPickerDelegate, WAAddressBookFieldPickerDelegate, WAContactMultiValueEditingCellDelegate, WAContactAddressEditingCellDelegate, WASinglePhotoPickerControllerDelegate> {

	double _keyboardHeight;
	NSArray* _properties;
	long long _addFieldSectionIndex;
	long long _deleteContactSectionIndex;
	NSIndexPath* _indexPathForEditingCell;
	double _labelSectionWidthMain;
	double _labelSectionWidthOthers;
	id<WAContactEditViewControllerDelegate> _delegate;
	UITableView* _tableView;
	WAContactEditingHeaderView* _tableHeader;
	WAMergedContact* _originalContact;
	WAMergedContact* _editingContact;

}

@property (nonatomic,retain) UITableView * tableView;                                              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) WAContactEditingHeaderView * tableHeader;                             //@synthesize tableHeader=_tableHeader - In the implementation block
@property (nonatomic,readonly) WAMergedContact * originalContact;                                  //@synthesize originalContact=_originalContact - In the implementation block
@property (nonatomic,copy,readonly) WAMergedContact * editingContact;                              //@synthesize editingContact=_editingContact - In the implementation block
@property (assign,nonatomic,__weak) id<WAContactEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerForMergedContact:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)setMergedContact:(id)arg1 ;
-(void)contactPropertyEditingCellValueChanged:(id)arg1 ;
-(void)doneAction:(id)arg1 ;
-(void)contactNoteCellNeedsResize:(id)arg1 ;
-(BOOL)contactPropertyEditingCellShouldBeginEditing:(id)arg1 ;
-(void)contactPropertyEditingCellDidBeginEditing:(id)arg1 ;
-(BOOL)contactPropertyEditingCellShouldEndEditing:(id)arg1 ;
-(void)contactPropertyEditingCellDidEndEditing:(id)arg1 ;
-(BOOL)contactPropertyEditingCellShouldReturn:(id)arg1 ;
-(void)addressBookLabelPickerDidCancel:(id)arg1 ;
-(void)addressBookLabelPickerDidFinish:(id)arg1 ;
-(void)showImagePickerForSourceType:(long long)arg1 ;
-(void)reallyShowImagePickerForSourceType:(long long)arg1 ;
-(void)singlePhotoPickerControllerDidCancel:(id)arg1 ;
-(void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)contactEditingHeaderEditPhotoTapped:(id)arg1 ;
-(BOOL)contactEditingHeaderViewShouldReturn:(id)arg1 ;
-(void)contactEditingHeaderValueChanged:(id)arg1 ;
-(void)setContactImage:(id)arg1 ;
-(WAContactEditingHeaderView *)tableHeader;
-(void)setTableHeader:(WAContactEditingHeaderView *)arg1 ;
-(void)addressBookFieldPickerDidCancel:(id)arg1 ;
-(void)addressBookFieldPicker:(id)arg1 didFinishWithABPropertyID:(int)arg2 ;
-(void)presentCountryPickerForAddressEditingCell:(id)arg1 ;
-(void)adjustContentInsetForKeyboardHeight:(double)arg1 ;
-(void)handleLabelButtonActionInContactMultiValueEditingCell:(id)arg1 ;
-(void)addressBookCountryPickerDidCancel:(id)arg1 ;
-(void)addressBookCountryPicker:(id)arg1 didSelectCountryCode:(id)arg2 ;
-(void)rebuildContactData;
-(WAMergedContact *)editingContact;
-(void)reloadHeaderView;
-(void)validateChanges;
-(void)reallyDeleteContact;
-(void)presentActionSheet:(id)arg1 ;
-(void)editCurrentContactImage;
-(void)deleteCurrentContactImage;
-(id)contactPropertyForTableSection:(long long)arg1 ;
-(id)contactPropertyForTableIndexPath:(id)arg1 ;
-(void)calculateLabelSectionWidth;
-(void)handleCellSelectedForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)addNewValueToMultiValueProperty:(id)arg1 ;
-(void)addContactPropertyField;
-(void)scrollToEditingTableViewCellAnimated:(BOOL)arg1 ;
-(id)tableIndexPathForContactProperty:(id)arg1 ;
-(void)setDelegate:(id<WAContactEditViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<WAContactEditViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)deleteContact;
-(WAMergedContact *)originalContact;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
@end

