/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class EBNShoppingCartItem, EBUBiddingKeyboard, UILabel, UITextField, RotatingPopover, NSString;

@interface EBUShoppingCartQuantityAdjustmentView : UIControl <UITextFieldDelegate, UIPopoverControllerDelegate> {

	BOOL _applyPressed;
	long long _value;
	EBNShoppingCartItem* _ebayItem;
	EBUBiddingKeyboard* _quickBidKeyboard;
	UILabel* _titleLabel;
	UITextField* _qtyField;
	RotatingPopover* _keypadPopover;

}

@property (assign,nonatomic,__weak) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) UITextField * qtyField;                      //@synthesize qtyField=_qtyField - In the implementation block
@property (assign,nonatomic) BOOL applyPressed;                                  //@synthesize applyPressed=_applyPressed - In the implementation block
@property (nonatomic,retain) RotatingPopover * keypadPopover;                    //@synthesize keypadPopover=_keypadPopover - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) EBNShoppingCartItem * ebayItem;                     //@synthesize ebayItem=_ebayItem - In the implementation block
@property (nonatomic,retain) EBUBiddingKeyboard * quickBidKeyboard;              //@synthesize quickBidKeyboard=_quickBidKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EBUBiddingKeyboard *)quickBidKeyboard;
-(RotatingPopover *)keypadPopover;
-(BOOL)editableQuantity;
-(id)availableQuantityDescription;
-(void)setQuickBidKeyboard:(EBUBiddingKeyboard *)arg1 ;
-(void)setKeypadPopover:(RotatingPopover *)arg1 ;
-(void)setApplyPressed:(BOOL)arg1 ;
-(void)doneWithNumberPad;
-(void)setupTitleLabel;
-(void)setupQuantityField;
-(UITextField *)qtyField;
-(void)setTableScroll:(BOOL)arg1 ;
-(BOOL)applyPressed;
-(void)valueHasChanged;
-(void)cancelNumberPad;
-(void)setupQuantityAdjustmentViewWithEbayItem:(id)arg1 ;
-(void)setupTextFieldAccessory:(id)arg1 ;
-(BOOL)showQuantity;
-(void)setQtyField:(UITextField *)arg1 ;
-(EBNShoppingCartItem *)ebayItem;
-(void)setEbayItem:(EBNShoppingCartItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(UILabel *)titleLabel;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)textFieldDidChange:(id)arg1 ;
@end
