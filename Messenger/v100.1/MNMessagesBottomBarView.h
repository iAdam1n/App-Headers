/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNMessagesBottomBarView : UIView {

	UIView* _supplementaryView;
	UIView* _composerView;
	BOOL _showsSupplementaryView;

}

@property (nonatomic,retain) UIView * supplementaryView;               //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) UIView * composerView;                    //@synthesize composerView=_composerView - In the implementation block
@property (assign,nonatomic) BOOL showsSupplementaryView;              //@synthesize showsSupplementaryView=_showsSupplementaryView - In the implementation block
-(UIView *)composerView;
-(UIView *)supplementaryView;
-(void)setComposerView:(UIView *)arg1 ;
-(void)setSupplementaryView:(UIView *)arg1 ;
-(BOOL)showsSupplementaryView;
-(void)setShowsSupplementaryView:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsSupplementaryView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
