/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNuxEligibilityFetchRunning.h>

@protocol OS_dispatch_queue;
@class FBNuxCatalog, MNOmnistoreNuxStore, FBNuxCatalogUpdater, NSObject, NSString;

@interface MNNuxEligibilityFetchRunner : NSObject <FBNuxEligibilityFetchRunning> {

	FBNuxCatalog* _nuxCatalog;
	MNOmnistoreNuxStore* _nuxStore;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateNuxEligibilityIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)forceUpdateEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isFetchingEligibility;
-(id)lastFetchTime;
-(id)initWithNuxStore:(id)arg1 nuxCatalog:(id)arg2 nuxCatalogUpdater:(id)arg3 ;
@end
