/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNComposerMoreDrawerRowHeaderViewDelegate;
@class UILabel, UIButton, NSString;

@interface MNComposerMoreDrawerRowHeaderView : UIView {

	UILabel* _titleLabel;
	UIButton* _viewAllButton;
	BOOL _hasViewAllButton;
	id<MNComposerMoreDrawerRowHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNComposerMoreDrawerRowHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL hasViewAllButton;                                                      //@synthesize hasViewAllButton=_hasViewAllButton - In the implementation block
-(BOOL)hasViewAllButton;
-(void)_handleViewAllButton:(id)arg1 ;
-(void)setHasViewAllButton:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNComposerMoreDrawerRowHeaderViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<MNComposerMoreDrawerRowHeaderViewDelegate>)delegate;
-(NSString *)title;
@end
