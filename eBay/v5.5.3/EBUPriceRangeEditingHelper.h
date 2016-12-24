/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CurrencyTextFieldForwardDelegate.h>

@protocol EBUPriceRangeEditingHelperDelegate;
@class CurrencyTextField, NSTimer, CurrencyTextFieldDelegate, AlertViewWrapper, NSString;

@interface EBUPriceRangeEditingHelper : NSObject <CurrencyTextFieldForwardDelegate> {

	CurrencyTextField* _minField;
	CurrencyTextField* _maxField;
	id<EBUPriceRangeEditingHelperDelegate> _delegate;
	NSTimer* _refreshTimer;
	CurrencyTextFieldDelegate* _currencyDelegate;
	AlertViewWrapper* _alert;

}

@property (nonatomic,retain) NSTimer * refreshTimer;                                              //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) CurrencyTextFieldDelegate * currencyDelegate;                        //@synthesize currencyDelegate=_currencyDelegate - In the implementation block
@property (assign,nonatomic,__weak) AlertViewWrapper * alert;                                     //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain) CurrencyTextField * minField;                                        //@synthesize minField=_minField - In the implementation block
@property (nonatomic,retain) CurrencyTextField * maxField;                                        //@synthesize maxField=_maxField - In the implementation block
@property (assign,nonatomic,__weak) id<EBUPriceRangeEditingHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CurrencyTextField * currentEditingField; 
@property (nonatomic,readonly) BOOL isEditing; 
@property (nonatomic,readonly) BOOL hasPendingChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CurrencyTextFieldDelegate *)currencyDelegate;
-(CurrencyTextField *)currentEditingField;
-(BOOL)validatePriceRange;
-(void)showInvalidPriceRangeErrorAlert;
-(void)validatePriceRangeWithTimer:(id)arg1 ;
-(void)setMinField:(CurrencyTextField *)arg1 ;
-(void)setMaxField:(CurrencyTextField *)arg1 ;
-(void)fixCurrencyTextField:(id)arg1 ;
-(CurrencyTextField *)minField;
-(CurrencyTextField *)maxField;
-(void)setCurrencyDelegate:(CurrencyTextFieldDelegate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<EBUPriceRangeEditingHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<EBUPriceRangeEditingHelperDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)isEditing;
-(id)priceRange;
-(void)textFieldDidChange:(id)arg1 ;
-(BOOL)hasPendingChanges;
-(AlertViewWrapper *)alert;
-(void)setAlert:(AlertViewWrapper *)arg1 ;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
@end
