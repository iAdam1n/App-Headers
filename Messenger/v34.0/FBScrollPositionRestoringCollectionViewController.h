/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScrollPositionRestoringScrollViewControllerDelegate.h>
#import <Messenger/FBCollectionViewUpdateListener.h>
#import <Messenger/FBScrollPositionRestoringScrollViewController.h>
#import <Messenger/FBCollectionViewFlowLayoutDelegate.h>

@protocol FBScrollPositionRestoringScrollViewRestorationIndexPathProvider, FBScrollPositionRestoringCollectionViewItemIdentifierProvider;
@class FBScrollPositionRestoringScrollViewController, NSString, FBScrollPositionRestoringScrollViewListenerAnnouncer;

@interface FBScrollPositionRestoringCollectionViewController : NSObject <FBScrollPositionRestoringScrollViewControllerDelegate, FBCollectionViewUpdateListener, FBScrollPositionRestoringScrollViewController, FBCollectionViewFlowLayoutDelegate> {

	FBScrollPositionRestoringScrollViewController* _scrollViewController;
	BOOL _usesPrepareLayoutRestoration;
	BOOL _scrollPositionRestorationStarted;
	id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider> _restorationIndexPathProvider;
	id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider> _itemIdentifierProvider;

}

@property (assign,nonatomic,__weak) id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider> itemIdentifierProvider;                      //@synthesize itemIdentifierProvider=_itemIdentifierProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBScrollPositionRestoringScrollViewListenerAnnouncer * listenerAnnouncer; 
@property (assign,nonatomic,__weak) id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider> restorationIndexPathProvider;              //@synthesize restorationIndexPathProvider=_restorationIndexPathProvider - In the implementation block
-(FBScrollPositionRestoringScrollViewListenerAnnouncer *)listenerAnnouncer;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(id)scrollView:(id)arg1 identifierForRowAtIndexPath:(id)arg2 ;
-(CGRect)scrollView:(id)arg1 rectForRowAtIndexPath:(id)arg2 ;
-(id)scrollView:(id)arg1 indexPathForRowWithIdentifier:(id)arg2 ;
-(void)setRestorationEnabled:(BOOL)arg1 forKey:(id)arg2 ;
-(id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider>)restorationIndexPathProvider;
-(void)setRestorationIndexPathProvider:(id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider>)arg1 ;
-(BOOL)isRestorationEnabled;
-(id)initUsingPrepareLayoutRestoration:(BOOL)arg1 ;
-(void)didPrepareLayoutForCollectionView:(id)arg1 ;
-(id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider>)itemIdentifierProvider;
-(void)setItemIdentifierProvider:(id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider>)arg1 ;
-(id)init;
@end

