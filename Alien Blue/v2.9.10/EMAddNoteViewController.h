/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/ABOutlineViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class NSString, UIImagePickerController, UIImageView, UIPopoverController, UIButton, UIActionSheet, UIBarButtonItem, UITextView;

@interface EMAddNoteViewController : ABOutlineViewController <UIActionSheetDelegate, UITextViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	NSString* aNote;
	id callBackTarget;
	NSString* callBackAction;
	NSString* autoSaveKey;
	UIImagePickerController* imagePickerController;
	UIImageView* chosenPhotoView;
	BOOL isModal;
	int responseID;
	BOOL isSingleLineField;
	BOOL isWebAddress;
	BOOL isNonAutocorrecting;
	BOOL isSecure;
	BOOL showPhotoTools;
	UIPopoverController* popover;
	NSString* additionalNotes;
	UIButton* imageButton;
	UIButton* cameraButton;
	UIActionSheet* actionSheet_;
	UIBarButtonItem* actionSheetBarItem_;
	UITextView* textView_;
	/*^block*/id _onComplete;

}

@property (nonatomic,retain) UIActionSheet * actionSheet; 
@property (nonatomic,retain) UITextView * textView; 
@property (nonatomic,retain) NSString * aNote; 
@property (nonatomic,retain) NSString * autoSaveKey; 
@property (nonatomic,retain) NSString * additionalNotes; 
@property (assign,nonatomic) BOOL isSingleLineField; 
@property (assign,nonatomic) BOOL isModal; 
@property (assign,nonatomic) BOOL isWebAddress; 
@property (assign,nonatomic) BOOL isNonAutocorrecting; 
@property (assign,nonatomic) BOOL isSecure; 
@property (assign,nonatomic) BOOL showPhotoTools; 
@property (copy) id onComplete;                                        //@synthesize onComplete=_onComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)manuallyAdjustedScreenHeightForDevice;
-(void)resizeTextViewForKeyboardHeight:(double)arg1 ;
-(void)redoLayoutForNewKeyboardFrame:(id)arg1 ;
-(void)moveToolbarForKeyboard:(id)arg1 up:(BOOL)arg2 ;
-(void)setANote:(NSString *)arg1 ;
-(NSString *)aNote;
-(void)initTextView;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)showImagePicker:(id)arg1 ;
-(void)showCameraPicker:(id)arg1 ;
-(void)setCallBackTarget:(id)arg1 withAction:(id)arg2 forResponseID:(int)arg3 ;
-(void)imageUploadResponse:(id)arg1 ;
-(void)showAddPhotoActionSheet:(id)arg1 ;
-(BOOL)isSingleLineField;
-(void)setIsSingleLineField:(BOOL)arg1 ;
-(BOOL)isNonAutocorrecting;
-(void)setIsNonAutocorrecting:(BOOL)arg1 ;
-(BOOL)isWebAddress;
-(void)setIsWebAddress:(BOOL)arg1 ;
-(void)setIsSecure:(BOOL)arg1 ;
-(NSString *)autoSaveKey;
-(void)setAutoSaveKey:(NSString *)arg1 ;
-(BOOL)showPhotoTools;
-(void)setShowPhotoTools:(BOOL)arg1 ;
-(NSString *)additionalNotes;
-(void)setAdditionalNotes:(NSString *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isSecure;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UITextView *)textView;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)save:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setIsModal:(BOOL)arg1 ;
-(BOOL)isModal;
-(BOOL)textViewShouldReturn:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setOnComplete:(id)arg1 ;
-(id)onComplete;
@end
