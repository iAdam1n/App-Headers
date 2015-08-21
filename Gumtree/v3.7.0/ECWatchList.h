/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/NSKeyedUnarchiverDelegate.h>

@class NSMutableArray, NSArray, NSString;

@interface ECWatchList : NSObject <NSKeyedUnarchiverDelegate> {

	NSMutableArray* _adArray;
	NSArray* _ads;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) NSArray * ads;                //@synthesize ads=_ads - In the implementation block
@property (nonatomic,retain) NSMutableArray * adArray;              //@synthesize adArray=_adArray - In the implementation block
+(id)readGumtreeUKFavoritesFromUserDefaults;
+(void)readLocalWatchListIDsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)writeLocalWatchListIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)watchListPath;
+(id)readOldWatchlist:(id)arg1 ;
+(id)watchListFile;
+(id)readUpgrade;
-(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
-(NSMutableArray *)adArray;
-(void)setAdArray:(NSMutableArray *)arg1 ;
-(NSArray *)ads;
@end

