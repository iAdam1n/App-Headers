/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/DisplayCell.h>
#import <eBay/EBUAbstractController.h>

@class EBURefineOptionElement, UITextField, UIButton, UIActivityIndicatorView, UIView, NSString, NSObject;

@interface EBURefineOptionZipCodeElementCell : DisplayCell <EBUAbstractController> {

	BOOL _allowUseMyLocation;
	EBURefineOptionElement* _zipCodeElement;
	UITextField* _zipCodeField;
	UIButton* _useMyLocationButton;
	UIActivityIndicatorView* _zipActivityView;
	UIView* _verticalDivider;

}

@property (nonatomic,retain) EBURefineOptionElement * zipCodeElement;                //@synthesize zipCodeElement=_zipCodeElement - In the implementation block
@property (nonatomic,retain) UITextField * zipCodeField;                             //@synthesize zipCodeField=_zipCodeField - In the implementation block
@property (nonatomic,retain) UIButton * useMyLocationButton;                         //@synthesize useMyLocationButton=_useMyLocationButton - In the implementation block
@property (nonatomic,retain) UIView * verticalDivider;                               //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * zipActivityView;              //@synthesize zipActivityView=_zipActivityView - In the implementation block
@property (assign,nonatomic) BOOL allowUseMyLocation;                                //@synthesize allowUseMyLocation=_allowUseMyLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,retain) NSObject * model; 
+(id)cell;
-(UITextField *)zipCodeField;
-(UIButton *)useMyLocationButton;
-(UIActivityIndicatorView *)zipActivityView;
-(void)setModel:(id)arg1 updateTextField:(BOOL)arg2 ;
-(EBURefineOptionElement *)zipCodeElement;
-(void)refreshView:(BOOL)arg1 ;
-(void)setAllowUseMyLocation:(BOOL)arg1 ;
-(BOOL)allowUseMyLocation;
-(void)setZipCodeElement:(EBURefineOptionElement *)arg1 ;
-(void)setZipCodeField:(UITextField *)arg1 ;
-(void)setUseMyLocationButton:(UIButton *)arg1 ;
-(void)setZipActivityView:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)view;
-(NSObject *)model;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(void)setModel:(NSObject *)arg1 ;
-(void)refreshView;
@end

