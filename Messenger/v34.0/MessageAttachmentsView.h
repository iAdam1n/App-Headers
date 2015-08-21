/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMConfigurable.h>

@protocol MessageAttachmentsViewDelegate;
@class NSArray, UITableView, NSString;

@interface MessageAttachmentsView : UIView <UITableViewDelegate, UITableViewDataSource, FBClassProvidable, FBMConfigurable> {

	id<MessageAttachmentsViewDelegate> _delegate;
	NSArray* _attachments;
	UITableView* _tableView;

}

@property (assign,nonatomic) id<MessageAttachmentsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                    //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWithAttachments:(id)arg1 ;
-(BOOL)isConfigured;
-(void)handleLongPress:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MessageAttachmentsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MessageAttachmentsViewDelegate>)delegate;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)canResignFirstResponder;
-(UITableView *)tableView;
-(void)delete:(id)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
@end

