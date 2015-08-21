/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBGradientView, FBButtonBarButton, UIView, FBActionBar, FBActionBarItem;

@interface FBActionBarWithProminentButtonView : UIView {

	FBGradientView* _bottomShadow;
	BOOL _shouldUsePageEntityHeader;
	unsigned long long _style;
	FBButtonBarButton* _bigCTAButton;
	UIView* _buttonSeparatorView;
	UIView* _lineSeparatorView;
	FBActionBar* _actionBar;
	FBActionBarItem* _prominentActionBarItem;

}

@property (nonatomic,retain) FBActionBar * actionBar;                               //@synthesize actionBar=_actionBar - In the implementation block
@property (nonatomic,retain) FBActionBarItem * prominentActionBarItem;              //@synthesize prominentActionBarItem=_prominentActionBarItem - In the implementation block
-(FBActionBar *)actionBar;
-(id)initWithStyle:(unsigned long long)arg1 shouldUsePageEntityHeader:(BOOL)arg2 ;
-(void)setActionBar:(FBActionBar *)arg1 ;
-(void)setProminentActionBarItem:(FBActionBarItem *)arg1 ;
-(FBActionBarItem *)prominentActionBarItem;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

