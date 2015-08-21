/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString;

@interface FBTagView : UIView {

	FBTagViewMetrics* _metrics;
	double _tagFrameTextBoxHeight;
	BOOL _removeControlVisible;
	double _middlePoint;
	long long _direction;
	UIImageView* _removeImage;
	UILabel* _textLabel;
	NSString* _fullText;
	CGRect _tagRect;

}

@property (assign,nonatomic) double middlePoint;                     //@synthesize middlePoint=_middlePoint - In the implementation block
@property (nonatomic,readonly) CGSize superSize; 
@property (assign,nonatomic) long long direction;                    //@synthesize direction=_direction - In the implementation block
@property (nonatomic,retain) UIImageView * removeImage;              //@synthesize removeImage=_removeImage - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                    //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) CGRect tagRect;                         //@synthesize tagRect=_tagRect - In the implementation block
@property (assign,nonatomic) BOOL removeControlVisible;              //@synthesize removeControlVisible=_removeControlVisible - In the implementation block
@property (nonatomic,copy) NSString * fullText;                      //@synthesize fullText=_fullText - In the implementation block
+(CGPoint)convertTapPointToTagPercentage:(CGPoint)arg1 inRect:(CGRect)arg2 ;
+(CGPoint)convertTagPercentageToTapPoint:(CGPoint)arg1 inRect:(CGRect)arg2 shouldRoundToPixels:(BOOL)arg3 ;
-(id)initWithText:(id)arg1 tagRect:(CGRect)arg2 session:(id)arg3 ;
-(void)setTagRect:(CGRect)arg1 ;
-(void)setRemoveControlVisible:(BOOL)arg1 ;
-(UIImageView *)removeImage;
-(BOOL)removeButtonHidden;
-(void)setRemoveButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)removeControlVisible;
-(CGSize)superSize;
-(id)initWithText:(id)arg1 tagRect:(CGRect)arg2 metrics:(FBTagViewMetrics*)arg3 session:(id)arg4 ;
-(double)tagFrameHeight;
-(double)tagFrameTextBoxHeight;
-(void)setMiddlePoint:(double)arg1 ;
-(double)middlePoint;
-(CGRect)tagRect;
-(id)labelTextWithFullName:(BOOL)arg1 ;
-(void)setMiddlePointWithLeftSpacing:(double)arg1 andRightSpacing:(double)arg2 ;
-(void)setRemoveImage:(UIImageView *)arg1 ;
-(NSString *)fullText;
-(void)setFullText:(NSString *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(UILabel *)textLabel;
-(double)removeButtonWidth;
-(FBTagViewMetrics*)metrics;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

