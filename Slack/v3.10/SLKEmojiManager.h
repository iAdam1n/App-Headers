/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/TSFEmojiProvider.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, SLKImageManager, NSObject, SLKDependencies, NSString;

@interface SLKEmojiManager : NSObject <TSFEmojiProvider> {

	NSDictionary* _allEmojis;
	NSArray* _sortedEmojis;
	NSArray* _categoryNames;
	NSDictionary* _customEmojiAliases;
	NSDictionary* _customEmojiInUrls;
	SLKImageManager* _imageManager;
	NSObject*<OS_dispatch_queue> _queue;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) SLKImageManager * imageManager;                     //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;              //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) NSDictionary * allEmojis;                           //@synthesize allEmojis=_allEmojis - In the implementation block
@property (nonatomic,retain) NSArray * sortedEmojis;                             //@synthesize sortedEmojis=_sortedEmojis - In the implementation block
@property (nonatomic,retain) NSArray * categoryNames;                            //@synthesize categoryNames=_categoryNames - In the implementation block
@property (nonatomic,retain) NSDictionary * customEmojiAliases;                  //@synthesize customEmojiAliases=_customEmojiAliases - In the implementation block
@property (nonatomic,retain) NSDictionary * customEmojiInUrls;                   //@synthesize customEmojiInUrls=_customEmojiInUrls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)randomSkinToneEmoji;
+(id)randomPersonEmoji;
-(id)emojiUrlForAlias:(id)arg1 ;
-(id)cachedEmojiListResponsePath;
-(void)queue_parseCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)downloadCustomEmojiMappings;
-(NSDictionary *)customEmojiAliases;
-(id)queue_emojiForAlias:(id)arg1 ;
-(NSDictionary *)allEmojis;
-(id)emojiForAlias:(id)arg1 ;
-(id)cachedEmojiImageForURLString:(id)arg1 ;
-(id)queue_emojiUrlForAlias:(id)arg1 ;
-(NSDictionary *)customEmojiInUrls;
-(id)queue_getAllEmojis;
-(void)queue_filterEmojisByCategory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)frequentEmojisMap;
-(id)queue_searchForEmojisByAliasWithString:(id)arg1 ;
-(id)queue_systemEmojiForName:(id)arg1 ;
-(id)systemEmojiForAlias:(id)arg1 ;
-(id)queue_nameForRemoteEmoji:(id)arg1 ;
-(BOOL)isJumbomojiEnabled;
-(void)loadCachedCustomEmojiMappings;
-(id)aliasForCustomEmoji:(id)arg1 ;
-(BOOL)supportsEmojiWithAlias:(id)arg1 ;
-(void)parseCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)searchForEmojisByAliasWithString:(id)arg1 ;
-(id)dataForRemoteEmoji:(id)arg1 ;
-(id)unicodeIconForCategory:(unsigned long long)arg1 ;
-(void)setAllEmojis:(NSDictionary *)arg1 ;
-(NSArray *)sortedEmojis;
-(void)setSortedEmojis:(NSArray *)arg1 ;
-(void)setCategoryNames:(NSArray *)arg1 ;
-(void)setCustomEmojiAliases:(NSDictionary *)arg1 ;
-(void)setCustomEmojiInUrls:(NSDictionary *)arg1 ;
-(void)getImageForCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)systemEmojiForName:(id)arg1 ;
-(id)dataForRemoteEmoji:(id)arg1 shouldDownload:(BOOL)arg2 ;
-(id)nameForRemoteEmoji:(id)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)clearCache;
-(NSArray *)categoryNames;
-(id)initWithDependencies:(id)arg1 ;
-(SLKDependencies *)dependencies;
-(void)setImageManager:(SLKImageManager *)arg1 ;
-(SLKImageManager *)imageManager;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end
