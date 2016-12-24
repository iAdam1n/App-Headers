/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/SKPSmileyEmoticon.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@class SKPBuiltInEmoticon, SKPCloudEmoticonMetaData, SKPSmileyEmoticon, NSString;

@interface SKPCloudEmoticon : SKPSmileyEmoticon <NSCacheDelegate> {

	BOOL _staticImagesWerePrefetched;
	SKPBuiltInEmoticon* _inBundleCounterpart;
	SKPCloudEmoticonMetaData* _metaData;

}

@property (nonatomic,retain) SKPSmileyEmoticon * inBundleCounterpart; 
@property (nonatomic,retain) SKPBuiltInEmoticon * inBundleCounterpart;              //@synthesize inBundleCounterpart=_inBundleCounterpart - In the implementation block
@property (nonatomic,retain) SKPCloudEmoticonMetaData * metaData;                   //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) BOOL staticImagesWerePrefetched;                       //@synthesize staticImagesWerePrefetched=_staticImagesWerePrefetched - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thinPlaceholderImageForSmileySize:(CGSize)arg1 ;
+(id)placeholderImageForSmileySize:(CGSize)arg1 ;
+(CGSize)sizeToFetchBySmileySize:(CGSize)arg1 ;
+(id)placeholderImageForSmileySize:(CGSize)arg1 icon:(id)arg2 color:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 inBundleCounterpart:(id)arg2 ;
-(void)fetchMetaDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)preloadStaticImagesForChat;
-(SKPSmileyEmoticon *)inBundleCounterpart;
-(void)fetchStaticProfileForSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)shortcuts;
-(BOOL)isVisibleInPicker;
-(unsigned long long)firstFrameIndex;
-(id)playbackSequence;
-(void)fillLayer:(id)arg1 preferAnimatedContent:(BOOL)arg2 ;
-(void)setMetaData:(SKPCloudEmoticonMetaData *)arg1 ;
-(void)fillLayerWithStaticContent:(id)arg1 options:(unsigned long long)arg2 ;
-(void)fillLayerWithAnimatedContent:(id)arg1 options:(unsigned long long)arg2 ;
-(id)emoticonSpriteAnimationWithSize:(CGSize)arg1 ;
-(void)fillLayer:(id)arg1 options:(unsigned long long)arg2 ;
-(id)emoticonSpriteSheetWithSize:(CGSize)arg1 ;
-(void)fetchSpriteSheetProfileForSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setStaticImagesWerePrefetched:(BOOL)arg1 ;
-(BOOL)staticImagesWerePrefetched;
-(BOOL)isVisibleInSMSPicker;
-(void)setInBundleCounterpart:(SKPSmileyEmoticon *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedName;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned long long)frameCount;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)imageWithSize:(CGSize)arg1 ;
-(SKPCloudEmoticonMetaData *)metaData;
-(id)keywords;
-(id)shortcut;
@end
