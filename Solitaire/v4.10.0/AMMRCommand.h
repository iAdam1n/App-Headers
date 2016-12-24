/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMAMraidBaseAdView, NSDictionary;

@interface AMMRCommand : NSObject {

	AMAMraidBaseAdView* _view;
	NSDictionary* _parameters;

}

@property (assign,nonatomic,__weak) AMAMraidBaseAdView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                     //@synthesize parameters=_parameters - In the implementation block
+(id)commandForString:(id)arg1 ;
+(id)sharedCommandClassMap;
+(Class)commandClassForString:(id)arg1 ;
+(id)commandType;
-(double)floatFromParametersForKey:(id)arg1 withDefault:(double)arg2 ;
-(id)stringFromParametersForKey:(id)arg1 ;
-(double)floatFromParametersForKey:(id)arg1 ;
-(BOOL)boolFromParametersForKey:(id)arg1 ;
-(int)intFromParametersForKey:(id)arg1 ;
-(id)urlFromParameters:(id)arg1 ;
-(AMAMraidBaseAdView *)view;
-(void)setView:(AMAMraidBaseAdView *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(BOOL)execute;
@end
