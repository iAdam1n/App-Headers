/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNCrossDissolvableImageView.h>

@class UIImage;

@interface TFNBlurrableImageView : TFNCrossDissolvableImageView {

	unsigned long long _blurId;
	BOOL _canBlur;
	double _darkenStrength;

}

@property (assign,getter=isBlurred,nonatomic) BOOL blurred; 
@property (nonatomic,readonly) UIImage * blurredImage; 
@property (assign,nonatomic) BOOL canBlur;                               //@synthesize canBlur=_canBlur - In the implementation block
@property (nonatomic,readonly) double darkenStrength;                    //@synthesize darkenStrength=_darkenStrength - In the implementation block
+(unsigned long long)recommendedIntermediates;
-(void)fastPrepareBlur:(long long)arg1 complete:(/*^block*/id)arg2 ;
-(id)initWithImage:(id)arg1 darkenStrength:(double)arg2 ;
-(void)discardBlur;
-(void)prepareBlur:(long long)arg1 complete:(/*^block*/id)arg2 ;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)canBlur;
-(id)initWithImages:(id)arg1 ;
-(void)_innerPrepareBlur:(long long)arg1 complete:(/*^block*/id)arg2 ;
-(double)darkenStrength;
-(void)setCanBlur:(BOOL)arg1 ;
-(void)setBlurred:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)setImages:(id)arg1 prepareBlur:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBaseImage:(id)arg1 prepareBlur:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isBlurred;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setImages:(id)arg1 ;
-(void)setBlurred:(BOOL)arg1 ;
-(void)setBaseImage:(id)arg1 ;
-(UIImage *)blurredImage;
@end

