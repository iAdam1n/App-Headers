/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/DDAbstractLogger.h>
#import <AlienBlue/DDLogger.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface DDTTYLogger : DDAbstractLogger <DDLogger> {

	unsigned long long calendarUnitFlags;
	NSString* appName;
	char* app;
	unsigned long long appLen;
	NSString* processID;
	char* pid;
	unsigned long long pidLen;
	BOOL colorsEnabled;
	NSMutableArray* colorProfilesArray;
	NSMutableDictionary* colorProfilesDict;
	BOOL _automaticallyAppendNewlineForCustomFormatters;

}

@property (assign) BOOL colorsEnabled; 
@property (assign) BOOL automaticallyAppendNewlineForCustomFormatters;              //@synthesize automaticallyAppendNewlineForCustomFormatters=_automaticallyAppendNewlineForCustomFormatters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 fromColor:(id)arg4 ;
+(void)initialize_colors_256;
+(void)initialize_colors_16;
+(unsigned long long)codeIndexForColor:(id)arg1 ;
+(id)sharedInstance;
-(id)loggerName;
-(BOOL)automaticallyAppendNewlineForCustomFormatters;
-(void)setAutomaticallyAppendNewlineForCustomFormatters:(BOOL)arg1 ;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 ;
-(void)loadDefaultColorProfiles;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forFlag:(int)arg3 context:(int)arg4 ;
-(void)clearColorsForFlag:(int)arg1 context:(int)arg2 ;
-(BOOL)colorsEnabled;
-(void)setColorsEnabled:(BOOL)arg1 ;
-(void)setForegroundColor:(id)arg1 backgroundColor:(id)arg2 forTag:(id)arg3 ;
-(void)clearColorsForFlag:(int)arg1 ;
-(void)clearColorsForTag:(id)arg1 ;
-(void)clearColorsForAllFlags;
-(void)clearColorsForAllTags;
-(void)clearAllColors;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

