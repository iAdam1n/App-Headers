/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@protocol FBGroupsInfoViewConfig, FBGroupsInfoUtilityDataSourceDelegate, FBTableViewMutating;
@class FBMemGroup, FBUserSession, NSString;

@interface FBGroupsInfoUtilityDataSource : NSObject <UITableViewDataSource> {

	FBMemGroup* _group;
	FBUserSession* _session;
	id<FBGroupsInfoViewConfig> _config;
	id<FBGroupsInfoUtilityDataSourceDelegate> _delegate;
	id<FBTableViewMutating> _tableViewMutator;

}

@property (assign,nonatomic,__weak) id<FBGroupsInfoUtilityDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBTableViewMutating> tableViewMutator;                        //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(id)initWithSession:(id)arg1 group:(id)arg2 viewConfig:(id)arg3 ;
-(void)setDelegate:(id<FBGroupsInfoUtilityDataSourceDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBGroupsInfoUtilityDataSourceDelegate>)delegate;
-(void)updateGroup:(id)arg1 ;
@end

