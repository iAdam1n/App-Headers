/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ResizableHeaderContainerViewController.h>
#import <Twitter/T1TabbedTimelinesViewControllerDataSource.h>
#import <Twitter/T1TabbedTimelinesViewControllerDelegate.h>
#import <Twitter/T1ResizableHeaderViewControllerDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNUISearching.h>
#import <Twitter/TFNNavigationControllerTransitionProvider.h>
#import <Twitter/TFNLayoutMetricsEnvironment.h>

@class TFNTwitterSearchQuery, NSString, NSArray, TFNDownload, TFNTwitterAccount;

@interface T1NewEventContainerViewController : T1ResizableHeaderContainerViewController <T1TabbedTimelinesViewControllerDataSource, T1TabbedTimelinesViewControllerDelegate, T1ResizableHeaderViewControllerDelegate, TFNTwitterAuthenticated, TFNUISearching, TFNNavigationControllerTransitionProvider, TFNLayoutMetricsEnvironment> {

	TFNTwitterSearchQuery* _searchQuery;
	NSString* _scribeParameterContext;
	NSString* _eventID;
	NSArray* _timelineViewControllers;
	TFNDownload* _bannerImageDownload;
	long long _requestedActiveTab;

}

@property (nonatomic,copy) NSString * eventID;                                 //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,retain) NSArray * timelineViewControllers;                //@synthesize timelineViewControllers=_timelineViewControllers - In the implementation block
@property (nonatomic,retain) TFNDownload * bannerImageDownload;                //@synthesize bannerImageDownload=_bannerImageDownload - In the implementation block
@property (assign,nonatomic) long long requestedActiveTab;                     //@synthesize requestedActiveTab=_requestedActiveTab - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
@property (nonatomic,retain) TFNTwitterSearchQuery * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,copy) NSString * scribeParameterContext;                  //@synthesize scribeParameterContext=_scribeParameterContext - In the implementation block
@property (assign,nonatomic) BOOL filtersEnabled; 
-(id)createSearchViewControllerWithTitle:(id)arg1 filterType:(unsigned long long)arg2 resultType:(unsigned long long)arg3 queryRewriteId:(id)arg4 supportedSectionTypes:(unsigned long long)arg5 scribeSection:(id)arg6 ;
-(id)scribePage;
-(id)initWithEventID:(id)arg1 ;
-(void)setSearchQuery:(TFNTwitterSearchQuery *)arg1 ;
-(void)setScribeParameterContext:(NSString *)arg1 ;
-(void)fetchBannerImageForURL:(id)arg1 ;
-(id)scribeSection;
-(id)scribeComponent;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(id)resizableHeaderSubheaderViewControllersForResizableHeaderViewController:(id)arg1 ;
-(id)navigationControllerTransitionForOperation:(long long)arg1 ;
-(void)setRequestedActiveTab:(long long)arg1 ;
-(TFNDownload *)bannerImageDownload;
-(NSArray *)timelineViewControllers;
-(void)setSelectedTabIndex:(long long)arg1 ;
-(void)setBannerImageDownload:(TFNDownload *)arg1 ;
-(id)tabbedViewController:(id)arg1 titleAtIndex:(long long)arg2 ;
-(long long)numberOfViewControllersInTabbedViewController:(id)arg1 ;
-(id)tabbedViewController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(NSString *)scribeParameterContext;
-(void)setTimelineViewControllers:(NSArray *)arg1 ;
-(long long)requestedActiveTab;
-(void)setEventID:(NSString *)arg1 ;
-(NSString *)eventID;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(TFNTwitterSearchQuery *)searchQuery;
@end
