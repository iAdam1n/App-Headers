/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) double roundingFactor; 
@property (assign,nonatomic) unsigned long long clampMode; 
@property (assign,getter=isAdditive,nonatomic) BOOL additive; 
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(double)roundingFactor;
-(void)setRoundingFactor:(double)arg1 ;
-(unsigned long long)clampMode;
-(void)setClampMode:(unsigned long long)arg1 ;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(id)currentValue;
-(id)fromValue;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(BOOL)isAdditive;
-(POPAnimatableProperty *)property;
@end

