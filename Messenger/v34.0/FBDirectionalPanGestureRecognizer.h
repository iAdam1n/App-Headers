/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@interface FBDirectionalPanGestureRecognizer : UIPanGestureRecognizer {

	int _panAxis;
	unsigned long long _allowedDirections;
	double _maximumAllowableOpposingTranslation;
	long long _activePanDirection;

}

@property (assign,nonatomic) int panAxis;                                                         //@synthesize panAxis=_panAxis - In the implementation block
@property (assign,nonatomic) unsigned long long allowedDirections;                                //@synthesize allowedDirections=_allowedDirections - In the implementation block
@property (nonatomic,readonly) long long activePanDirection;                                      //@synthesize activePanDirection=_activePanDirection - In the implementation block
@property (assign,nonatomic) double maximumAllowableOpposingTranslation;                          //@synthesize maximumAllowableOpposingTranslation=_maximumAllowableOpposingTranslation - In the implementation block
@property (assign,nonatomic) id<FBDirectionalPanGestureRecognizerDelegate> delegate; 
-(long long)directionForTranslation:(CGPoint)arg1 ;
-(int)_axisEligibleForTranslation:(CGPoint)arg1 ;
-(long long)_allowedVerticalDirectionForTranslation:(double)arg1 ;
-(long long)_allowedHorizontalDirectionForTranslation:(double)arg1 ;
-(long long)_allowedDirectionFromTranslation:(CGPoint)arg1 ;
-(double)_maxOpposingTranslationForDirection:(long long)arg1 ;
-(int)_dominantAxisOfTranslation:(CGPoint)arg1 ;
-(long long)activePanDirection;
-(int)panAxis;
-(void)setPanAxis:(int)arg1 ;
-(unsigned long long)allowedDirections;
-(void)setAllowedDirections:(unsigned long long)arg1 ;
-(double)maximumAllowableOpposingTranslation;
-(void)setMaximumAllowableOpposingTranslation:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setState:(long long)arg1 ;
@end

