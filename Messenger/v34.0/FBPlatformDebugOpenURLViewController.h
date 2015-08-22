/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPlatformURLOpening.h>

@protocol FBPlatformDebugOpenURLViewControllerDelegate;
@class NSURL, NSDictionary, UIBarButtonItem, NSString, FBPlatformDebugIconLabel, FBLayoutGuideView, FBPlatformDebugOpenURLView;

@interface FBPlatformDebugOpenURLViewController : UIViewController <FBPlatformURLOpening> {

	/*^block*/id _argsFilter;
	NSURL* _baseURL;
	NSDictionary* _bridgeArgs;
	/*^block*/id _configurationBlock;
	UIBarButtonItem* _doneItem;
	NSDictionary* _methodArgs;
	UIBarButtonItem* _sendItem;
	NSString* _sourceApplication;
	NSDictionary* _queryParameters;
	FBPlatformDebugIconLabel* _titleLabel;
	id<FBPlatformDebugOpenURLViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPlatformDebugOpenURLViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBLayoutGuideView * layoutGuideView; 
@property (nonatomic,readonly) FBPlatformDebugOpenURLView * platformDebugOpenURLView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)_send:(id)arg1 ;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)fb_showNavBarSearchField;
-(FBLayoutGuideView *)layoutGuideView;
-(FBPlatformDebugOpenURLView *)platformDebugOpenURLView;
-(void)_updateTitleViewImage:(id)arg1 ;
-(void)_buildDebugURL:(/*^block*/id)arg1 ;
-(void)openPlatformURL:(id)arg1 ;
-(id)initWithBaseURL:(id)arg1 bridgeArgs:(id)arg2 methodArgs:(id)arg3 queryParameters:(id)arg4 sourceApplication:(id)arg5 argsFilter:(/*^block*/id)arg6 configurationBlock:(/*^block*/id)arg7 delegate:(id)arg8 ;
-(void)_done:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBPlatformDebugOpenURLViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id<FBPlatformDebugOpenURLViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)_updateTitleView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_keyboardWillHideNotification:(id)arg1 ;
-(void)_keyboardWillShowNotification:(id)arg1 ;
@end
