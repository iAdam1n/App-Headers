/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <eBay/EBUAbstractController.h>

@class EBURefineOptionElement, CurrencyTextField, EBUPriceRangeEditingHelper, UILabel, NSString, UIView, NSObject;

@interface EBURefineOptionPriceRangeElementCell : UITableViewCell <EBUAbstractController> {

	BOOL _showInvalidPriceRangeError;
	EBURefineOptionElement* _priceRangeElement;
	CurrencyTextField* _minField;
	CurrencyTextField* _maxField;
	EBUPriceRangeEditingHelper* _editingHelper;
	UILabel* _errorTextLabel;

}

@property (nonatomic,retain) EBURefineOptionElement * priceRangeElement;                     //@synthesize priceRangeElement=_priceRangeElement - In the implementation block
@property (nonatomic,retain) CurrencyTextField * minField;                                   //@synthesize minField=_minField - In the implementation block
@property (nonatomic,retain) CurrencyTextField * maxField;                                   //@synthesize maxField=_maxField - In the implementation block
@property (nonatomic,retain) UILabel * errorTextLabel;                                       //@synthesize errorTextLabel=_errorTextLabel - In the implementation block
@property (nonatomic,readonly) double optimalHeight; 
@property (assign,nonatomic) BOOL showInvalidPriceRangeError;                                //@synthesize showInvalidPriceRangeError=_showInvalidPriceRangeError - In the implementation block
@property (assign,nonatomic,__weak) EBUPriceRangeEditingHelper * editingHelper;              //@synthesize editingHelper=_editingHelper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSObject * model; 
+(id)cell;
-(double)optimalHeight;
-(void)setMinField:(CurrencyTextField *)arg1 ;
-(void)setMaxField:(CurrencyTextField *)arg1 ;
-(CurrencyTextField *)minField;
-(CurrencyTextField *)maxField;
-(BOOL)showInvalidPriceRangeError;
-(void)setEditingHelper:(EBUPriceRangeEditingHelper *)arg1 ;
-(void)setModel:(id)arg1 updateTextField:(BOOL)arg2 ;
-(EBURefineOptionElement *)priceRangeElement;
-(void)setShowInvalidPriceRangeError:(BOOL)arg1 ;
-(void)refreshView:(BOOL)arg1 ;
-(id)makeCurrencyTextField;
-(void)setPriceRangeElement:(EBURefineOptionElement *)arg1 ;
-(EBUPriceRangeEditingHelper *)editingHelper;
-(UILabel *)errorTextLabel;
-(void)setErrorTextLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)view;
-(NSObject *)model;
-(void)setModel:(NSObject *)arg1 ;
-(void)refreshView;
@end
