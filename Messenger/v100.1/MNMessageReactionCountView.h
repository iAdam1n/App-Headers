/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class MNMessageReactionView, UILabel;

@interface MNMessageReactionCountView : UIControl {

	MNMessageReactionView* _reactionView;
	UILabel* _countLabel;

}
+(CGSize)sizeForReaction:(id)arg1 count:(long long)arg2 ;
-(id)initWithReaction:(id)arg1 count:(long long)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
