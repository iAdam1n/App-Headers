/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxEligibilityFetchRunning.h>

@class FBNuxCatalog, FBUserSession, FBNuxCatalogUpdater, NSDate, FBNuxAppConfiguration, NSString;

@interface FBNuxEligibilityFetchRunner : NSObject <FBNuxEligibilityFetchRunning> {

	BOOL _isFetching;
	FBNuxCatalog* _nuxCatalog;
	FBUserSession* _userSession;
	FBNuxCatalogUpdater* _nuxCatalogUpdater;
	NSDate* _lastFetchTime;
	FBNuxAppConfiguration* _nuxAppConfiguration;
	BOOL _devMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)lastFetchTime;
-(BOOL)isFetchingEligibility;
-(id)initWithSession:(id)arg1 nuxAppConfiguration:(id)arg2 nuxCatalog:(id)arg3 nuxCatalogUpdater:(id)arg4 devMode:(BOOL)arg5 ;
-(void)forceUpdateEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateNuxEligibilityIfNeededWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxEligibilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_updateNuxCatalogWithServerNuxes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_nuxFetchFailure:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
