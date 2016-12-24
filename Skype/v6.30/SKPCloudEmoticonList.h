/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPBaseEmoticonList.h>

@protocol NSObject;
@class SKPBuiltInEmoticonList, NSCache, NSObject;

@interface SKPCloudEmoticonList : SKPBaseEmoticonList {

	SKPBuiltInEmoticonList* _builtInList;
	NSCache* _cachedCloudEmoticons;
	NSObject* _cacheMutex;
	id<NSObject> _notificationHandler;

}

@property (nonatomic,retain) SKPBuiltInEmoticonList * builtInList;              //@synthesize builtInList=_builtInList - In the implementation block
@property (nonatomic,retain) NSCache * cachedCloudEmoticons;                    //@synthesize cachedCloudEmoticons=_cachedCloudEmoticons - In the implementation block
@property (nonatomic,retain) NSObject * cacheMutex;                             //@synthesize cacheMutex=_cacheMutex - In the implementation block
@property (nonatomic,retain) id<NSObject> notificationHandler;                  //@synthesize notificationHandler=_notificationHandler - In the implementation block
-(SKPBuiltInEmoticonList *)builtInList;
-(id)allInBundleEmoticons;
-(NSObject *)cacheMutex;
-(NSCache *)cachedCloudEmoticons;
-(id)smileyEmoticonWithIdentifier:(id)arg1 ;
-(void)startObservingCloudEmoticonsManager;
-(void)stopObservingCloudEmoticonsManager;
-(void)setNotificationHandler:(id<NSObject>)arg1 ;
-(id<NSObject>)notificationHandler;
-(unsigned long long)zIndexForEmoticonWithIdentifier:(id)arg1 ;
-(id)initWithBuiltInList:(id)arg1 ;
-(void)setBuiltInList:(SKPBuiltInEmoticonList *)arg1 ;
-(void)setCachedCloudEmoticons:(NSCache *)arg1 ;
-(void)setCacheMutex:(NSObject *)arg1 ;
-(id)init;
-(void)dealloc;
@end
