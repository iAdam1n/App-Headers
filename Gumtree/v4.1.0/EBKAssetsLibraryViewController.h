/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionViewController.h>

@protocol EBKAssetsLibraryViewControllerDelegate;
@class ALAssetsGroup, EBKAssetsLibraryManager, NSArray;

@interface EBKAssetsLibraryViewController : UICollectionViewController {

	ALAssetsGroup* _assetsGroup;
	/*^block*/id _completionBlock;
	id<EBKAssetsLibraryViewControllerDelegate> _delegate;
	EBKAssetsLibraryManager* _assetsLibraryManager;
	NSArray* _assets;

}

@property (nonatomic,retain) ALAssetsGroup * assetsGroup;                                             //@synthesize assetsGroup=_assetsGroup - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<EBKAssetsLibraryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EBKAssetsLibraryManager * assetsLibraryManager;                          //@synthesize assetsLibraryManager=_assetsLibraryManager - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                        //@synthesize assets=_assets - In the implementation block
-(void)setAssetsLibraryManager:(EBKAssetsLibraryManager *)arg1 ;
-(void)reloadDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)assetsLibraryChanged:(id)arg1 ;
-(void)setAssetsGroup:(ALAssetsGroup *)arg1 ;
-(EBKAssetsLibraryManager *)assetsLibraryManager;
-(ALAssetsGroup *)assetsGroup;
-(id)assetAtIndex:(long long)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(void)setDelegate:(id<EBKAssetsLibraryViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<EBKAssetsLibraryViewControllerDelegate>)delegate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismiss:(id)arg1 ;
@end

