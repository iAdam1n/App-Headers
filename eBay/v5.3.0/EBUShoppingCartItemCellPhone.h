/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUCartItemImageCell.h>

@protocol NSObjectEBNShoppingCartItemCellDelegate;
@class UIButton, UILabel;

@interface EBUShoppingCartItemCellPhone : EBUCartItemImageCell {

	double maxButtonWidth;
	unsigned long long stateMask;
	BOOL _showShippingCost;
	id<NSObject><EBNShoppingCartItemCellDelegate> _shoppingCartDelegate;
	UIButton* _saveForLaterButton;
	UIButton* _moveToCartButton;
	UIButton* _removeButton;
	UILabel* _statusLabel;
	double _calculatedHeight;
	unsigned long long _cellState;

}

@property (assign,nonatomic) double calculatedHeight;                                                                //@synthesize calculatedHeight=_calculatedHeight - In the implementation block
@property (assign,nonatomic) unsigned long long cellState;                                                           //@synthesize cellState=_cellState - In the implementation block
@property (assign,nonatomic) BOOL showShippingCost;                                                                  //@synthesize showShippingCost=_showShippingCost - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject><EBNShoppingCartItemCellDelegate> shoppingCartDelegate;              //@synthesize shoppingCartDelegate=_shoppingCartDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIButton * saveForLaterButton;                                                   //@synthesize saveForLaterButton=_saveForLaterButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * moveToCartButton;                                                     //@synthesize moveToCartButton=_moveToCartButton - In the implementation block
@property (assign,nonatomic,__weak) UIButton * removeButton;                                                         //@synthesize removeButton=_removeButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * statusLabel;                                                           //@synthesize statusLabel=_statusLabel - In the implementation block
-(double)optimalHeight;
-(void)removeCell:(id)arg1 ;
-(void)setupItemSectionView;
-(double)subviewMaxWidth;
-(UIButton *)moveToCartButton;
-(UIButton *)saveForLaterButton;
-(void)setupEditButtons;
-(id<NSObject><EBNShoppingCartItemCellDelegate>)shoppingCartDelegate;
-(void)setupFromEbayItem:(id)arg1 ;
-(void)addShippingCost;
-(double)removeDeleteWidth;
-(BOOL)showingSomeEditingButton;
-(void)moveToCart;
-(void)saveForLater;
-(BOOL)showShippingCost;
-(void)setShowShippingCost:(BOOL)arg1 ;
-(void)setShoppingCartDelegate:(id<NSObject><EBNShoppingCartItemCellDelegate>)arg1 ;
-(void)setSaveForLaterButton:(UIButton *)arg1 ;
-(void)setMoveToCartButton:(UIButton *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(void)setCalculatedHeight:(double)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setCellState:(unsigned long long)arg1 ;
-(unsigned long long)cellState;
-(UIButton *)removeButton;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(double)calculatedHeight;
@end

