/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SBJsonStreamParserDelegate.h>

@protocol SBJsonStreamParserAdapterDelegate;
@class NSMutableArray, NSMutableDictionary;

@interface SBJsonStreamParserAdapter : NSObject <SBJsonStreamParserDelegate> {

	unsigned long long depth;
	NSMutableArray* array;
	NSMutableDictionary* dict;
	NSMutableArray* keyStack;
	NSMutableArray* stack;
	int currentType;
	id<SBJsonStreamParserAdapterDelegate> delegate;
	unsigned long long levelsToSkip;

}

@property (assign) unsigned long long levelsToSkip; 
@property (assign) id<SBJsonStreamParserAdapterDelegate> delegate; 
-(void)parserFoundObjectStart:(id)arg1 ;
-(void)parserFoundObjectEnd:(id)arg1 ;
-(void)parserFoundArrayStart:(id)arg1 ;
-(void)parserFoundArrayEnd:(id)arg1 ;
-(void)parser:(id)arg1 foundBoolean:(BOOL)arg2 ;
-(void)parserFoundNull:(id)arg1 ;
-(void)parser:(id)arg1 foundNumber:(id)arg2 ;
-(void)parser:(id)arg1 foundObjectKey:(id)arg2 ;
-(void)parser:(id)arg1 foundString:(id)arg2 ;
-(unsigned long long)levelsToSkip;
-(void)parser:(id)arg1 found:(id)arg2 ;
-(void)setLevelsToSkip:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SBJsonStreamParserAdapterDelegate>)arg1 ;
-(id)init;
-(id<SBJsonStreamParserAdapterDelegate>)delegate;
-(void)pop;
@end

