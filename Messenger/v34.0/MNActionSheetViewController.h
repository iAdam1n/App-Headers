/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNActionSheetViewDelegate.h>
#import <Messenger/MNActionSheetPresentationDelegate.h>

@protocol MNActionSheetViewControllerDelegate;
@class UIViewController, MNActionSheetView, NSString;

@interface MNActionSheetViewController : FBContainerViewController <MNActionSheetViewDelegate, MNActionSheetPresentationDelegate> {

	UIViewController* _contentViewController;
	MNActionSheetView* _actionSheetView;
	id<MNActionSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNActionSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetViewDidDismiss:(id)arg1 ;
-(void)resizeAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewContollerNeedsResize:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNActionSheetViewControllerDelegate>)arg1 ;
-(id<MNActionSheetViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithContentViewController:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

