/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TIPLRUManifestDelegate.h>
#import <Twitter/TIPInspectableCache.h>

@protocol OS_dispatch_queue;
@class NSObject, TIPLRUManifest, NSString;

@interface TIPImageMemoryCache : NSObject <TIPLRUManifestDelegate, TIPInspectableCache> {

	NSObject*<OS_dispatch_queue> _backgroundQueue;
	unsigned long long _totalCost;
	TIPLRUManifest* _manifest;
	unsigned long long _internalCacheSize;

}

@property (assign) unsigned long long cacheSize; 
@property (assign) unsigned long long internalCacheSize;              //@synthesize internalCacheSize=_internalCacheSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearImageWithIdentifier:(id)arg1 ;
-(void)clearAllImages;
-(void)manifest:(id)arg1 didEvictEntry:(id)arg2 ;
-(void)inspect:(/*^block*/id)arg1 ;
-(void)touchImageWithIdentifier:(id)arg1 ;
-(id)imageEntryForIdentifier:(id)arg1 ;
-(void)updateImageEntry:(id)arg1 forciblyReplaceExisting:(BOOL)arg2 ;
-(void)background_inspect:(/*^block*/id)arg1 ;
-(void)background_didReceiveMemoryWarning:(id)arg1 ;
-(BOOL)background_updateCompleteImage:(id)arg1 completeImage:(id)arg2 context:(id)arg3 ;
-(BOOL)background_updatePartialImage:(id)arg1 partialImage:(id)arg2 context:(id)arg3 ;
-(unsigned long long)internalCacheSize;
-(void)background_trimToSize:(unsigned long long)arg1 ;
-(void)setInternalCacheSize:(unsigned long long)arg1 ;
-(void)background_didEvictEntry:(id)arg1 ;
-(void)dealloc;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(unsigned long long)cacheSize;
@end
