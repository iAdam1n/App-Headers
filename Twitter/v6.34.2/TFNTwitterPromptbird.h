/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, NSDate, NSMutableDictionary, NSDictionary;

@interface TFNTwitterPromptbird : NSObject {

	TFNTwitterAccount* _account;
	NSDate* _lastUpdated;
	NSMutableDictionary* _filterBlocks;
	NSDictionary* _promptCache;

}

@property (nonatomic,__weak,readonly) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdated;                              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterBlocks;                //@synthesize filterBlocks=_filterBlocks - In the implementation block
@property (nonatomic,retain) NSDictionary * promptCache;                        //@synthesize promptCache=_promptCache - In the implementation block
-(void)getPromptForFormat:(id)arg1 trigger:(id)arg2 responseBlock:(/*^block*/id)arg3 multiSuggestEnabled:(BOOL)arg4 ;
-(void)registerPromptFilterWithKey:(id)arg1 filterBlock:(/*^block*/id)arg2 ;
-(void)recordImpressionForPrompt:(id)arg1 ;
-(void)recordDismissForPrompt:(id)arg1 ;
-(void)recordTapForPrompt:(id)arg1 ;
-(void)getPromptForFormat:(id)arg1 trigger:(id)arg2 fetch:(BOOL)arg3 responseBlock:(/*^block*/id)arg4 multiSuggestEnabled:(BOOL)arg5 ;
-(BOOL)_shouldFilterPrompt:(id)arg1 ;
-(void)_getPromptSuggestion:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)_checkCacheForFormat:(id)arg1 trigger:(id)arg2 ;
-(void)_fetchPromptsWithCompletion:(/*^block*/id)arg1 forcedParameterDictionary:(id)arg2 ;
-(void)_addDeviceInfo:(id)arg1 ;
-(void)_invalidatePromptCache;
-(id)_keyForFormat:(id)arg1 trigger:(id)arg2 ;
-(void)setPromptCache:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)filterBlocks;
-(void)setFilterBlocks:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)promptCache;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSDate *)lastUpdated;
@end

