/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Telegram/TGSearchBarDelegate.h>

@class NSString, NSArray, SMetaDisposable, UITableView;

@interface TGHashtagSearchController : TGViewController <UITableViewDataSource, UITableViewDelegate, TGSearchBarDelegate> {

	NSString* _query;
	long long _peerId;
	long long _accessHash;
	NSArray* _searchResults;
	SMetaDisposable* _searchDisposable;
	SMetaDisposable* _downloadHistoryDisposable;
	UITableView* _tableView;
	long long _customResultBlockPeerId;
	/*^block*/id _customResultBlock;

}

@property (assign,nonatomic) long long customResultBlockPeerId;              //@synthesize customResultBlockPeerId=_customResultBlockPeerId - In the implementation block
@property (nonatomic,copy) id customResultBlock;                             //@synthesize customResultBlock=_customResultBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeDialogListData:(id)arg1 customUser:(id)arg2 selfUser:(id)arg3 ;
-(void)backPressed;
-(void)searchBar:(id)arg1 willChangeHeight:(double)arg2 ;
-(id)initWithQuery:(id)arg1 peerId:(long long)arg2 accessHash:(long long)arg3 ;
-(void)beginSearchWithQuery:(id)arg1 ;
-(void)prepareCell:(id)arg1 forConversation:(id)arg2 animated:(BOOL)arg3 ;
-(long long)customResultBlockPeerId;
-(void)setCustomResultBlockPeerId:(long long)arg1 ;
-(id)customResultBlock;
-(void)setCustomResultBlock:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)setSearchResults:(id)arg1 ;
@end
