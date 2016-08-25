/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class FBSDKLikeBoxBorderView, UILabel, NSString;

@interface FBSDKLikeBoxView : UIView {

	FBSDKLikeBoxBorderView* _borderView;
	UILabel* _likeCountLabel;
	unsigned long long _caretPosition;

}

@property (assign,nonatomic) unsigned long long caretPosition;              //@synthesize caretPosition=_caretPosition - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)_initializeContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCaretPosition:(unsigned long long)arg1 ;
-(unsigned long long)caretPosition;
@end

