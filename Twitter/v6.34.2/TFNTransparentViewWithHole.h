/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface TFNTransparentViewWithHole : UIView {

	UIColor* _layerColor;
	CGRect _holeRectangle;

}

@property (nonatomic,retain) UIColor * layerColor;              //@synthesize layerColor=_layerColor - In the implementation block
@property (assign,nonatomic) CGRect holeRectangle;              //@synthesize holeRectangle=_holeRectangle - In the implementation block
-(UIColor *)layerColor;
-(CGRect)holeRectangle;
-(void)setLayerColor:(UIColor *)arg1 ;
-(void)setHoleRectangle:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
