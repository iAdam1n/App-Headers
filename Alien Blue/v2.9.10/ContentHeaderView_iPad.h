/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/NavigationBar_iPad.h>

@class Post, JMViewOverlay, UIBarButtonItem, UINavigationBar;

@interface ContentHeaderView_iPad : NavigationBar_iPad {

	Post* _post;
	JMViewOverlay* _actionButton;
	UIBarButtonItem* _actionBarButtonItemProxy;
	JMViewOverlay* _saveButton;
	JMViewOverlay* _hideButton;
	JMViewOverlay* _downvoteButton;
	JMViewOverlay* _upvoteButton;
	UINavigationBar* _navbarProxy;

}

@property (retain) Post * post;                                             //@synthesize post=_post - In the implementation block
@property (retain) JMViewOverlay * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (retain) UIBarButtonItem * actionBarButtonItemProxy;              //@synthesize actionBarButtonItemProxy=_actionBarButtonItemProxy - In the implementation block
@property (retain) JMViewOverlay * saveButton;                              //@synthesize saveButton=_saveButton - In the implementation block
@property (retain) JMViewOverlay * hideButton;                              //@synthesize hideButton=_hideButton - In the implementation block
@property (retain) JMViewOverlay * downvoteButton;                          //@synthesize downvoteButton=_downvoteButton - In the implementation block
@property (retain) JMViewOverlay * upvoteButton;                            //@synthesize upvoteButton=_upvoteButton - In the implementation block
@property (retain) UINavigationBar * navbarProxy;                           //@synthesize navbarProxy=_navbarProxy - In the implementation block
-(void)setPost:(Post *)arg1 ;
-(Post *)post;
-(void)toggleHide;
-(void)updateWithPost:(id)arg1 ;
-(UIBarButtonItem *)actionBarButtonItemProxy;
-(JMViewOverlay *)hideButton;
-(JMViewOverlay *)downvoteButton;
-(JMViewOverlay *)upvoteButton;
-(void)setHideButton:(JMViewOverlay *)arg1 ;
-(void)setUpvoteButton:(JMViewOverlay *)arg1 ;
-(void)setDownvoteButton:(JMViewOverlay *)arg1 ;
-(void)voteUpPost;
-(void)voteDownPost;
-(void)toggleSave;
-(void)setNavbarProxy:(UINavigationBar *)arg1 ;
-(UINavigationBar *)navbarProxy;
-(void)setActionBarButtonItemProxy:(UIBarButtonItem *)arg1 ;
-(void)redrawButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(JMViewOverlay *)actionButton;
-(JMViewOverlay *)saveButton;
-(void)setSaveButton:(JMViewOverlay *)arg1 ;
-(void)setActionButton:(JMViewOverlay *)arg1 ;
@end

