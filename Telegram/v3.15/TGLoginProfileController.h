/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Telegram/ASWatcher.h>

@class UIView, UILabel, TGMediaAvatarMenuMixin, ASHandle, NSString, TGHighlightableButton, UIImageView, TGTextField, UIAlertView, UIActionSheet, UIImage, NSData, TGProgressWindow;

@interface TGLoginProfileController : TGViewController <UITextFieldDelegate, UIActionSheetDelegate, UINavigationControllerDelegate, ASWatcher> {

	BOOL _dismissing;
	UIView* _grayBackground;
	UIView* _separatorView;
	UILabel* _titleLabel;
	UILabel* _noticeLabel;
	UIView* _firstNameSeparator;
	UIView* _lastNameSeparator;
	BOOL _didDisappear;
	TGMediaAvatarMenuMixin* _avatarMixin;
	BOOL _showKeyboard;
	BOOL _inProgress;
	int _currentActionIndex;
	ASHandle* _actionHandle;
	NSString* _phoneNumber;
	NSString* _phoneCodeHash;
	NSString* _phoneCode;
	TGHighlightableButton* _addPhotoButton;
	UIImageView* _avatarView;
	TGTextField* _firstNameField;
	TGTextField* _lastNameField;
	UIAlertView* _currentAlert;
	UIActionSheet* _currentActionSheet;
	UIImage* _imageForPhotoUpload;
	NSData* _dataForPhotoUpload;
	TGProgressWindow* _progressWindow;
	CGRect _baseFirstNameFieldBackgroundFrame;
	CGRect _baseFirstNameFieldFrame;
	CGRect _baseLastNameBackgroundFrame;
	CGRect _baseLastNameFieldFrame;

}

@property (assign,nonatomic) BOOL showKeyboard;                                     //@synthesize showKeyboard=_showKeyboard - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneCodeHash;                              //@synthesize phoneCodeHash=_phoneCodeHash - In the implementation block
@property (nonatomic,retain) NSString * phoneCode;                                  //@synthesize phoneCode=_phoneCode - In the implementation block
@property (nonatomic,retain) TGHighlightableButton * addPhotoButton;                //@synthesize addPhotoButton=_addPhotoButton - In the implementation block
@property (nonatomic,retain) UIImageView * avatarView;                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) TGTextField * firstNameField;                          //@synthesize firstNameField=_firstNameField - In the implementation block
@property (nonatomic,retain) TGTextField * lastNameField;                           //@synthesize lastNameField=_lastNameField - In the implementation block
@property (assign,nonatomic) CGRect baseFirstNameFieldBackgroundFrame;              //@synthesize baseFirstNameFieldBackgroundFrame=_baseFirstNameFieldBackgroundFrame - In the implementation block
@property (assign,nonatomic) CGRect baseFirstNameFieldFrame;                        //@synthesize baseFirstNameFieldFrame=_baseFirstNameFieldFrame - In the implementation block
@property (assign,nonatomic) CGRect baseLastNameBackgroundFrame;                    //@synthesize baseLastNameBackgroundFrame=_baseLastNameBackgroundFrame - In the implementation block
@property (assign,nonatomic) CGRect baseLastNameFieldFrame;                         //@synthesize baseLastNameFieldFrame=_baseLastNameFieldFrame - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                       //@synthesize inProgress=_inProgress - In the implementation block
@property (assign,nonatomic) int currentActionIndex;                                //@synthesize currentActionIndex=_currentActionIndex - In the implementation block
@property (nonatomic,retain) UIAlertView * currentAlert;                            //@synthesize currentAlert=_currentAlert - In the implementation block
@property (nonatomic,retain) UIActionSheet * currentActionSheet;                    //@synthesize currentActionSheet=_currentActionSheet - In the implementation block
@property (nonatomic,retain) UIImage * imageForPhotoUpload;                         //@synthesize imageForPhotoUpload=_imageForPhotoUpload - In the implementation block
@property (nonatomic,retain) NSData * dataForPhotoUpload;                           //@synthesize dataForPhotoUpload=_dataForPhotoUpload - In the implementation block
@property (nonatomic,retain) TGProgressWindow * progressWindow;                     //@synthesize progressWindow=_progressWindow - In the implementation block
@property (nonatomic,retain) ASHandle * actionHandle;                               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3 ;
-(void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3 ;
-(void)actionStageActionRequested:(id)arg1 options:(id)arg2 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(id)initWithShowKeyboard:(BOOL)arg1 phoneNumber:(id)arg2 phoneCodeHash:(id)arg3 phoneCode:(id)arg4 ;
-(void)doUnloadView;
-(void)controllerInsetUpdated:(UIEdgeInsets)arg1 ;
-(void)addPhotoButtonPressed;
-(void)updateInterface:(long long)arg1 ;
-(id)cleanString:(id)arg1 ;
-(void)shakeView:(id)arg1 originalX:(double)arg2 ;
-(void)_updateProfileImage:(id)arg1 ;
-(void)_deletePhoto;
-(BOOL)shouldBeRemovedFromNavigationAfterHiding;
-(void)backgroundTapped:(id)arg1 ;
-(void)inputFirstNameBackgroundTapped:(id)arg1 ;
-(void)inputLastNameBackgroundTapped:(id)arg1 ;
-(void)setShowKeyboard:(BOOL)arg1 ;
-(NSString *)phoneCodeHash;
-(void)setPhoneCodeHash:(NSString *)arg1 ;
-(NSString *)phoneCode;
-(void)setPhoneCode:(NSString *)arg1 ;
-(TGTextField *)firstNameField;
-(void)setFirstNameField:(TGTextField *)arg1 ;
-(TGTextField *)lastNameField;
-(void)setLastNameField:(TGTextField *)arg1 ;
-(CGRect)baseFirstNameFieldBackgroundFrame;
-(void)setBaseFirstNameFieldBackgroundFrame:(CGRect)arg1 ;
-(CGRect)baseFirstNameFieldFrame;
-(void)setBaseFirstNameFieldFrame:(CGRect)arg1 ;
-(CGRect)baseLastNameBackgroundFrame;
-(void)setBaseLastNameBackgroundFrame:(CGRect)arg1 ;
-(CGRect)baseLastNameFieldFrame;
-(void)setBaseLastNameFieldFrame:(CGRect)arg1 ;
-(int)currentActionIndex;
-(void)setCurrentActionIndex:(int)arg1 ;
-(UIActionSheet *)currentActionSheet;
-(void)setCurrentActionSheet:(UIActionSheet *)arg1 ;
-(UIImage *)imageForPhotoUpload;
-(void)setImageForPhotoUpload:(UIImage *)arg1 ;
-(NSData *)dataForPhotoUpload;
-(void)setDataForPhotoUpload:(NSData *)arg1 ;
-(TGProgressWindow *)progressWindow;
-(void)setProgressWindow:(TGProgressWindow *)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidUnload;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(BOOL)showKeyboard;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSString *)phoneNumber;
-(void)avatarTapped:(id)arg1 ;
-(TGHighlightableButton *)addPhotoButton;
-(void)setAddPhotoButton:(TGHighlightableButton *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(UIAlertView *)currentAlert;
-(void)setCurrentAlert:(UIAlertView *)arg1 ;
-(UIImageView *)avatarView;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(void)setInProgress:(BOOL)arg1 ;
-(BOOL)inProgress;
-(void)nextButtonPressed;
@end
