/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBListDataProvider.h>
#import <Facebook/FBListComponentDebugHelperUpdateListener.h>

@protocol FBGraphQLConnectionFetchStatusListener;
@class FBListComponentListDataProviderChangesetAdapter, FBListComponentTracker, FBListComponentDebugHelper, FBListViewDebuggerClient, NSString;

@interface FBListComponentListDataProvider : NSObject <FBListDataProvider, FBListComponentDebugHelperUpdateListener> {

	FBListComponentListDataProviderChangesetAdapter* _changesetWriter;
	id<FBGraphQLConnectionFetchStatusListener> _fetchStatusListener;
	FBListComponentTracker* _listComponentTracker;
	FBListComponentDebugHelper* _debugHelper;
	FBListViewDebuggerClient* _debuggerClient;
	/*^block*/id _componentGenerationBlock;
	id _componentControllerContext;
	BOOL _hasSetChangesetWriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didScrollToBottom;
-(id)initWithChangesetWriter:(id)arg1 fetchStatusListener:(id)arg2 ;
-(void)didLayoutView;
-(void)configureListComponentDebugHelperWithCrashReports;
-(void)didLoadView;
-(void)didScrollToTop;
-(id)initWithChangesetWriter:(id)arg1 fetchStatusListener:(id)arg2 listComponentTrackerStateListener:(id)arg3 listComponentGenerationBlock:(/*^block*/id)arg4 componentControllerContext:(id)arg5 shouldCombineChangesets:(BOOL)arg6 listComponentTracker:(id)arg7 debugHelper:(id)arg8 debuggerClient:(id)arg9 analyticsModule:(id)arg10 experimentManager:(id)arg11 ;
-(void)didUpdateListComponentHierarchyMessage:(id)arg1 changesetsMessage:(id)arg2 ;
-(id)initWithChangesetWriter:(id)arg1 fetchStatusListener:(id)arg2 listComponentTrackerStateListener:(id)arg3 listComponentGenerationBlock:(/*^block*/id)arg4 componentControllerContext:(id)arg5 shouldCombineChangesets:(BOOL)arg6 analyticsModule:(id)arg7 experimentManager:(id)arg8 ;
-(void)viewDidAppear;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)viewDidDisappear;
@end
