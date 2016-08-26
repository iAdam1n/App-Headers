/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsPurchaseInfoViewControlling.h>

@protocol MNPaymentsPeerToPeerPaymentMethodViewDelegate;
@class UIButton, UILabel, MNLoadingIndicator, FBPaymentsPurchaseInfoPayWithExtension, NSString;

@interface MNPaymentsPeerToPeerPaymentMethodView : UIView <FBPaymentsPurchaseInfoViewControlling> {

	UIButton* _changeButton;
	UILabel* _cardLabel;
	MNLoadingIndicator* _loadingIndicator;
	FBPaymentsPurchaseInfoPayWithExtension* _payWithExtension;
	BOOL _shouldIntroduceTopInset;
	id<MNPaymentsPeerToPeerPaymentMethodViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL shouldIntroduceTopInset;                                                   //@synthesize shouldIntroduceTopInset=_shouldIntroduceTopInset - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsPeerToPeerPaymentMethodViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onChange:(id)arg1 ;
-(BOOL)shouldIntroduceTopInset;
-(void)_setLoading:(BOOL)arg1 cardLabelText:(id)arg2 ;
-(id)initWithPayWithExtension:(id)arg1 ;
-(void)setShouldIntroduceTopInset:(BOOL)arg1 ;
-(void)reloadDataFromExtensions;
-(void)setDelegate:(id<MNPaymentsPeerToPeerPaymentMethodViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsPeerToPeerPaymentMethodViewDelegate>)delegate;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end
