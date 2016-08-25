/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EBNMultipleFieldContentView, UILabel, NSMutableArray, NSArray, NSString;

@interface EBUMultipleFieldTableViewCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource> {

	EBNMultipleFieldContentView* content;
	Class textFieldClass;
	UILabel* titleLabel;
	UILabel* captionLabel;
	double _preferredMaxCaptionWidth;
	double _preferredMaxTitleWidth;
	NSMutableArray* _localConstraints;

}

@property (assign,nonatomic) double preferredMaxTitleWidth;                  //@synthesize preferredMaxTitleWidth=_preferredMaxTitleWidth - In the implementation block
@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFields; 
@property (nonatomic,readonly) NSArray * textFields; 
@property (nonatomic,readonly) NSMutableArray * labels; 
@property (assign,nonatomic) double labelWidth; 
@property (assign,nonatomic) Class textFieldClass; 
@property (assign,nonatomic) double preferredMaxCaptionWidth;                //@synthesize preferredMaxCaptionWidth=_preferredMaxCaptionWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)optimalHeight;
-(void)setNumberOfFields:(unsigned long long)arg1 ;
-(void)setHiddenLabels:(BOOL)arg1 ;
-(unsigned long long)numberOfFields;
-(void)setTitleLabelText:(id)arg1 ;
-(void)setCaptionLabelText:(id)arg1 ;
-(void)setPreferredMaxCaptionWidth:(double)arg1 ;
-(BOOL)labelFitsInMultiField:(id)arg1 ;
-(void)setTextFieldClass:(Class)arg1 ;
-(void)setPreferredMaxTitleWidth:(double)arg1 ;
-(double)preferredMaxTitleWidth;
-(double)preferredMaxCaptionWidth;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateConstraints;
-(Class)textFieldClass;
-(NSArray *)textFields;
-(NSMutableArray *)labels;
-(void)setLabelWidth:(double)arg1 ;
-(double)labelWidth;
-(void)setupContent;
-(void)setupConstraints;
@end

