/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol FBMagicStoryBurstEditCellDelegate;
@class FBUserSession, NSMutableArray, NSString;

@interface FBMagicStoryBurstAssetDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {

	FBUserSession* _session;
	NSMutableArray* _assets;
	id<FBMagicStoryBurstEditCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryBurstEditCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBurstAsset:(id)arg1 session:(id)arg2 ;
-(id)removeAssetAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<FBMagicStoryBurstEditCellDelegate>)arg1 ;
-(id<FBMagicStoryBurstEditCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end
