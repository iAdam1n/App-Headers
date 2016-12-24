/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBContainerViewController.h>
#import <Facebook/MNActionSheetPresenting.h>

@protocol MNActionSheetPresentationDelegate;
@class UIView, NSArray, MNActionSheetCancelItem, MNActionSheetWithItemsView, NSString;

@interface MNActionSheetWithItemsViewController : FBContainerViewController <MNActionSheetPresenting> {

	UIView* _headerView;
	NSArray* _actionItems;
	NSArray* _actionIconItems;
	MNActionSheetCancelItem* _cancelItem;
	MNActionSheetWithItemsView* _actionSheetWithItemsView;
	id<MNActionSheetPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNActionSheetPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id)initWithHeaderView:(id)arg1 actionIconItems:(id)arg2 cancelItem:(id)arg3 ;
-(id)_initWithHeaderView:(id)arg1 cancelItem:(id)arg2 ;
-(void)actionSheetDidResize;
-(void)actionSheetWillDismiss;
-(void)actionSheetWillPresent;
-(BOOL)actionSheetAllowsFlexibleContentViewHeight;
-(id)initWithHeaderView:(id)arg1 actionItems:(id)arg2 cancelItem:(id)arg3 ;
-(void)loadView;
-(id<MNActionSheetPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<MNActionSheetPresentationDelegate>)arg1 ;
@end
