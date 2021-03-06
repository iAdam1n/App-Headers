/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol FBStorylineMoodCategoryListViewDelegate;
@class FBUserSession, NSArray, NSString;

@interface FBStorylineMoodCategoryListView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource> {

	FBUserSession* _session;
	id<FBStorylineMoodCategoryListViewDelegate> _categoryListViewDelegate;
	NSArray* _categories;

}

@property (assign,nonatomic,__weak) id<FBStorylineMoodCategoryListViewDelegate> categoryListViewDelegate;              //@synthesize categoryListViewDelegate=_categoryListViewDelegate - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                                                       //@synthesize categories=_categories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 session:(id)arg3 ;
-(void)setCategoryListViewDelegate:(id<FBStorylineMoodCategoryListViewDelegate>)arg1 ;
-(id<FBStorylineMoodCategoryListViewDelegate>)categoryListViewDelegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
@end

