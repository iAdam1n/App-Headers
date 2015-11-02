/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/SDWebImageManagerDelegate.h>
#import <Slack/CustomEmojiProvider.h>

@class NSDictionary, NSArray, SLKImageManager, NSString;

@interface SLKEmojiManager : NSObject <SDWebImageManagerDelegate, CustomEmojiProvider> {

	NSDictionary* _allEmojis;
	NSArray* _emojiCategories;
	NSDictionary* _customEmojiAliases;
	NSDictionary* _customEmojiInFiles;
	NSArray* _customEmojiGIFs;
	SLKImageManager* _imageManager;

}

@property (nonatomic,retain) NSDictionary * allEmojis;                       //@synthesize allEmojis=_allEmojis - In the implementation block
@property (nonatomic,retain) NSArray * emojiCategories;                      //@synthesize emojiCategories=_emojiCategories - In the implementation block
@property (nonatomic,retain) NSDictionary * customEmojiAliases;              //@synthesize customEmojiAliases=_customEmojiAliases - In the implementation block
@property (nonatomic,retain) NSDictionary * customEmojiInFiles;              //@synthesize customEmojiInFiles=_customEmojiInFiles - In the implementation block
@property (nonatomic,retain) NSArray * customEmojiGIFs;                      //@synthesize customEmojiGIFs=_customEmojiGIFs - In the implementation block
@property (nonatomic,retain) SLKImageManager * imageManager;                 //@synthesize imageManager=_imageManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(NSDictionary *)allEmojis;
-(NSArray *)emojiCategories;
-(id)emojiForAlias:(id)arg1 ;
-(id)imageForCustomEmoji:(id)arg1 ;
-(void)loadExistingCustomEmojiMappings;
-(void)parseCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)customEmojiAliases;
-(id)emojiUrlForKey:(id)arg1 ;
-(NSArray *)customEmojiGIFs;
-(void)getDataForCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary *)customEmojiInFiles;
-(id)getAllEmojis;
-(id)imageManager:(id)arg1 transformDownloadedImage:(id)arg2 withURL:(id)arg3 ;
-(void)updateCustomEmojiMappings:(/*^block*/id)arg1 ;
-(id)aliasForCustomEmoji:(id)arg1 ;
-(BOOL)supportsEmojiWithAlias:(id)arg1 ;
-(id)dataForCustomEmoji:(id)arg1 ;
-(void)getImageForCustomEmoji:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAllEmojis:(NSDictionary *)arg1 ;
-(void)setEmojiCategories:(NSArray *)arg1 ;
-(void)setCustomEmojiAliases:(NSDictionary *)arg1 ;
-(void)setCustomEmojiInFiles:(NSDictionary *)arg1 ;
-(void)setCustomEmojiGIFs:(NSArray *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)setImageManager:(SLKImageManager *)arg1 ;
-(SLKImageManager *)imageManager;
@end
