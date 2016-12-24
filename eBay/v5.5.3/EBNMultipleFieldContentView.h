/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface EBNMultipleFieldContentView : UIView {

	BOOL _hiddenLabel;
	unsigned long long _numberOfFields;
	Class _textFieldClass;
	NSMutableArray* _textFields;
	NSMutableArray* _labels;
	NSMutableArray* _labelLabels;
	long long _cellStyle;
	double _labelWidth;
	long long _textAlignment;
	NSMutableArray* _localConstraints;

}

@property (assign,nonatomic) unsigned long long numberOfFields;              //@synthesize numberOfFields=_numberOfFields - In the implementation block
@property (assign,nonatomic) Class textFieldClass;                           //@synthesize textFieldClass=_textFieldClass - In the implementation block
@property (nonatomic,readonly) NSMutableArray * textFields;                  //@synthesize textFields=_textFields - In the implementation block
@property (nonatomic,readonly) NSMutableArray * labels;                      //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) NSMutableArray * labelLabels;                 //@synthesize labelLabels=_labelLabels - In the implementation block
@property (nonatomic,readonly) long long cellStyle;                          //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) double labelWidth;                              //@synthesize labelWidth=_labelWidth - In the implementation block
@property (assign,nonatomic) BOOL hiddenLabel;                               //@synthesize hiddenLabel=_hiddenLabel - In the implementation block
@property (assign,nonatomic) long long textAlignment;                        //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
-(void)setNumberOfFields:(unsigned long long)arg1 ;
-(unsigned long long)numberOfFields;
-(NSMutableArray *)labelLabels;
-(BOOL)hiddenLabel;
-(BOOL)labelFitsInMultiField:(id)arg1 ;
-(void)setTextFieldClass:(Class)arg1 ;
-(void)setHiddenLabel:(BOOL)arg1 ;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)updateConstraints;
-(long long)textAlignment;
-(Class)textFieldClass;
-(NSMutableArray *)textFields;
-(NSMutableArray *)labels;
-(void)setLabelWidth:(double)arg1 ;
-(double)labelWidth;
-(long long)cellStyle;
@end
