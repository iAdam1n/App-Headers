/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBFeedUnitAsyncTransactionController, FBFeedAsyncTransactionLogger, NSString, UIView;

@interface FBFeedAsyncContainerComponentView : UIView {

	long long _identifier;
	FBFeedUnitAsyncTransactionController* _asyncTransactionController;
	FBFeedAsyncTransactionLogger* _asyncTransactionLogger;
	NSString* _nameSpace;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)fb_asyncTransactionContainerStateDidChange;
-(void)configureWithIdentifier:(long long)arg1 asyncTransactionController:(id)arg2 asyncTransactionLogger:(id)arg3 ;
-(void)_openTransaction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
