/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUActionCell.h>

@class NSString, UILabel, UIView, NSMutableArray, UITextView, UITextField;

@interface SellingDisplayCell : EBUActionCell {

	NSString* _placeholder;
	UILabel* _nameLabel;
	UIView* _view;
	NSMutableArray* _localConstraints;

}

@property (nonatomic,retain) NSMutableArray * localConstraints;              //@synthesize localConstraints=_localConstraints - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                           //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIView * view;                                  //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UITextView * textView; 
@property (nonatomic,readonly) UITextField * textField; 
+(id)reuseIdentifier;
-(void)setupCell;
-(NSMutableArray *)localConstraints;
-(void)setLocalConstraints:(NSMutableArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)updateConstraints;
-(UITextField *)textField;
-(UIEdgeInsets)contentEdgeInsets;
-(NSString *)placeholder;
-(UITextView *)textView;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
@end

