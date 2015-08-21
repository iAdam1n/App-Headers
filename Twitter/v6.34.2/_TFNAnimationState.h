/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class _TFNAnimationView;

@interface _TFNAnimationState : NSObject {

	BOOL _hasImageView;
	BOOL _userInteractionWasEnabled;
	double _originalImageViewAlpha;
	_TFNAnimationView* _animationView;

}

@property (assign,nonatomic) BOOL hasImageView;                                     //@synthesize hasImageView=_hasImageView - In the implementation block
@property (assign,nonatomic) double originalImageViewAlpha;                         //@synthesize originalImageViewAlpha=_originalImageViewAlpha - In the implementation block
@property (assign,nonatomic) BOOL userInteractionWasEnabled;                        //@synthesize userInteractionWasEnabled=_userInteractionWasEnabled - In the implementation block
@property (assign,nonatomic,__weak) _TFNAnimationView * animationView;              //@synthesize animationView=_animationView - In the implementation block
-(void)setUserInteractionWasEnabled:(BOOL)arg1 ;
-(void)setHasImageView:(BOOL)arg1 ;
-(void)setOriginalImageViewAlpha:(double)arg1 ;
-(void)setAnimationView:(_TFNAnimationView *)arg1 ;
-(BOOL)userInteractionWasEnabled;
-(BOOL)hasImageView;
-(double)originalImageViewAlpha;
-(_TFNAnimationView *)animationView;
@end

