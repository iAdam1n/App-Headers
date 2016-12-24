/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardCell.h>
#import <Facebook/FBPageCardProtocol.h>

@protocol FBPageActivitiesPostLinksCardCellDelegate;
@class FBPageStackingView, FBPageActionableLinkView, NSString;

@interface FBPageActivitiesPostLinksCardCell : FBMemPageCardCell <FBPageCardProtocol> {

	FBPageStackingView* _stackingView;
	unsigned long long _scheduledPostCount;
	unsigned long long _draftPostCount;
	id<FBPageActivitiesPostLinksCardCellDelegate> _delegate;
	FBPageActionableLinkView* _scheduledPostsView;
	FBPageActionableLinkView* _draftPostsView;

}

@property (nonatomic,retain) FBPageActionableLinkView * scheduledPostsView;                              //@synthesize scheduledPostsView=_scheduledPostsView - In the implementation block
@property (nonatomic,retain) FBPageActionableLinkView * draftPostsView;                                  //@synthesize draftPostsView=_draftPostsView - In the implementation block
@property (assign,nonatomic) unsigned long long scheduledPostCount;                                      //@synthesize scheduledPostCount=_scheduledPostCount - In the implementation block
@property (assign,nonatomic) unsigned long long draftPostCount;                                          //@synthesize draftPostCount=_draftPostCount - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageActivitiesPostLinksCardCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBPageActionableLinkView *)scheduledPostsView;
-(FBPageActionableLinkView *)draftPostsView;
-(void)_openScheduledPosts;
-(void)_openDraftPosts;
-(void)setScheduledPostsView:(FBPageActionableLinkView *)arg1 ;
-(void)setDraftPostsView:(FBPageActionableLinkView *)arg1 ;
-(unsigned long long)scheduledPostCount;
-(unsigned long long)draftPostCount;
-(void)setScheduledPostCount:(unsigned long long)arg1 ;
-(void)setDraftPostCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBPageActivitiesPostLinksCardCellDelegate>)arg1 ;
-(id<FBPageActivitiesPostLinksCardCellDelegate>)delegate;
-(void)configureWithViewModel:(id)arg1 ;
@end
