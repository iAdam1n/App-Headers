/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class NSArray, UICollectionView, NSString;

@interface ESConveyorAdapter : NSObject <UICollectionViewDelegate, UICollectionViewDataSource> {

	long long _numberOfPages;
	NSArray* _elements;
	UICollectionView* _collectionView;

}

@property (assign,nonatomic) long long numberOfPages;                               //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (nonatomic,retain) NSArray * elements;                                    //@synthesize elements=_elements - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 numberOfPages:(long long)arg2 elements:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(UICollectionView *)collectionView;
-(NSArray *)elements;
-(void)setNumberOfPages:(long long)arg1 ;
-(long long)numberOfPages;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
@end

