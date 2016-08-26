/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBBackstageNoFriendsCellDelegate;
@class FBButton;

@interface FBBackstageNoFriendsCell : UITableViewCell {

	FBButton* addFriendsButton;
	id<FBBackstageNoFriendsCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBackstageNoFriendsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)rowHeight;
+(id)cellIdentifier;
-(void)setDelegate:(id<FBBackstageNoFriendsCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBBackstageNoFriendsCellDelegate>)delegate;
-(void)_buttonPressed;
@end
