/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSOrderedSet, EBUArrowStep;

@interface EBUArrowStepView : UIView {

	NSOrderedSet* _steps;
	EBUArrowStep* _activeStep;
	unsigned long long _activeStepIndex;

}

@property (nonatomic,retain) NSOrderedSet * steps;                            //@synthesize steps=_steps - In the implementation block
@property (nonatomic,retain) EBUArrowStep * activeStep;                       //@synthesize activeStep=_activeStep - In the implementation block
@property (assign,nonatomic) unsigned long long activeStepIndex;              //@synthesize activeStepIndex=_activeStepIndex - In the implementation block
+(id)stepViewWithSteps:(id)arg1 activeStep:(id)arg2 ;
-(void)setActiveStep:(EBUArrowStep *)arg1 ;
-(unsigned long long)activeStepIndex;
-(unsigned long long)stateForStep:(id)arg1 ;
-(void)setActiveStepIndex:(unsigned long long)arg1 ;
-(EBUArrowStep *)activeStep;
-(void)layoutSubviews;
-(NSOrderedSet *)steps;
-(void)setSteps:(NSOrderedSet *)arg1 ;
@end
