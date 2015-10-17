/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:57 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class PTHTweetbotStatusView, PTHTweetbotEntityTextColorAppearance, NSMutableArray, PTHTweetbotPostDraft, NSString;

@interface PTHTweetbotPostReplyController : PTHViewController <PTHTweetbotPostDraftUpdateProtocol> {

	PTHTweetbotStatusView* _statusView;
	PTHTweetbotEntityTextColorAppearance* _colorAppearance;
	NSMutableArray* _threadConstraints;
	PTHTweetbotPostDraft* _draft;

}

@property (nonatomic,retain) PTHTweetbotPostDraft * draft;              //@synthesize draft=_draft - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)loadView;
-(void)updateViewConstraints;
@end
