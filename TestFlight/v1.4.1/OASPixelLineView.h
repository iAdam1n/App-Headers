/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface OASPixelLineView : UIView {

	UIColor* _color;
	unsigned long long _position;

}

@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(double)pixelWidthInPoints;
-(unsigned long long)findDefaultPosition;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(unsigned long long)position;
-(CGSize)intrinsicContentSize;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end

