/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAContactsSearchControllerDelegate.h>

@protocol WAMentionsSelectorViewDelegate;
@class NSArray, WAContactsSearchController, NSString, WAMentionsTableView, UIView;

@interface WAMentionsSelectorView : UIView <UITableViewDelegate, UITableViewDataSource, WAContactsSearchControllerDelegate> {

	NSArray* _contacts;
	WAContactsSearchController* _contactsSearchController;
	NSString* _searchTerm;
	WAMentionsTableView* _tableView;
	NSRange _textRange;
	UIView* _bottomView;
	NSArray* _cachedContacts;
	BOOL _clearingTable;
	double _currentHeightLimit;
	BOOL _needsToClearTable;
	double _previousContentOffset;
	id<WAMentionsSelectorViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAMentionsSelectorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactsSearchControllerDelegateDidInvalidateSearchResults:(id)arg1 ;
-(void)updateSearchTerm:(id)arg1 forTextRange:(NSRange)arg2 ;
-(id)initWithFrame:(CGRect)arg1 chatSession:(id)arg2 ;
-(void)updateFrame:(CGRect)arg1 animationCurve:(long long)arg2 animationDuration:(double)arg3 ;
-(double)tableViewHeightNeeded;
-(void)setVisibleHeightLimit:(double)arg1 animationOptions:(unsigned long long)arg2 animationDuration:(double)arg3 ;
-(void)setDelegate:(id<WAMentionsSelectorViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<WAMentionsSelectorViewDelegate>)delegate;
-(id)bottomView;
@end
