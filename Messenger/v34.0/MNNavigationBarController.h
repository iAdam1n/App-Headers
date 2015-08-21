/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNNavigationBarControllerDelegate;
@class NSMutableArray, UINavigationItem, NSString, UIView, UIBarButtonItem;

@interface MNNavigationBarController : NSObject {

	NSMutableArray* _savedTitlesAndTitleViews;
	UINavigationItem* _navigationItem;
	id<MNNavigationBarControllerDelegate> _delegate;
	NSString* _defaultTitle;
	UIView* _defaultTitleView;
	UIBarButtonItem* _backChevronButtonItem;

}

@property (assign,nonatomic,__weak) id<MNNavigationBarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * defaultTitle;                                              //@synthesize defaultTitle=_defaultTitle - In the implementation block
@property (nonatomic,retain) UIView * defaultTitleView;                                          //@synthesize defaultTitleView=_defaultTitleView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backChevronButtonItem;                            //@synthesize backChevronButtonItem=_backChevronButtonItem - In the implementation block
-(UIBarButtonItem *)backChevronButtonItem;
-(void)_onBackButtonTap;
-(void)setBackChevronButtonItem:(UIBarButtonItem *)arg1 ;
-(id)setTemporaryTitleView:(id)arg1 ;
-(void)removeTemporaryTitleViewWithId:(id)arg1 ;
-(void)removeTemporaryTitleWithId:(id)arg1 ;
-(void)setDefaultTitle:(NSString *)arg1 ;
-(void)setDefaultTitleView:(UIView *)arg1 ;
-(void)invalidateTitleView;
-(void)setBackChevronButtonItem;
-(void)removeLeftBarButtonItem;
-(NSString *)defaultTitle;
-(UIView *)defaultTitleView;
-(void)_updateNavigationItemTitle;
-(void)dealloc;
-(void)setDelegate:(id<MNNavigationBarControllerDelegate>)arg1 ;
-(id<MNNavigationBarControllerDelegate>)delegate;
-(id)initWithNavigationItem:(id)arg1 ;
-(id)setTemporaryTitle:(id)arg1 ;
@end

