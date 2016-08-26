/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPViewController.h>
#import <Skype/SKPAvatarPickerViewControllerDelegate.h>
#import <Skype/MKAlertViewDelegate.h>
#import <Skype/SKPCreateSkypeAccountViewDelegate.h>

@protocol CreateSkypeAccountViewControllerDelegate;
@class SKPCreateSkypeAccountView, SKPProgressHud, MKActionSheet, MKAlertView, SKPActivityToken, NSString;

@interface SKPCreateSkypeAccountViewController : SKPViewController <SKPAvatarPickerViewControllerDelegate, MKAlertViewDelegate, SKPCreateSkypeAccountViewDelegate> {

	BOOL _observingModel;
	BOOL _wantAppStateNotifications;
	id<CreateSkypeAccountViewControllerDelegate> _delegate;
	SKPCreateSkypeAccountView* _createSkypeAccountView;
	SKPProgressHud* _progressHud;
	MKActionSheet* _takePictureActionSheet;
	MKAlertView* _alertView;
	SKPActivityToken* _imagePickerActivity;

}

@property (nonatomic,retain) SKPProgressHud * progressHud;                                              //@synthesize progressHud=_progressHud - In the implementation block
@property (assign,nonatomic) BOOL observingModel;                                                       //@synthesize observingModel=_observingModel - In the implementation block
@property (nonatomic,retain) MKActionSheet * takePictureActionSheet;                                    //@synthesize takePictureActionSheet=_takePictureActionSheet - In the implementation block
@property (nonatomic,readonly) NSString * loginStatusKeyPath; 
@property (nonatomic,readonly) NSString * accountErrorKeyPath; 
@property (nonatomic,retain) MKAlertView * alertView;                                                   //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) SKPActivityToken * imagePickerActivity;                                    //@synthesize imagePickerActivity=_imagePickerActivity - In the implementation block
@property (assign,nonatomic) BOOL wantAppStateNotifications;                                            //@synthesize wantAppStateNotifications=_wantAppStateNotifications - In the implementation block
@property (assign,nonatomic,__weak) id<CreateSkypeAccountViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKPCreateSkypeAccountView * createSkypeAccountView;                        //@synthesize createSkypeAccountView=_createSkypeAccountView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImagePickerActivity:(SKPActivityToken *)arg1 ;
-(SKPActivityToken *)imagePickerActivity;
-(void)setProgressHud:(SKPProgressHud *)arg1 ;
-(SKPProgressHud *)progressHud;
-(NSString *)loginStatusKeyPath;
-(void)mkAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)skpCreateSkypeAccountViewDidCancel;
-(void)removeAvatar;
-(void)setTakePictureActionSheet:(MKActionSheet *)arg1 ;
-(MKActionSheet *)takePictureActionSheet;
-(void)avatarPickerViewController:(id)arg1 didPickImage:(id)arg2 ;
-(void)avatarPickerViewControllerDidCancel:(id)arg1 ;
-(void)setObservingModel:(BOOL)arg1 ;
-(void)setWantAppStateNotifications:(BOOL)arg1 ;
-(SKPCreateSkypeAccountView *)createSkypeAccountView;
-(void)setCreateSkypeAccountView:(SKPCreateSkypeAccountView *)arg1 ;
-(void)createAccountButtonAction:(id)arg1 ;
-(void)addPictureButtonAction:(id)arg1 ;
-(BOOL)validateNewAccountDetails;
-(void)takeAvatarPhoto;
-(void)chooseExistingAvatarPhoto;
-(void)handleBadPassword;
-(NSString *)accountErrorKeyPath;
-(void)updateShowProgressHUD;
-(BOOL)observingModel;
-(BOOL)wantAppStateNotifications;
-(void)setDelegate:(id<CreateSkypeAccountViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CreateSkypeAccountViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)cancel:(id)arg1 ;
-(void)showAlert:(id)arg1 ;
-(void)setAlertView:(MKAlertView *)arg1 ;
-(MKAlertView *)alertView;
@end
