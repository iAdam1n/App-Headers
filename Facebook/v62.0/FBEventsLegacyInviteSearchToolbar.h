/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBSearchBar, FBEventsFaceBadgeView;

@interface FBEventsLegacyInviteSearchToolbar : UIView {

	UIView* _faceBadgeStage;
	UIView* _bottomSeparatorView;
	UIOffset _stageOffset;
	FBSearchBar* _searchBar;
	FBEventsFaceBadgeView* _faceBadge;
	long long _state;

}

@property (nonatomic,readonly) FBSearchBar * searchBar;                        //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) FBEventsFaceBadgeView * faceBadge;              //@synthesize faceBadge=_faceBadge - In the implementation block
@property (assign,nonatomic) long long state;                                  //@synthesize state=_state - In the implementation block
-(FBEventsFaceBadgeView *)faceBadge;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(FBSearchBar *)searchBar;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
@end
