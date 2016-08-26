/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUDynamicHeightView.h>

@class UITextField, UIImageView, UILabel, NSMutableArray;

@interface EBUShippingLabelPrintSKUOrderView : EBUDynamicHeightView {

	UITextField* _printSKUOrderField;
	UIImageView* _selectedView;
	UILabel* _printSKUOrderTitle;
	UILabel* _printSKUOrderLength;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) UIImageView * selectedView;                     //@synthesize selectedView=_selectedView - In the implementation block
@property (nonatomic,retain) UILabel * printSKUOrderTitle;                   //@synthesize printSKUOrderTitle=_printSKUOrderTitle - In the implementation block
@property (nonatomic,retain) UILabel * printSKUOrderLength;                  //@synthesize printSKUOrderLength=_printSKUOrderLength - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (nonatomic,retain) UITextField * printSKUOrderField;               //@synthesize printSKUOrderField=_printSKUOrderField - In the implementation block
-(void)updateShippingLabel:(id)arg1 ;
-(UITextField *)printSKUOrderField;
-(void)setSelectedView:(UIImageView *)arg1 ;
-(id)initialResponder;
-(UILabel *)printSKUOrderTitle;
-(UILabel *)printSKUOrderLength;
-(void)setPrintSKUOrderField:(UITextField *)arg1 ;
-(void)setPrintSKUOrderTitle:(UILabel *)arg1 ;
-(void)setPrintSKUOrderLength:(UILabel *)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIImageView *)selectedView;
@end
