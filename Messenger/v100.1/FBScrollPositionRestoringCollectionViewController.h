/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScrollPositionRestoringScrollViewControllerDelegate.h>
#import <Messenger/FBCollectionViewUpdateListener.h>
#import <Messenger/FBScrollPositionRestoringScrollViewController.h>

@protocol FBScrollPositionRestoringScrollViewRestorationIndexPathProvider, FBScrollPositionRestoringCollectionViewItemIdentifierProvider;
@class FBScrollPositionRestoringScrollViewController, NSString, FBScrollPositionRestoringScrollViewListenerAnnouncer;

@interface FBScrollPositionRestoringCollectionViewController : NSObject <FBScrollPositionRestoringScrollViewControllerDelegate, FBCollectionViewUpdateListener, FBScrollPositionRestoringScrollViewController> {

	FBScrollPositionRestoringScrollViewController* _scrollViewController;
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
-(void)collectionViewWillBeginSingleUpdate:(id)arg1 ;
-(void)collectionViewDidEndSingleUpdate:(id)arg1 ;
-(void)collectionViewWillBeginUpdates:(id)arg1 ;
-(void)collectionViewDidEndUpdates:(id)arg1 ;
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(id)scrollView:(id)arg1 identifierForRowAtIndexPath:(id)arg2 ;
-(CGRect)scrollView:(id)arg1 rectForRowAtIndexPath:(id)arg2 ;
-(id)scrollView:(id)arg1 indexPathForRowWithIdentifier:(id)arg2 ;
-(void)setRestorationEnabled:(BOOL)arg1 forKey:(id)arg2 ;
-(BOOL)isRestorationEnabledForKey:(id)arg1 ;
-(id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider>)restorationIndexPathProvider;
-(void)setRestorationIndexPathProvider:(id<FBScrollPositionRestoringScrollViewRestorationIndexPathProvider>)arg1 ;
-(BOOL)isRestorationEnabled;
-(id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider>)itemIdentifierProvider;
-(void)setItemIdentifierProvider:(id<FBScrollPositionRestoringCollectionViewItemIdentifierProvider>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
