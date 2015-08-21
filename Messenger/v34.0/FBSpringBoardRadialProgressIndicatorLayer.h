/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@class POPAnimatableProperty, UIImage;

@interface FBSpringBoardRadialProgressIndicatorLayer : CALayer {

	POPAnimatableProperty* _radialProgressProperty;
	POPAnimatableProperty* _radialScaleProperty;
	double _progressIndicatorRadius;
	double _progressIndicatorLineWidth;
	double _progress;
	unsigned long long _progressIndicatorState;
	UIImage* _progressImage;
	double _radiusScale;

}

@property (assign,nonatomic) double progress;                                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long progressIndicatorState;                  //@synthesize progressIndicatorState=_progressIndicatorState - In the implementation block
@property (nonatomic,retain) UIImage * progressImage;                                    //@synthesize progressImage=_progressImage - In the implementation block
@property (nonatomic,readonly) POPAnimatableProperty * progressProperty; 
@property (nonatomic,readonly) POPAnimatableProperty * radiusScaleProperty; 
@property (assign,nonatomic) double radiusScale;                                         //@synthesize radiusScale=_radiusScale - In the implementation block
+(id)layer;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)setProgressIndicatorState:(unsigned long long)arg1 ;
-(id)_progressAnimation;
-(void)setProgressIndicatorState:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_backgroundColorAnimation;
-(void)setRadiusScale:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_radiusScaleAnimation;
-(POPAnimatableProperty *)progressProperty;
-(POPAnimatableProperty *)radiusScaleProperty;
-(unsigned long long)progressIndicatorState;
-(void)setProgress:(double)arg1 ;
-(void)setProgressImage:(UIImage *)arg1 ;
-(double)progress;
-(UIImage *)progressImage;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(double)radiusScale;
-(void)setRadiusScale:(double)arg1 ;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

