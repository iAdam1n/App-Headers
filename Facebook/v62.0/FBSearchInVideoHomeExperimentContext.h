/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBSearchInVideoHomeExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _nullstateShowRecentSearches;
	BOOL _useDarkStyle;
	BOOL _videoSerpShowChannelsTab;
	NSString* _nullstateSuggestionSource;

}

@property (nonatomic,readonly) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL nullstateShowRecentSearches;                       //@synthesize nullstateShowRecentSearches=_nullstateShowRecentSearches - In the implementation block
@property (nonatomic,readonly) BOOL useDarkStyle;                                      //@synthesize useDarkStyle=_useDarkStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * nullstateSuggestionSource;              //@synthesize nullstateSuggestionSource=_nullstateSuggestionSource - In the implementation block
@property (nonatomic,readonly) BOOL videoSerpShowChannelsTab;                          //@synthesize videoSerpShowChannelsTab=_videoSerpShowChannelsTab - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)useDarkStyle;
-(BOOL)nullstateShowRecentSearches;
-(NSString *)nullstateSuggestionSource;
-(BOOL)videoSerpShowChannelsTab;
-(BOOL)enabled;
@end
