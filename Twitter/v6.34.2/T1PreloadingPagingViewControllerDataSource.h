/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNPagingViewControllerDataSource.h>

@protocol TFNPagingViewControllerDataSource;
@class NSMutableDictionary, NSString;

@interface T1PreloadingPagingViewControllerDataSource : NSObject <TFNPagingViewControllerDataSource> {

	id<TFNPagingViewControllerDataSource> _dataSource;
	NSMutableDictionary* _viewControllersByIndex;

}

@property (assign,nonatomic,__weak) id<TFNPagingViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewControllersByIndex;                         //@synthesize viewControllersByIndex=_viewControllersByIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)preloadViewControllersForPagingViewController:(id)arg1 aroundIndex:(unsigned long long)arg2 withDistance:(unsigned long long)arg3 dockedViewController:(id)arg4 ;
-(NSMutableDictionary *)viewControllersByIndex;
-(id)_backgroundViewControllerForPagingViewController:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setViewControllersByIndex:(NSMutableDictionary *)arg1 ;
-(long long)numberOfPagesInPagingViewController:(id)arg1 ;
-(CGSize)pagingViewController:(id)arg1 sizeOfPageAtIndex:(long long)arg2 ;
-(id)pagingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(void)preloadViewControllersForPagingViewController:(id)arg1 aroundIndex:(unsigned long long)arg2 withDistance:(unsigned long long)arg3 ;
-(void)setDataSource:(id<TFNPagingViewControllerDataSource>)arg1 ;
-(id<TFNPagingViewControllerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
@end

