/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UILabel.h>

@class NSString;

@interface PLVUnreadLabel : UILabel

@property (assign,nonatomic) BOOL highlighted; 
@property (copy,nonatomic) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)awakeFromNib;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
@end

