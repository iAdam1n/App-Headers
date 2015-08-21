/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>
#import <TestFlight/OASAppContextDelegate.h>

@protocol OABuyButtonDelegate;
@class SKUIItemOfferButton, UILabel, OASAppContext, NSString;

@interface OABuyButton : UIView <OASAppContextDelegate> {

	SKUIItemOfferButton* _button;
	UILabel* _incompatibleLabel;
	id<OABuyButtonDelegate> _delegate;
	OASAppContext* _appContext;

}

@property (assign,nonatomic,__weak) id<OABuyButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) OASAppContext * appContext;                           //@synthesize appContext=_appContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appContext:(id)arg1 actionStateDidChange:(long long)arg2 ;
-(void)appContext:(id)arg1 installProgressDidChange:(double)arg2 ;
-(void)interactWithApp;
-(void)OASCommonInit;
-(void)regenerateBuyButtonStatusAnimated:(BOOL)arg1 ;
-(void)acceptInvite;
-(void)resetStateAnimated:(BOOL)arg1 ;
-(void)resetAccessiblityState;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<OABuyButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<OABuyButtonDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)prepareForInterfaceBuilder;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(OASAppContext *)appContext;
@end

