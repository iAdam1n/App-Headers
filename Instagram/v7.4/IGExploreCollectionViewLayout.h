/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface IGExploreCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableSet* _removedIndexPaths;

}

@property (nonatomic,retain) NSMutableSet * removedIndexPaths;              //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
-(NSMutableSet *)removedIndexPaths;
-(void)setRemovedIndexPaths:(NSMutableSet *)arg1 ;
-(id)init;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

