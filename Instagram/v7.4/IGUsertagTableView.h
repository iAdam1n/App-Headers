/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>

@protocol IGAutocompleteDataSource, IGUsertagTableViewDelegate;
@class IGUserListLocalDataSource, IGUserListNetworkDataSource, NSObject, NSString;

@interface IGUsertagTableView : UITableView <UITableViewDelegate, UITableViewDataSource, IGUserListNetworkDataSourceDelegate> {

	IGUserListLocalDataSource* _localUsersDataSource;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	NSObject*<IGAutocompleteDataSource> _currentDataSource;
	id<IGUsertagTableViewDelegate> _tagDelegate;
	NSString* _query;

}

@property (assign,nonatomic,__weak) id<IGUsertagTableViewDelegate> tagDelegate;              //@synthesize tagDelegate=_tagDelegate - In the implementation block
@property (nonatomic,copy) NSString * query;                                                 //@synthesize query=_query - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 userCellForRow:(long long)arg2 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(id)noResultsCellForTableView:(id)arg1 ;
-(void)setTagDelegate:(id<IGUsertagTableViewDelegate>)arg1 ;
-(id)searchPromptCellForTableView:(id)arg1 ;
-(id<IGUsertagTableViewDelegate>)tagDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)performSearch;
@end

