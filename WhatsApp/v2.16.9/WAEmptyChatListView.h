/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol WAEmptyChatListViewDelegate;
@class UITableView, UITableViewCell, UIView, UITextView, UIWebView, UILabel, NSString;

@interface WAEmptyChatListView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	UITableViewCell* _tellAFriendCell;
	UIView* _headerView;
	UITextView* _textView;
	UIWebView* _webView;
	UILabel* _bottomLabel;
	id<WAEmptyChatListViewDelegate> _emptyViewDelegate;

}

@property (assign,nonatomic,__weak) id<WAEmptyChatListViewDelegate> emptyViewDelegate;              //@synthesize emptyViewDelegate=_emptyViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fontSizeDidChange:(id)arg1 ;
-(void)setEmptyViewDelegate:(id<WAEmptyChatListViewDelegate>)arg1 ;
-(void)configureTextViewWithFont:(id)arg1 text:(id)arg2 ;
-(id)topHelperHTMLStringWithFont:(id)arg1 ;
-(id<WAEmptyChatListViewDelegate>)emptyViewDelegate;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tintColorDidChange;
@end

