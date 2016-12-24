/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntity.h>
#import <Messenger/FBRichStoryEntityUpdatable.h>

@class BFTask, NSString, NSURL, NSArray;

@interface FBRichStoryPageLikeCTAEntity : NSObject <FBRichStoryEntity, FBRichStoryEntityUpdatable> {

	BOOL _viewerLiked;
	BFTask* _didUpdateTask;
	NSString* _pageName;
	NSURL* _pageProfilePictureURL;
	NSString* _socialContext;
	NSArray* _friendsWhoLikeProfilePictureURLs;
	NSString* _CTATitle;
	/*^block*/id _CTAAction;
	/*^block*/id _logViewedAction;

}

@property (nonatomic,copy,readonly) NSString * pageName;                                     //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,readonly) NSURL * pageProfilePictureURL;                                //@synthesize pageProfilePictureURL=_pageProfilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialContext;                                //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * friendsWhoLikeProfilePictureURLs;              //@synthesize friendsWhoLikeProfilePictureURLs=_friendsWhoLikeProfilePictureURLs - In the implementation block
@property (nonatomic,copy,readonly) NSString * CTATitle;                                     //@synthesize CTATitle=_CTATitle - In the implementation block
@property (nonatomic,readonly) BOOL viewerLiked;                                             //@synthesize viewerLiked=_viewerLiked - In the implementation block
@property (nonatomic,copy,readonly) id CTAAction;                                            //@synthesize CTAAction=_CTAAction - In the implementation block
@property (nonatomic,copy,readonly) id logViewedAction;                                      //@synthesize logViewedAction=_logViewedAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BFTask * didUpdateTask;                                       //@synthesize didUpdateTask=_didUpdateTask - In the implementation block
-(NSString *)pageName;
-(BFTask *)didUpdateTask;
-(NSURL *)pageProfilePictureURL;
-(NSString *)socialContext;
-(NSArray *)friendsWhoLikeProfilePictureURLs;
-(NSString *)CTATitle;
-(BOOL)viewerLiked;
-(id)CTAAction;
-(id)logViewedAction;
-(void)_pageDidUpdate:(id)arg1 handle:(id)arg2 ;
-(id)initWithPageName:(id)arg1 pageProfilePictureURL:(id)arg2 socialContext:(id)arg3 friendsWhoLikeProfilePictureURLs:(id)arg4 CTATitle:(id)arg5 viewerLiked:(BOOL)arg6 CTAAction:(/*^block*/id)arg7 logViewedAction:(/*^block*/id)arg8 didUpdateTask:(id)arg9 ;
@end
