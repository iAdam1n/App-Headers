/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface ApptentiveSurveyOptionButton : UIButton {

	BOOL _reallySetBackgroundColor;
	long long _style;
	UIColor* _borderColor;

}

@property (assign,nonatomic) BOOL reallySetBackgroundColor;              //@synthesize reallySetBackgroundColor=_reallySetBackgroundColor - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                      //@synthesize borderColor=_borderColor - In the implementation block
-(void)updateColors;
-(void)updateBorders;
-(BOOL)reallySetBackgroundColor;
-(void)setReallySetBackgroundColor:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
@end

