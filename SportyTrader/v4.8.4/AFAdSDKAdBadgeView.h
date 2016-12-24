/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath, NSString, CATextLayer, UIColor;

@interface AFAdSDKAdBadgeView : UIView {

	BOOL _debugStyle;
	BOOL _commonInitDone;
	unsigned long long _styleMode;
	CAShapeLayer* _backgroundLayer;
	UIBezierPath* _appsfireLogoPath;
	CAShapeLayer* _appsfireLogoLayer;
	NSString* _textFontName;
	CATextLayer* _textLayer;
	UIColor* _animationColor;

}

@property (assign,nonatomic) unsigned long long styleMode;                  //@synthesize styleMode=_styleMode - In the implementation block
@property (assign,nonatomic) BOOL debugStyle;                               //@synthesize debugStyle=_debugStyle - In the implementation block
@property (assign,nonatomic) BOOL commonInitDone;                           //@synthesize commonInitDone=_commonInitDone - In the implementation block
@property (nonatomic,retain) CAShapeLayer * backgroundLayer;                //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) UIBezierPath * appsfireLogoPath;               //@synthesize appsfireLogoPath=_appsfireLogoPath - In the implementation block
@property (nonatomic,retain) CAShapeLayer * appsfireLogoLayer;              //@synthesize appsfireLogoLayer=_appsfireLogoLayer - In the implementation block
@property (nonatomic,retain) NSString * textFontName;                       //@synthesize textFontName=_textFontName - In the implementation block
@property (nonatomic,retain) CATextLayer * textLayer;                       //@synthesize textLayer=_textLayer - In the implementation block
@property (nonatomic,retain) UIColor * animationColor;                      //@synthesize animationColor=_animationColor - In the implementation block
+(CGSize)logoSizeForHeight:(double)arg1 ;
-(void)setStyleMode:(unsigned long long)arg1 ;
-(unsigned long long)styleMode;
-(CGSize)idealSizeForHeight:(double)arg1 ;
-(BOOL)commonInitDone;
-(void)setCommonInitDone:(BOOL)arg1 ;
-(void)initAppsfireLogoPath;
-(void)setAppsfireLogoLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)appsfireLogoLayer;
-(void)setTextFontName:(NSString *)arg1 ;
-(NSString *)textFontName;
-(void)updateTitleString;
-(void)setDebugStyle:(BOOL)arg1 ;
-(void)setAppsfireLogoPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)appsfireLogoPath;
-(id)roundPathForRect:(CGRect)arg1 radius:(double)arg2 ;
-(BOOL)debugStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(CGSize)intrinsicContentSize;
-(void)commonInit;
-(void)setBackgroundLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)backgroundLayer;
-(void)setAnimationColor:(UIColor *)arg1 ;
-(UIColor *)animationColor;
-(void)setTextLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)textLayer;
@end
