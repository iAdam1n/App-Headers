/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNAssetsLibraryPhotoLibraryChangedNotificationObserverDelegate.h>
#import <Twitter/TFNPhotoFetchResult.h>

@class TFNAssetsLibraryPhotoLibraryChangedNotificationObserver, NSArray, TFNAssetsLibraryPhotoFetchOptions, NSString;

@interface TFNAssetsLibraryPhotoFetchResult : NSObject <TFNAssetsLibraryPhotoLibraryChangedNotificationObserverDelegate, TFNPhotoFetchResult> {

	TFNAssetsLibraryPhotoLibraryChangedNotificationObserver* _notificationObserver;
	NSArray* _filteredArray;
	NSArray* _array;
	TFNAssetsLibraryPhotoFetchOptions* _options;

}

@property (nonatomic,readonly) NSArray * array;                                          //@synthesize array=_array - In the implementation block
@property (nonatomic,readonly) TFNAssetsLibraryPhotoFetchOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSArray * filteredArray; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long count; 
@property (nonatomic,readonly) id firstObject; 
@property (nonatomic,readonly) id lastObject; 
@property (getter=isUpdated,nonatomic,readonly) BOOL updated; 
-(id)changeDetailsForChange:(id)arg1 ;
-(id)initWithArray:(id)arg1 options:(id)arg2 ;
-(NSArray *)filteredArray;
-(void)assetsLibraryPhotoLibraryDidChange:(id)arg1 ;
-(void)assetsLibraryPhotoLibraryChangedNotificationObserver:(id)arg1 didObserveNotification:(id)arg2 ;
-(void)postChangeNotificationWithUpdatedFetchResult:(id)arg1 ;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_T17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)firstObject;
-(id)lastObject;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(NSArray *)array;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(TFNAssetsLibraryPhotoFetchOptions *)options;
-(BOOL)isUpdated;
-(unsigned long long)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

