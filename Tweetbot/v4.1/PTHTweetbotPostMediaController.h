/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>
#import <Tweetbot/PTHTweetbotPostDraftUpdateProtocol.h>

@class NSArray, NSMutableArray, PTHTweetbotPostDraft, PTHTweetbotPostController, NSString;

@interface PTHTweetbotPostMediaController : PTHViewController <PTHTweetbotPostDraftUpdateProtocol> {

	NSArray* _media;
	NSMutableArray* _previewViews;
	NSMutableArray* _horizontalConstraints;
	PTHTweetbotPostDraft* _draft;
	PTHTweetbotPostController* _postController;

}

@property (nonatomic,retain) PTHTweetbotPostDraft * draft;                                   //@synthesize draft=_draft - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotPostController * postController;              //@synthesize postController=_postController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)draftDidUpdate;
-(PTHTweetbotPostDraft *)draft;
-(void)setDraft:(PTHTweetbotPostDraft *)arg1 ;
-(void)setPostController:(PTHTweetbotPostController *)arg1 ;
-(void)_showMedium:(id)arg1 ;
-(PTHTweetbotPostController *)postController;
-(void)loadView;
@end
