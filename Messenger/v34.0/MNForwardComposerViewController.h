/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMessageForwardSendControllerDelegate.h>
#import <Messenger/MNMessageForwardSendControllerConsumer.h>

@protocol MNForwardComposerViewControllerDelegate;
@class FBAnalytics, MNForwardComposerView, NSArray, MNMessageForwardSendController, NSString;

@interface MNForwardComposerViewController : UIViewController <MNMessageForwardSendControllerDelegate, MNMessageForwardSendControllerConsumer> {

	FBAnalytics* _analytics;
	/*^block*/id _forwardSenderBlock;
	MNForwardComposerView* _composerView;
	NSArray* _contactFbids;
	NSArray* _attachments;
	MNMessageForwardSendController* _sendController;
	unsigned long long _layoutMode;
	BOOL _hostedInNavigationController;
	id<MNForwardComposerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNForwardComposerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL hostedInNavigationController;                                        //@synthesize hostedInNavigationController=_hostedInNavigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initComposerViewIfNecessary;
-(void)_setupNavigationBar;
-(void)_sendButtonPressed;
-(void)_nextButtonPressed;
-(BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1 ;
-(void)forwardSendControllerDidCancel:(id)arg1 ;
-(void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2 ;
-(void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2 ;
-(BOOL)forwardSendControllerShouldShowCancelButton:(id)arg1 ;
-(BOOL)forwardSendControllerShouldShowCancelButtonDuringSending:(id)arg1 ;
-(void)forwardSendControllerDidShowSendingUI:(id)arg1 ;
-(void)forwardSendControllerDidHideSendingUI:(id)arg1 ;
-(id)analyticsExtras:(id)arg1 ;
-(id)initWithForwardSenderCreationBlock:(/*^block*/id)arg1 layoutMode:(unsigned long long)arg2 analytics:(id)arg3 ;
-(void)setContactFbids:(id)arg1 ;
-(void)setPrefilledText:(id)arg1 ;
-(void)setAttachmentsToSend:(id)arg1 ;
-(void)setHostedInNavigationController:(BOOL)arg1 ;
-(BOOL)isHostedInNavigationController;
-(BOOL)hostedInNavigationController;
-(void)setPreviewView:(id)arg1 ;
-(void)setDelegate:(id<MNForwardComposerViewControllerDelegate>)arg1 ;
-(id<MNForwardComposerViewControllerDelegate>)delegate;
-(id)navigationBar;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_cancelButtonPressed;
-(void)prepareForDismissal;
@end
