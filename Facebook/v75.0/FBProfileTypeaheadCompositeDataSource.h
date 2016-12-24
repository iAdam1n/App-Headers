/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Facebook/FBProfileTypeaheadDataSourceDelegate.h>

@protocol FBProfileTypeaheadCompositeDataSourceDelegate;
@class FBUserSession, NSArray, NSString;

@interface FBProfileTypeaheadCompositeDataSource : NSObject <UITableViewDataSource, FBProfileTypeaheadDataSourceDelegate> {

	FBUserSession* _session;
	NSArray* _dataSourceArray;
	NSString* _currentSearchQuery;
	id<FBProfileTypeaheadCompositeDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileTypeaheadCompositeDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateResultsForSearchQuery:(id)arg1 ;
-(id)_deduplicatedResults;
-(void)profileTypeaheadDataSourceDidChangeContents:(id)arg1 ;
-(id)initWithDataSources:(id)arg1 session:(id)arg2 ;
-(id)objectIDsForLogging;
-(void)setDelegate:(id<FBProfileTypeaheadCompositeDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBProfileTypeaheadCompositeDataSourceDelegate>)delegate;
-(BOOL)isLoading;
@end
