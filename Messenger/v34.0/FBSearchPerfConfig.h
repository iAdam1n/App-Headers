/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSearchPerfConfig : FBExperimentContext {

	BOOL _useGlobalSuggestionCache;
	BOOL _useRecentSearchesInBootstrap;

}

@property (nonatomic,readonly) BOOL useGlobalSuggestionCache;                  //@synthesize useGlobalSuggestionCache=_useGlobalSuggestionCache - In the implementation block
@property (nonatomic,readonly) BOOL useRecentSearchesInBootstrap;              //@synthesize useRecentSearchesInBootstrap=_useRecentSearchesInBootstrap - In the implementation block
+(id)experimentName;
+(id)parameterConfigurations;
-(BOOL)useGlobalSuggestionCache;
-(BOOL)useRecentSearchesInBootstrap;
@end

